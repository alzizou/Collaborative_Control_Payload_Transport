###########################################################################
## Makefile generated for Simulink model 'CAMFC2_Quad_New_02'. 
## 
## Makefile     : CAMFC2_Quad_New_02.mk
## Generated on : Fri Sep 20 14:47:40 2019
## MATLAB Coder version: 4.1 (R2018b)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/CAMFC2_Quad_New_02_acc.mexw64
## Product type : MEX function
## Build type   : Accelerator
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file
# MEX_SRC                 MEX source file
# MEX_OPTS_FLAG           MEX C options
# MEX_CPP_OPTS_FLAG       MEX Cpp options

PRODUCT_NAME              = CAMFC2_Quad_New_02
MAKEFILE                  = CAMFC2_Quad_New_02.mk
COMPUTER                  = PCWIN64
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2018b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2018b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
MASTER_ANCHOR_DIR         = 
START_DIR                 = E:/AliSafaei/McGill_PostDoc/6_Object transporation by a team of drones/Simulation
ARCH                      = win64
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 1
TGT_FCN_LIB               = None
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ../../..
COMPILER_COMMAND_FILE     = CAMFC2_Quad_New_02_comp.rsp
CMD_FILE                  = CAMFC2_Quad_New_02.rsp
MEX_SRC                   = CAMFC2_Quad_New_02_acc.c
C_STANDARD_OPTS           = -ansi -pedantic -Wno-long-long -fwrapv
CPP_STANDARD_OPTS         = -std=c++98 -pedantic -Wno-long-long -fwrapv
SIM_TARGET_BUILD          = 1
MEX_OPTS_FLAG             = -f "$(MATLAB_ROOT)/bin/win64/mexopts/mingw64.xml"
MEX_CPP_OPTS_FLAG         = -f "$(MATLAB_ROOT)/bin/win64/mexopts/mingw64_g++.xml"

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          MinGW64 | gmake (64-bit Windows)
# Supported Version(s):    5.x
# ToolchainInfo Version:   R2018b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# C_STANDARD_OPTS
# CPP_STANDARD_OPTS
# MINGW_ROOT
# MINGW_C_STANDARD_OPTS

#-----------
# MACROS
#-----------

WARN_FLAGS            = -Wall -W -Wwrite-strings -Winline -Wstrict-prototypes -Wnested-externs -Wpointer-arith -Wcast-align
WARN_FLAGS_MAX        = $(WARN_FLAGS) -Wcast-qual -Wshadow
CPP_WARN_FLAGS        = -Wall -W -Wwrite-strings -Winline -Wpointer-arith -Wcast-align
CPP_WARN_FLAGS_MAX    = $(CPP_WARN_FLAGS) -Wcast-qual -Wshadow
MEX_OPTS_FILE         = $(MATLAB_ROOT)/bin/win64/mexopts/mingw64.xml
MEX_CPP_OPTS_FILE     = $(MATLAB_ROOT)/bin/win64/mexopts/mingw64_g++.xml
MW_EXTERNLIB_DIR      = $(MATLAB_ROOT)/extern/lib/win64/mingw64
SHELL                 = %SystemRoot%/system32/cmd.exe

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lws2_32

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: GNU C Compiler
CC_PATH = $(MINGW_ROOT)
CC = "$(CC_PATH)/gcc"

# Linker: GNU Linker
LD_PATH = $(MINGW_ROOT)
LD = "$(LD_PATH)/g++"

# C++ Compiler: GNU C++ Compiler
CPP_PATH = $(MINGW_ROOT)
CPP = "$(CPP_PATH)/g++"

# C++ Linker: GNU C++ Linker
CPP_LD_PATH = $(MINGW_ROOT)
CPP_LD = "$(CPP_LD_PATH)/g++"

# Archiver: GNU Archiver
AR_PATH = $(MINGW_ROOT)
AR = "$(AR_PATH)/ar"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_BIN)/win64
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @move
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c $(MINGW_C_STANDARD_OPTS) -m64 \
                       -O0
CPPFLAGS             = -c $(CPP_STANDARD_OPTS) -m64 \
                       -O0
CPP_LDFLAGS          = -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)" -static -m64
CPP_SHAREDLIB_LDFLAGS  = -shared -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)" -Wl,--no-undefined \
                         -Wl,--out-implib,$(basename $(PRODUCT))$(STATICLIB_EXT)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)" -static -m64
MEX_CPPFLAGS         = -R2018a -MATLAB_ARCH=$(ARCH) $(INCLUDES) \
                         \
                       CXXOPTIMFLAGS="$(MINGW_C_STANDARD_OPTS)  \
                       -O0 \
                        $(DEFINES)" \
                         \
                       -silent
MEX_CPPLDFLAGS       = LDFLAGS=='$$LDFLAGS'
MEX_CFLAGS           = -R2018a -MATLAB_ARCH=$(ARCH) $(INCLUDES) \
                         \
                       COPTIMFLAGS="$(MINGW_C_STANDARD_OPTS)  \
                       -O0 \
                        $(DEFINES)" \
                         \
                       -silent
MEX_LDFLAGS          = LDFLAGS=='$$LDFLAGS'
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -shared -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)" -Wl,--no-undefined \
                       -Wl,--out-implib,$(basename $(PRODUCT))$(STATICLIB_EXT)

#--------------------
# File extensions
#--------------------

