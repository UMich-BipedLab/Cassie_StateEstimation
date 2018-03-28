#ifndef __c43_UDP_Communication_h__
#define __c43_UDP_Communication_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc43_UDP_CommunicationInstanceStruct
#define typedef_SFc43_UDP_CommunicationInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c43_sfEvent;
  boolean_T c43_doneDoubleBufferReInit;
  uint8_T c43_is_active_c43_UDP_Communication;
  real_T (*c43_pose_data)[43];
  real_T (*c43_X)[49];
  real_T (*c43_P)[441];
} SFc43_UDP_CommunicationInstanceStruct;

#endif                                 /*typedef_SFc43_UDP_CommunicationInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c43_UDP_Communication_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c43_UDP_Communication_get_check_sum(mxArray *plhs[]);
extern void c43_UDP_Communication_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
