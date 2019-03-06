/*
 * Copyright (c) 2018 Agility Robotics
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include "cassie_out_t.h"
#include "cassie_user_in_t.h"
#include "udp.h"


// Dummy controller that outputs zeros
static void null_controller(const cassie_out_t *out, cassie_user_in_t *in)
{
    memset(in, 0, sizeof (cassie_user_in_t));
}


int main()
{
    // Connect user computer to target computer
    int sock = udp_init_client("10.10.10.3", "25000",
                               "10.10.10.100", "25001");
    if (-1 == sock)
        exit(EXIT_FAILURE);

    // Create packet input/output buffers
    unsigned char recvbuf[PACKET_HEADER_LEN + CASSIE_OUT_T_PACKED_LEN];
    unsigned char sendbuf[PACKET_HEADER_LEN + CASSIE_USER_IN_T_PACKED_LEN];

    // Split header and data
    const unsigned char *header_in = recvbuf;
    const unsigned char *data_in = &recvbuf[2];
    unsigned char *header_out = sendbuf;
    unsigned char *data_out = &sendbuf[2];

    // Create cassie input/output structs
    cassie_out_t cassie_out;
    cassie_user_in_t cassie_in;

    // Create header information struct
    packet_header_info_t header_info = {0};

    // Listen/respond loop
    while (true) {
        // Poll for a new packet
        wait_for_packet(sock, recvbuf, sizeof recvbuf, NULL, NULL);

        // Process incoming header and write outgoing header
        process_packet_header(&header_info, header_in, header_out);
        printf("[%6.3f] %d / %d\n",
               ((float) clock()) / CLOCKS_PER_SEC,
               header_info.delay, header_info.seq_num_in_diff);

        // Unpack received data into cassie output struct
        unpack_cassie_out_t(data_in, &cassie_out);

        // Run controller
        null_controller(&cassie_out, &cassie_in);

        // Pack cassie input struct into outgoing packet
        pack_cassie_user_in_t(&cassie_in, data_out);

        // Send response
        send_packet(sock, sendbuf, sizeof sendbuf, NULL, 0);
    }
}
