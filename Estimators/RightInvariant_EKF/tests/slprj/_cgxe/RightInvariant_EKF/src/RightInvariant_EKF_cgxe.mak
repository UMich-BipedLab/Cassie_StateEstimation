# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL  = RightInvariant_EKF
TARGET = cgxe
MODULE_SRCS 	= m_F1Scry3smjzFxDJqc88Zr.c
MODEL_SRC	= RightInvariant_EKF_cgxe.c
MODEL_REG = RightInvariant_EKF_cgxe_registry.c
MAKEFILE    = RightInvariant_EKF_cgxe.mak
MATLAB_ROOT	= C:\Program Files\MATLAB\R2016b
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


USER_INCLUDES   =  /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\tests\slprj\_cgxe\rightinvariant_ekf\src" /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\tests" /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf" /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\dyn\src" /I "C:\Users\ross hartley\documents\GitHub\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src"

MLSL_INCLUDES     = \
    /I "C:\Program Files\MATLAB\R2016b\extern\include" \
    /I "C:\Program Files\MATLAB\R2016b\simulink\include" \
    /I "C:\Program Files\MATLAB\R2016b\rtw\c\src"
COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   = 
INCLUDE_PATH = $(MLSL_INCLUDES) $(USER_INCLUDES) $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"
CFLAGS = /O2 /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMATLAB_MEX_FILE /DMX_COMPAT_32 /nologo /MD 
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction  
#----------------------------- Source Files -----------------------------------

USER_ABS_OBJS 	= \
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

AUX_SRCS =   

REQ_SRCS  = $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS) $(AUX_SRCS)
REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS) $(AUX_ABS_OBJS)
OBJLIST_FILE = RightInvariant_EKF_cgxe.mol
TMWLIB = "C:\Program Files\MATLAB\R2016b\extern\lib\win64\microsoft\libmx.lib" "C:\Program Files\MATLAB\R2016b\extern\lib\win64\microsoft\libmex.lib" "C:\Program Files\MATLAB\R2016b\extern\lib\win64\microsoft\libmat.lib" "C:\Program Files\MATLAB\R2016b\extern\lib\win64\microsoft\libfixedpoint.lib" "C:\Program Files\MATLAB\R2016b\extern\lib\win64\microsoft\libut.lib" "C:\Program Files\MATLAB\R2016b\extern\lib\win64\microsoft\libmwmathutil.lib" "C:\Program Files\MATLAB\R2016b\extern\lib\win64\microsoft\libemlrt.lib" "C:\Program Files\MATLAB\R2016b\extern\lib\win64\microsoft\libmwcgxert.lib" "C:\Program Files\MATLAB\R2016b\extern\lib\win64\microsoft\libmwslexec_simbridge.lib" "C:\Program Files\MATLAB\R2016b\lib\win64\libmwipp.lib" "C:\Program Files\MATLAB\R2016b\extern\lib\win64\microsoft\libcovrt.lib" 
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

p_RightToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_RightToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_RightToeBottom_src.c"
p_LeftToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_LeftToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_LeftToeBottom_src.c"
J_RightToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_RightToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_RightToeBottom_src.c"
J_LeftToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_LeftToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_LeftToeBottom_src.c"
p_VectorNav_to_RightToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_RightToeBottom_src.c"
R_VectorNav_to_RightToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_RightToeBottom_src.c"
p_VectorNav_to_LeftToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_LeftToeBottom_src.c"
R_VectorNav_to_LeftToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_LeftToeBottom_src.c"
J_VectorNav_to_RightToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_RightToeBottom_src.c"
J_VectorNav_to_LeftToeBottom_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\J_VectorNav_to_LeftToeBottom_src.c"
p_VectorNav_to_Pelvis_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_Pelvis_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_Pelvis_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\p_VectorNav_to_Pelvis_src.c"
R_VectorNav_to_Pelvis_src.obj :	"c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_Pelvis_src.c"
	@echo ### Compiling "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_Pelvis_src.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\ross hartley\documents\github\ross_cassie_controllers\submodules\cassie_stateestimation\estimators\rightinvariant_ekf\..\..\..\cassie_model\gen\kin\src\R_VectorNav_to_Pelvis_src.c"