H_EXT               = .h
OBJ_EXT             = .obj
C_EXT               = .c
EXE_EXT             = .exe
SHAREDLIB_EXT       = .dll
HPP_EXT             = .hpp
OBJ_EXT             = .obj
CPP_EXT             = .cpp
EXE_EXT             = .exe
SHAREDLIB_EXT       = .dll
STATICLIB_EXT       = .lib
MEX_EXT             = .mexw64
MAKE_EXT            = .mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/CAMFC2_Quad_New_02_acc.mexw64
PRODUCT_TYPE = "MEX function"
BUILD_TYPE = "Accelerator"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/slprj/accel/CAMFC2_Quad_New_02 -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=1 -DALLOCATIONFCN=0 -DONESTEPFCN=0 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0
DEFINES_IMPLIED = -DTID01EQ=0
DEFINES_STANDARD = -DMODEL=CAMFC2_Quad_New_02 -DNUMST=2 -DNCSTATES=1010 -DHAVESTDIO

DEFINES = $(DEFINES_BUILD_ARGS) $(DEFINES_IMPLIED) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/slprj/accel/CAMFC2_Quad_New_02/CAMFC2_Quad_New_02_acc_data.c $(START_DIR)/slprj/accel/CAMFC2_Quad_New_02/rtGetInf.c $(START_DIR)/slprj/accel/CAMFC2_Quad_New_02/rtGetNaN.c $(START_DIR)/slprj/accel/CAMFC2_Quad_New_02/rt_nonfinite.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = CAMFC2_Quad_New_02_acc_data.obj rtGetInf.obj rtGetNaN.obj rt_nonfinite.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS =  -L$(MATLAB_ROOT)/extern/lib/win64/mingw64 -llibmwipp -llibut -llibmwmathutil -llibmwsl_simtarget_instrumentation -llibmwsl_simtarget_core -llibmwsl_fileio -llibmwsigstream -llibmwslexec_simlog -llibmwsl_AsyncioQueue -lsf_runtime -llibmwsimulink -llibmwslexec_simbridge -llibmwstringutil -llibmwslio_core -llibmwslio_clients -llibmwsl_services

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS += $(CPPFLAGS_BASIC)

#---------------------
# MEX C++ Compiler
#---------------------

MEX_CPP_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CPPFLAGS += $(MEX_CPP_Compiler_BASIC)

#-----------------
# MEX Compiler
#-----------------

MEX_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CFLAGS += $(MEX_Compiler_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################


ifdef SIM_TARGET_BUILD
MINGW_C_STANDARD_OPTS = $(filter-out -ansi, $(C_STANDARD_OPTS))
else
MINGW_C_STANDARD_OPTS = $(C_STANDARD_OPTS)
endif


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


prebuild : 


download : build


execute : download


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a MEX function                     
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(MEX_SRC)
	@echo "### Creating MEX function "$(PRODUCT)" ..."
	$(MEX) $(MEX_OPTS_FLAG) -c $(MEX_CFLAGS) $(MEX_SRC)
	$(MEX) $(MEX_OPTS_FLAG) $(MEX_CFLAGS) -outdir $(RELATIVE_PATH_TO_ANCHOR) $(addsuffix .obj, $(notdir $(basename $(MEX_SRC)))) @$(CMD_FILE) $(SYSTEM_LIBS)


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.obj : %.c
	$(MEX) $(MEX_OPTS_FLAG) -c $(MEX_CFLAGS) -outdir "$(dir $@)" "$<"


%.obj : %.cpp
	$(MEX) $(MEX_CPP_OPTS_FLAG) -c $(MEX_CPPFLAGS) -outdir "$(dir $@)" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(MEX) $(MEX_OPTS_FLAG) -c $(MEX_CFLAGS) -outdir "$(dir $@)" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(MEX) $(MEX_CPP_OPTS_FLAG) -c $(MEX_CPPFLAGS) -outdir "$(dir $@)" "$<"


%.obj : $(START_DIR)/%.c
	$(MEX) $(MEX_OPTS_FLAG) -c $(MEX_CFLAGS) -outdir "$(dir $@)" "$<"


%.obj : $(START_DIR)/%.cpp
	$(MEX) $(MEX_CPP_OPTS_FLAG) -c $(MEX_CPPFLAGS) -outdir "$(dir $@)" "$<"


%.obj : $(START_DIR)/slprj/accel/CAMFC2_Quad_New_02/%.c
	$(MEX) $(MEX_OPTS_FLAG) -c $(MEX_CFLAGS) -outdir "$(dir $@)" "$<"


%.obj : $(START_DIR)/slprj/accel/CAMFC2_Quad_New_02/%.cpp
	$(MEX) $(MEX_CPP_OPTS_FLAG) -c $(MEX_CPPFLAGS) -outdir "$(dir $@)" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(MEX) $(MEX_OPTS_FLAG) -c $(MEX_CFLAGS) -outdir "$(dir $@)" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(MEX) $(MEX_CPP_OPTS_FLAG) -c $(MEX_CPPFLAGS) -outdir "$(dir $@)" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(MEX) $(MEX_OPTS_FLAG) -c $(MEX_CFLAGS) -outdir "$(dir $@)" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(MEX) $(MEX_CPP_OPTS_FLAG) -c $(MEX_CPPFLAGS) -outdir "$(dir $@)" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


