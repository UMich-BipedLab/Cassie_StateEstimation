/* Include files */

#include "RightInvariant_EKF_cgxe.h"
#include "m_MH1YGGHXm7BJTN0FViiwM.h"

unsigned int cgxe_RightInvariant_EKF_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 3891695625 &&
      ssGetChecksum1(S) == 2547059959 &&
      ssGetChecksum2(S) == 2970702358 &&
      ssGetChecksum3(S) == 484362577) {
    method_dispatcher_MH1YGGHXm7BJTN0FViiwM(S, method, data);
    return 1;
  }

  return 0;
}
