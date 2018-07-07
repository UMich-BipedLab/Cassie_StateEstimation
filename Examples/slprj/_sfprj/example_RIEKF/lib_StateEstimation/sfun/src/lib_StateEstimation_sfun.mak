# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL     = lib_StateEstimation
TARGET      = sfun
MODULE_SRCS   = c42_lib_StateEstimation.c
MODEL_SRC  = lib_StateEstimation_sfun.c
MODEL_REG = 
MAKEFILE    = lib_StateEstimation_sfun.mak
MATLAB_ROOT  = C:\Program Files\MATLAB\R2017b
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

USER_INCLUDES   =  /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\slprj\_sfprj\example_riekf\lib_stateestimation\sfun\src" /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples" /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src"
AUX_INCLUDES   = 
MLSLSF_INCLUDES = \
    /I "C:\Program Files\MATLAB\R2017b\extern\include" \
    /I "C:\Program Files\MATLAB\R2017b\simulink\include" \
    /I "C:\Program Files\MATLAB\R2017b\simulink\include\sf_runtime" \
    /I "C:\Program Files\MATLAB\R2017b\stateflow\c\mex\include" \
    /I "C:\Program Files\MATLAB\R2017b\rtw\c\src" \
    /I "C:\Users\Ross Hartley\Documents\GitHub\Ross_Cassie_Controllers\submodules\Cassie_StateEstimation\Examples\slprj\_sfprj\example_RIEKF\lib_StateEstimation\sfun\src" 

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   = 
INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(MLSLSF_INCLUDES)\
 $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = /O2 /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMATLAB_MEX_FILE /nologo /MD 
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  
#----------------------------- Source Files -----------------------------------

REQ_SRCS  =  $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS)

USER_ABS_OBJS    = \
     "p_VectorNav_to_RightToeBottom_src.obj" \
     "R_VectorNav_to_RightToeBottom_src.obj" \
     "J_VectorNav_to_RightToeBottom_src.obj" \
     "p_VectorNav_to_LeftToeBottom_src.obj" \
     "R_VectorNav_to_LeftToeBottom_src.obj" \
     "J_VectorNav_to_LeftToeBottom_src.obj" \

AUX_ABS_OBJS =

THIRD_PARTY_OBJS     = \
     "c_mexapi_version.obj" \

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS) $(AUX_ABS_OBJS) $(THIRD_PARTY_OBJS)
OBJLIST_FILE = lib_StateEstimation_sfun.mol
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

p_VectorNav_to_RightToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
R_VectorNav_to_RightToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
J_VectorNav_to_RightToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
p_VectorNav_to_LeftToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
R_VectorNav_to_LeftToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
J_VectorNav_to_LeftToeBottom_src.obj :  "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"

c_mexapi_version.obj :  "C:\Program Files\MATLAB\R2017b\extern\version\c_mexapi_version.c"
	@echo ### Compiling "C:\Program Files\MATLAB\R2017b\extern\version\c_mexapi_version.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2017b\extern\version\c_mexapi_version.c"
