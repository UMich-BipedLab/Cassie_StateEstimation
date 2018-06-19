/* Include files */

#include "RightInvariant_EKF_cgxe.h"
#include "m_F1Scry3smjzFxDJqc88Zr.h"

unsigned int cgxe_RightInvariant_EKF_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 3613213292 &&
      ssGetChecksum1(S) == 500051771 &&
      ssGetChecksum2(S) == 2205635358 &&
      ssGetChecksum3(S) == 2562294435) {
    method_dispatcher_F1Scry3smjzFxDJqc88Zr(S, method, data);
    return 1;
  }

  return 0;
}
