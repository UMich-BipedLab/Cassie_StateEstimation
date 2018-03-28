# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL     = UDP_Communication
TARGET      = sfun
MODULE_SRCS   = c43_UDP_Communication.c
MODEL_SRC  = UDP_Communication_sfun.c
MODEL_REG = 
MAKEFILE    = UDP_Communication_sfun.mak
MATLAB_ROOT  = C:\Program Files\MATLAB\R2016b
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   =  /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\slprj\_sfprj\rightinvariant_ekf\udp_communication\sfun\src" /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf" /I "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf" /I "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\dyn\src" /I "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src"
AUX_INCLUDES   = 
MLSLSF_INCLUDES = \
    /I "C:\Program Files\MATLAB\R2016b\extern\include" \
    /I "C:\Program Files\MATLAB\R2016b\simulink\include" \
    /I "C:\Program Files\MATLAB\R2016b\simulink\include\sf_runtime" \
    /I "C:\Program Files\MATLAB\R2016b\stateflow\c\mex\include" \
    /I "C:\Program Files\MATLAB\R2016b\rtw\c\src" \
    /I "C:\Users\Ross Hartley\Documents\GitHub\Ross_Cassie_Controllers\submodules\Cassie_StateEstimation\Estimators\RightInvariant_EKF\slprj\_sfprj\RightInvariant_EKF\UDP_Communication\sfun\src" 

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   = 
INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(MLSLSF_INCLUDES)\
 $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = /O2 /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMATLAB_MEX_FILE /nologo /MD 
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction  
#----------------------------- Source Files -----------------------------------

REQ_SRCS  =  $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS)

USER_ABS_OBJS    = \
     "p_RightToeBottom_src.obj" \
     "p_LeftToeBottom_src.obj" \
     "J_RightToeBottom_src.obj" \
     "J_LeftToeBottom_src.obj" \
     "p_VectorNav_to_RightToeBottom_src.obj" \
     "R_VectorNav_to_RightToeBottom_src.obj" \
     "p_VectorNav_to_LeftToeBottom_src.obj" \
     "R_VectorNav_to_LeftToeBottom_src.obj" \
     "J_VectorNav_to_RightToeBottom_src.obj" \
     "J_VectorNav_to_LeftToeBottom_src.obj" \
     "p_VectorNav_to_Pelvis_src.obj" \
     "R_VectorNav_to_Pelvis_src.obj" \

AUX_ABS_OBJS =

THIRD_PARTY_OBJS =

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS) $(AUX_ABS_OBJS) $(THIRD_PARTY_OBJS)
OBJLIST_FILE = UDP_Communication_sfun.mol
SFCLIB = 
AUX_LNK_OBJS =     
USER_LIBS = 
#--------------------------------- Rules --------------------------------------

$(MODEL)_$(TARGET).lib : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS) $(THIRD_PARTY_LIBS)
	@echo ### Linking ...
	$(LD) -lib /OUT:$(MODEL)_$(TARGET).lib @$(OBJLIST_FILE) $(USER_LIBS) $(THIRD_PARTY_LIBS)
	@echo ### Created Stateflow library $@
.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

p_RightToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_RightToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_RightToeBottom_src.c"
p_LeftToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_LeftToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_LeftToeBottom_src.c"
J_RightToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_RightToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_RightToeBottom_src.c"
J_LeftToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_LeftToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_LeftToeBottom_src.c"
p_VectorNav_to_RightToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
R_VectorNav_to_RightToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
p_VectorNav_to_LeftToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
R_VectorNav_to_LeftToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
J_VectorNav_to_RightToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
J_VectorNav_to_LeftToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"
p_VectorNav_to_Pelvis_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_Pelvis_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_Pelvis_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_Pelvis_src.c"
R_VectorNav_to_Pelvis_src.obj :  "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_Pelvis_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_Pelvis_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\riekf_example_static_landmarks\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_Pelvis_src.c"

