/* Include files */

#include "StateEstimation_sfun.h"
#include "StateEstimation_sfun_debug_macros.h"
#include "c21_StateEstimation.h"
#include "c41_StateEstimation.h"
#include "c42_StateEstimation.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _StateEstimationMachineNumber_;

/* Function Declarations */

/* Function Definitions */
void StateEstimation_initializer(void)
{
}

void StateEstimation_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_StateEstimation_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==21) {
    c21_StateEstimation_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==41) {
    c41_StateEstimation_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==42) {
    c42_StateEstimation_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_StateEstimation_process_check_sum_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>2 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"library")) {
      char machineName[100];
      mxGetString(prhs[2], machineName,sizeof(machineName)/sizeof(char));
      machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
      if (!strcmp(machineName,"StateEstimation")) {
        if (nrhs==3) {
          ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2590974072U);
          ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1788922733U);
          ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3474668068U);
          ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3672160853U);
        } else if (nrhs==4) {
          unsigned int chartFileNumber;
          chartFileNumber = (unsigned int)mxGetScalar(prhs[3]);
          switch (chartFileNumber) {
           case 21:
            {
              extern void sf_c21_StateEstimation_get_check_sum(mxArray *plhs[]);
              sf_c21_StateEstimation_get_check_sum(plhs);
              break;
            }

           case 41:
            {
              extern void sf_c41_StateEstimation_get_check_sum(mxArray *plhs[]);
              sf_c41_StateEstimation_get_check_sum(plhs);
              break;
            }

           case 42:
            {
              extern void sf_c42_StateEstimation_get_check_sum(mxArray *plhs[]);
              sf_c42_StateEstimation_get_check_sum(plhs);
              break;
            }

           default:
            ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
          }
        } else {
          return 0;
        }
      } else {
        return 0;
      }
    } else {
      return 0;
    }
  } else {
    return 0;
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_StateEstimation_autoinheritance_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 21:
      {
        if (strcmp(aiChksum, "UZum7TGUHKgvX9DqSlNKuD") == 0) {
          extern mxArray *sf_c21_StateEstimation_get_autoinheritance_info(void);
          plhs[0] = sf_c21_StateEstimation_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 41:
      {
        if (strcmp(aiChksum, "8x96s6k65hsUinpvN2FkkD") == 0) {
          extern mxArray *sf_c41_StateEstimation_get_autoinheritance_info(void);
          plhs[0] = sf_c41_StateEstimation_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 42:
      {
        if (strcmp(aiChksum, "LyZr2a2ZoHoaKjpcIzKcOH") == 0) {
          extern mxArray *sf_c42_StateEstimation_get_autoinheritance_info(void);
          plhs[0] = sf_c42_StateEstimation_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_StateEstimation_get_eml_resolved_functions_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 21:
      {
        extern const mxArray
          *sf_c21_StateEstimation_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c21_StateEstimation_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 41:
      {
        extern const mxArray
          *sf_c41_StateEstimation_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c41_StateEstimation_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 42:
      {
        extern const mxArray
          *sf_c42_StateEstimation_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c42_StateEstimation_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_StateEstimation_third_party_uses_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 21:
      {
        if (strcmp(tpChksum, "s4NK5CaNaafh9RC2YNlVczG") == 0) {
          extern mxArray *sf_c21_StateEstimation_third_party_uses_info(void);
          plhs[0] = sf_c21_StateEstimation_third_party_uses_info();
          break;
        }
      }

     case 41:
      {
        if (strcmp(tpChksum, "s9aOqnkzkvppWSwYB8gKXQE") == 0) {
          extern mxArray *sf_c41_StateEstimation_third_party_uses_info(void);
          plhs[0] = sf_c41_StateEstimation_third_party_uses_info();
          break;
        }
      }

     case 42:
      {
        if (strcmp(tpChksum, "sGtiguCJkbSPnVHjIGHg2kH") == 0) {
          extern mxArray *sf_c42_StateEstimation_third_party_uses_info(void);
          plhs[0] = sf_c42_StateEstimation_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_StateEstimation_jit_fallback_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 21:
      {
        if (strcmp(tpChksum, "s4NK5CaNaafh9RC2YNlVczG") == 0) {
          extern mxArray *sf_c21_StateEstimation_jit_fallback_info(void);
          plhs[0] = sf_c21_StateEstimation_jit_fallback_info();
          break;
        }
      }

     case 41:
      {
        if (strcmp(tpChksum, "s9aOqnkzkvppWSwYB8gKXQE") == 0) {
          extern mxArray *sf_c41_StateEstimation_jit_fallback_info(void);
          plhs[0] = sf_c41_StateEstimation_jit_fallback_info();
          break;
        }
      }

     case 42:
      {
        if (strcmp(tpChksum, "sGtiguCJkbSPnVHjIGHg2kH") == 0) {
          extern mxArray *sf_c42_StateEstimation_jit_fallback_info(void);
          plhs[0] = sf_c42_StateEstimation_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_StateEstimation_updateBuildInfo_args_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 21:
      {
        if (strcmp(tpChksum, "s4NK5CaNaafh9RC2YNlVczG") == 0) {
          extern mxArray *sf_c21_StateEstimation_updateBuildInfo_args_info(void);
          plhs[0] = sf_c21_StateEstimation_updateBuildInfo_args_info();
          break;
        }
      }

     case 41:
      {
        if (strcmp(tpChksum, "s9aOqnkzkvppWSwYB8gKXQE") == 0) {
          extern mxArray *sf_c41_StateEstimation_updateBuildInfo_args_info(void);
          plhs[0] = sf_c41_StateEstimation_updateBuildInfo_args_info();
          break;
        }
      }

     case 42:
      {
        if (strcmp(tpChksum, "sGtiguCJkbSPnVHjIGHg2kH") == 0) {
          extern mxArray *sf_c42_StateEstimation_updateBuildInfo_args_info(void);
          plhs[0] = sf_c42_StateEstimation_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void StateEstimation_debug_initialize(struct SfDebugInstanceStruct*
  debugInstance)
{
  _StateEstimationMachineNumber_ = sf_debug_initialize_machine(debugInstance,
    "StateEstimation","sfun",1,3,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _StateEstimationMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _StateEstimationMachineNumber_,0);
}

void StateEstimation_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_StateEstimation_optimization_info(void);
mxArray* load_StateEstimation_optimization_info(boolean_T isRtwGen, boolean_T
  isModelRef, boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_StateEstimation_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("StateEstimation",
      "RightInvariant_EKF");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_StateEstimation_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
