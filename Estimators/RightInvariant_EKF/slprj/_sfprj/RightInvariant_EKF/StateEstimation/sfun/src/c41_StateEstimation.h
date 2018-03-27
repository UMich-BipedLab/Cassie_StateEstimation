#ifndef __c41_StateEstimation_h__
#define __c41_StateEstimation_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef struct_tag_s6OB5gUPZ36CI1QpFApZgNB
#define struct_tag_s6OB5gUPZ36CI1QpFApZgNB

struct tag_s6OB5gUPZ36CI1QpFApZgNB
{
  real_T vectorNavOrientation[4];
  real_T vectorNavAngularVelocity[3];
  real_T vectorNavLinearAcceleration[3];
  real_T vectorNavMagneticField[3];
  real_T vectorNavPressure;
  real_T vectorNavTemperature;
  real_T motorPosition[10];
  real_T motorVelocity[10];
  real_T jointPosition[4];
  real_T jointVelocity[4];
  real_T radio[16];
  real_T stateOfCharge;
  real_T status;
};

#endif                                 /*struct_tag_s6OB5gUPZ36CI1QpFApZgNB*/

#ifndef typedef_c41_s6OB5gUPZ36CI1QpFApZgNB
#define typedef_c41_s6OB5gUPZ36CI1QpFApZgNB

typedef struct tag_s6OB5gUPZ36CI1QpFApZgNB c41_s6OB5gUPZ36CI1QpFApZgNB;

#endif                                 /*typedef_c41_s6OB5gUPZ36CI1QpFApZgNB*/

#ifndef struct_tag_sHRsKFqmsLcyBVy4XxqB7MC
#define struct_tag_sHRsKFqmsLcyBVy4XxqB7MC

struct tag_sHRsKFqmsLcyBVy4XxqB7MC
{
  c41_s6OB5gUPZ36CI1QpFApZgNB data;
};

#endif                                 /*struct_tag_sHRsKFqmsLcyBVy4XxqB7MC*/

#ifndef typedef_c41_CassieOutputs
#define typedef_c41_CassieOutputs

typedef struct tag_sHRsKFqmsLcyBVy4XxqB7MC c41_CassieOutputs;

#endif                                 /*typedef_c41_CassieOutputs*/

#ifndef struct_cassieOutputsBus_tag
#define struct_cassieOutputsBus_tag

struct cassieOutputsBus_tag
{
  real_T vectorNavOrientation[4];
  real_T vectorNavAngularVelocity[3];
  real_T vectorNavLinearAcceleration[3];
  real_T vectorNavMagneticField[3];
  real_T vectorNavPressure;
  real_T vectorNavTemperature;
  real_T motorPosition[10];
  real_T motorVelocity[10];
  real_T jointPosition[4];
  real_T jointVelocity[4];
  real_T radio[16];
  real_T stateOfCharge;
  real_T status;
};

#endif                                 /*struct_cassieOutputsBus_tag*/

#ifndef typedef_c41_cassieOutputsBus
#define typedef_c41_cassieOutputsBus

typedef struct cassieOutputsBus_tag c41_cassieOutputsBus;

#endif                                 /*typedef_c41_cassieOutputsBus*/

#ifndef typedef_SFc41_StateEstimationInstanceStruct
#define typedef_SFc41_StateEstimationInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c41_sfEvent;
  boolean_T c41_doneDoubleBufferReInit;
  uint8_T c41_is_active_c41_StateEstimation;
  real_T (*c41_qwi)[4];
  real_T (*c41_wi)[3];
  real_T (*c41_ai)[3];
  real_T (*c41_q)[20];
  c41_cassieOutputsBus *c41_outputs;
  real_T (*c41_dq)[20];
} SFc41_StateEstimationInstanceStruct;

#endif                                 /*typedef_SFc41_StateEstimationInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c41_StateEstimation_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c41_StateEstimation_get_check_sum(mxArray *plhs[]);
extern void c41_StateEstimation_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
