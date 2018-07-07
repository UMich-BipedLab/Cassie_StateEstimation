# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL  = example_RIEKF
TARGET = cgxe
MODULE_SRCS 	= m_QAP0Wmv9to0z2CRr6cD8wE.c
MODEL_SRC	= example_RIEKF_cgxe.c
MODEL_REG = example_RIEKF_cgxe_registry.c
MAKEFILE    = example_RIEKF_cgxe.mak
MATLAB_ROOT	= C:\Program Files\MATLAB\R2017b
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


USER_INCLUDES   =  /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples\slprj\_cgxe\example_riekf\src" /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\Examples" /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\gen\kin\src"

MLSL_INCLUDES     = \
    /I "C:\Program Files\MATLAB\R2017b\extern\include" \
    /I "C:\Program Files\MATLAB\R2017b\simulink\include" \
    /I "C:\Program Files\MATLAB\R2017b\rtw\c\src"
COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   =  /I "C:\Users\Ross Hartley\Documents\GitHub\Ross_Cassie_Controllers\submodules\Cassie_StateEstimation\Examples\slprj\_cgxe\example_RIEKF\src"
INCLUDE_PATH = $(MLSL_INCLUDES) $(USER_INCLUDES) $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"
CFLAGS = /O2 /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMATLAB_MEX_FILE /nologo /MD 
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  
#----------------------------- Source Files -----------------------------------

USER_ABS_OBJS 	= \
		"p_VectorNav_to_RightToeBottom_src.obj" \
		"R_VectorNav_to_RightToeBottom_src.obj" \
		"J_VectorNav_to_RightToeBottom_src.obj" \
		"p_VectorNav_to_LeftToeBottom_src.obj" \
		"R_VectorNav_to_LeftToeBottom_src.obj" \
		"J_VectorNav_to_LeftToeBottom_src.obj" \

AUX_SRCS = C:\PROGRA~1\MATLAB\R2017b\extern\version\c_mexapi_version.c  

REQ_SRCS  = $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS) $(AUX_SRCS)
REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS) $(AUX_ABS_OBJS)
OBJLIST_FILE = example_RIEKF_cgxe.mol
TMWLIB = "C:\Program Files\MATLAB\R2017b\extern\lib\win64\microsoft\libmx.lib" "C:\Program Files\MATLAB\R2017b\extern\lib\win64\microsoft\libmex.lib" "C:\Program Files\MATLAB\R2017b\extern\lib\win64\microsoft\libmat.lib" "C:\Program Files\MATLAB\R2017b\extern\lib\win64\microsoft\libfixedpoint.lib" "C:\Program Files\MATLAB\R2017b\extern\lib\win64\microsoft\libut.lib" "C:\Program Files\MATLAB\R2017b\extern\lib\win64\microsoft\libmwmathutil.lib" "C:\Program Files\MATLAB\R2017b\extern\lib\win64\microsoft\libemlrt.lib" "C:\Program Files\MATLAB\R2017b\extern\lib\win64\microsoft\libmwcgxert.lib" "C:\Program Files\MATLAB\R2017b\extern\lib\win64\microsoft\libmwslexec_simbridge.lib" "C:\Program Files\MATLAB\R2017b\lib\win64\libmwipp.lib" "C:\Program Files\MATLAB\R2017b\extern\lib\win64\microsoft\libcovrt.lib" 
THIRD_PARTY_LIBS = 

#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
all : $(MEX_FILE_NAME) 


$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS)
	@echo ### Linking ...
	$(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map" $(TMWLIB) $(THIRD_PARTY_LIBS) @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

p_VectorNav_to_RightToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
R_VectorNav_to_RightToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
J_VectorNav_to_RightToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
p_VectorNav_to_LeftToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
R_VectorNav_to_LeftToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
J_VectorNav_to_LeftToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\examples\..\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"
