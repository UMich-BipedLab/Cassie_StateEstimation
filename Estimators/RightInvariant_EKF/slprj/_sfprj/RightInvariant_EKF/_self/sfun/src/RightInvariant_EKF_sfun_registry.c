#include "RightInvariant_EKF_sfun.h"
#include "sf_runtime/sfcdebug.h"

struct SfDebugInstanceStruct;
struct SfDebugInstanceStruct* sfGlobalDebugInstanceStruct = NULL;

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

unsigned int sf_process_check_sum_call( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  extern unsigned int sf_RightInvariant_EKF_process_check_sum_call( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_StateEstimation_process_check_sum_call( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_UDP_Communication_process_check_sum_call( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  if (sf_RightInvariant_EKF_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_StateEstimation_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_UDP_Communication_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  return 0;
}

unsigned int sf_process_autoinheritance_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_RightInvariant_EKF_autoinheritance_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_StateEstimation_autoinheritance_info( int nlhs, mxArray
    * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_UDP_Communication_autoinheritance_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "RightInvariant_EKF") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_RightInvariant_EKF_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "StateEstimation") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_StateEstimation_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "UDP_Communication") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_UDP_Communication_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_third_party_uses_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_RightInvariant_EKF_third_party_uses_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_StateEstimation_third_party_uses_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_UDP_Communication_third_party_uses_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "RightInvariant_EKF") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_RightInvariant_EKF_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "StateEstimation") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_StateEstimation_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "UDP_Communication") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_UDP_Communication_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_jit_fallback_info_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_RightInvariant_EKF_jit_fallback_info( int nlhs, mxArray
    * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_StateEstimation_jit_fallback_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_UDP_Communication_jit_fallback_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "RightInvariant_EKF") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_RightInvariant_EKF_jit_fallback_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "StateEstimation") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_StateEstimation_jit_fallback_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "UDP_Communication") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_UDP_Communication_jit_fallback_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_updateBuildInfo_args_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_RightInvariant_EKF_updateBuildInfo_args_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_StateEstimation_updateBuildInfo_args_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_UDP_Communication_updateBuildInfo_args_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "RightInvariant_EKF") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_RightInvariant_EKF_updateBuildInfo_args_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "StateEstimation") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_StateEstimation_updateBuildInfo_args_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "UDP_Communication") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_UDP_Communication_updateBuildInfo_args_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_eml_resolved_functions_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_RightInvariant_EKF_get_eml_resolved_functions_info( int
    nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_StateEstimation_get_eml_resolved_functions_info( int
    nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_UDP_Communication_get_eml_resolved_functions_info( int
    nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 3) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "RightInvariant_EKF") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_RightInvariant_EKF_get_eml_resolved_functions_info(nlhs,plhs,2,
      newRhs);
  }

  if (strcmp(machineName, "StateEstimation") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_StateEstimation_get_eml_resolved_functions_info(nlhs,plhs,2,newRhs);
  }

  if (strcmp(machineName, "UDP_Communication") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_UDP_Communication_get_eml_resolved_functions_info(nlhs,plhs,2,
      newRhs);
  }

  return 0;
}

unsigned int sf_mex_unlock_call( int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[] )
{
  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_mex_unlock"))
    return 0;
  while (mexIsLocked()) {
    mexUnlock();
  }

  return(1);
}

extern unsigned int sf_debug_api(struct SfDebugInstanceStruct* debugInstance,
  int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
static unsigned int sf_debug_api_wrapper( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  return sf_debug_api(sfGlobalDebugInstanceStruct, nlhs, plhs, nrhs, prhs);
}

static unsigned int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[])
{
  if (sf_debug_api_wrapper(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_mex_unlock_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_autoinheritance_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_third_party_uses_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_jit_fallback_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_updateBuildInfo_args_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_eml_resolved_functions_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  mexErrMsgTxt("Unsuccessful command.");
  return 0;
}

static unsigned int sfGlobalMdlStartCallCounts = 0;
unsigned int sf_machine_global_initializer_called(void)
{
  return(sfGlobalMdlStartCallCounts > 0);
}

extern unsigned int sf_RightInvariant_EKF_method_dispatcher(SimStruct *S,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data);
extern unsigned int sf_StateEstimation_method_dispatcher(SimStruct *S, unsigned
  int chartFileNumber, const char* specsCksum, int_T method, void *data);
extern unsigned int sf_UDP_Communication_method_dispatcher(SimStruct *S,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data);
unsigned int sf_machine_global_method_dispatcher(SimStruct *simstructPtr, const
  char *machineName, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (!strcmp(machineName,"RightInvariant_EKF")) {
    return(sf_RightInvariant_EKF_method_dispatcher(simstructPtr,chartFileNumber,
            specsCksum,method,data));
  }

  if (!strcmp(machineName,"StateEstimation")) {
    return(sf_StateEstimation_method_dispatcher(simstructPtr,chartFileNumber,
            specsCksum,method,data));
  }

  if (!strcmp(machineName,"UDP_Communication")) {
    return(sf_UDP_Communication_method_dispatcher(simstructPtr,chartFileNumber,
            specsCksum,method,data));
  }

  return 0;
}

extern void RightInvariant_EKF_terminator(void);
extern void StateEstimation_terminator(void);
extern void UDP_Communication_terminator(void);
void sf_machine_global_terminator(SimStruct* S)
{
  sfGlobalMdlStartCallCounts--;
  if (sfGlobalMdlStartCallCounts == 0) {
    RightInvariant_EKF_terminator();
    StateEstimation_terminator();
    UDP_Communication_terminator();
    sf_debug_terminate(sfGlobalDebugInstanceStruct);
    sfGlobalDebugInstanceStruct = NULL;
  }

  return;
}

extern void RightInvariant_EKF_initializer(void);
extern void StateEstimation_initializer(void);
extern void UDP_Communication_initializer(void);
extern void RightInvariant_EKF_register_exported_symbols(SimStruct* S);
extern void StateEstimation_register_exported_symbols(SimStruct* S);
extern void UDP_Communication_register_exported_symbols(SimStruct* S);
extern void RightInvariant_EKF_debug_initialize(struct SfDebugInstanceStruct*);
extern void StateEstimation_debug_initialize(struct SfDebugInstanceStruct*);
extern void UDP_Communication_debug_initialize(struct SfDebugInstanceStruct*);
void sf_register_machine_exported_symbols(SimStruct* S)
{
  RightInvariant_EKF_register_exported_symbols(S);
  StateEstimation_register_exported_symbols(S);
  UDP_Communication_register_exported_symbols(S);
}

bool callCustomFcn(char initFlag)
{
  return false;
}

void sf_machine_global_initializer(SimStruct* S)
{
  bool simModeIsRTWGen = sim_mode_is_rtw_gen(S);
  sfGlobalMdlStartCallCounts++;
  if (sfGlobalMdlStartCallCounts == 1) {
    if (simModeIsRTWGen) {
      sf_register_machine_exported_symbols(S);
    }

    sfGlobalDebugInstanceStruct = sf_debug_create_debug_instance_struct();
    if (!simModeIsRTWGen) {
      RightInvariant_EKF_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    RightInvariant_EKF_initializer();
    if (!simModeIsRTWGen) {
      StateEstimation_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    StateEstimation_initializer();
    if (!simModeIsRTWGen) {
      UDP_Communication_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    UDP_Communication_initializer();
  }

  return;
}

#include "sf_runtime/stateflow_mdl_methods.stub"
