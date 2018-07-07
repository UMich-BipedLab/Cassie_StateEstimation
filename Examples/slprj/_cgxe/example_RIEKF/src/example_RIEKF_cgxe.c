/* Include files */

#include "example_RIEKF_cgxe.h"
#include "m_QAP0Wmv9to0z2CRr6cD8wE.h"

unsigned int cgxe_example_RIEKF_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 1269874558 &&
      ssGetChecksum1(S) == 534675980 &&
      ssGetChecksum2(S) == 3602682830 &&
      ssGetChecksum3(S) == 2248622669) {
    method_dispatcher_QAP0Wmv9to0z2CRr6cD8wE(S, method, data);
    return 1;
  }

  return 0;
}
