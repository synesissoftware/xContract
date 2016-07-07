############################################################################
# File:     makefile
#
# Purpose:  Makefile for the xContract:C project, for the Open Watcom C/C++ 1.4
#           compiler, on Win32
#
# Created:  15th Feburary 2005
# Updated:  4th July 2010
#
############################################################################


############################################################################
# Symbols

########################################
# Project & compiler version

COMP_TAG			=	ow14
ARCH_TAG            =   
OS_TAG				=   
PROJ_TAG			=	xcontract
PROJ_VER_MAJOR		=   0
PROJ_TAG_VER		=   $(PROJ_TAG).$(PROJ_VER_MAJOR)

SHWILD_VER_MAJOR	=	0
SHWILD_TAG_VER		=	shwild.$(SHWILD_VER_MAJOR)

XTESTS_VER_MAJOR    =   0
XTESTS_TAG_VER      =   xtests.$(XTESTS_VER_MAJOR)

PROJ_MAKEFILE_NAME  =   makefile

########################################
# Testing verbosity

TEST_VERBOSITY		=	2

########################################
# Directories

PROJ_BASE_DIR			=   ..\..
PROJ_BIN_DIR			=   $(PROJ_BASE_DIR)\bin
PROJ_INCLUDE_DIR		=   $(PROJ_BASE_DIR)\include
PROJ_LIB_DIR			=   $(PROJ_BASE_DIR)\lib
PROJ_OBJ_DIR			=   .
PROJ_SRC_DIR			=   $(PROJ_BASE_DIR)\src
PROJ_EXAMPLES_DIR		=   $(PROJ_BASE_DIR)\examples
PROJ_SAMPLES_DIR		=   $(PROJ_BASE_DIR)\samples
PROJ_TEST_ROOT_DIR		=   $(PROJ_BASE_DIR)\test
PROJ_TEST_COMPONENT_DIR	=   $(PROJ_TEST_ROOT_DIR)\component
PROJ_TEST_SCRATCH_DIR	=   $(PROJ_TEST_ROOT_DIR)\scratch
PROJ_TEST_UNIT_DIR		=   $(PROJ_TEST_ROOT_DIR)\unit

SHWILD_INCLUDE_DIR		=	$(PROJ_BASE_DIR)\include
SHWILD_SRC_DIR			=   $(PROJ_SRC_DIR)\shwild

XTESTS_INCLUDE_DIR      =   $(PROJ_BASE_DIR)\include
XTESTS_SRC_DIR          =   $(PROJ_SRC_DIR)\xtests

########################################
# tools

CC						=   wcc386
CPPC					=   wpp386
AR						=   wlib
LD						=   wcl386
RM						=   del /f
CP						=   copy
RC						=   rc

# Includes

INCLUDES_LEADER 	=	

PROJ_INCLUDE		=	-I$(PROJ_INCLUDE_DIR)

ENV_INCLUDES 	=

COMMON_INCLUDES		=

CC_INCLUDES_BASE=\
$(INCLUDES_LEADER)\
$(PROJ_INCLUDE)\
-I"$(STLSOFT)\include"\
$(COMMON_INCLUDES)\
$(ENV_INCLUDES)\
 \

CC_INCLUDES=\
$(CC_INCLUDES_BASE)\
 \



CPPC_INCLUDES_BASE=\
$(INCLUDES_LEADER)\
$(PROJ_INCLUDE)\
-I"$(STLSOFT)\include"\
$(COMMON_INCLUDES)\
$(ENV_INCLUDES)\
 \

CPPC_INCLUDES=\
$(CPPC_INCLUDES_BASE)\
 \


# shwild

CPPC_SHWILD_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_ST_D =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_ST_R =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \


# xTests

CPPC_XTESTS_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_ST_D =\
$(CPPC_XTESTS_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_ST_R =\
$(CPPC_XTESTS_INCLUDES_BASE)\
 \




# Lib

LIBS_LEADER 		=	

# lib paths

ENV_LIBPATHS		=
COMMON_LIBPATHS			=



LIBPATHS=\
$(LIBS_LEADER)\
$(COMMON_LIBPATHS)\
$(ENV_LIBPATHS)\
\


# lib names

TARGET_LIB_ST_D	= 
TARGET_LIB_ST_R	= 

# #defines

COMMON_DEFS 		=	-DWIN32

CUSTOM_DEFS			=

CC_CUSTOM_DEFS		=	$(CUSTOM_DEFS)

CPPC_CUSTOM_DEFS	=	$(CUSTOM_DEFS)

CC_DEFS 			=	$(COMMON_DEFS) $(CC_CUSTOM_DEFS)

CPPC_DEFS			=	$(COMMON_DEFS) $(CPPC_CUSTOM_DEFS)

# CC flags

CC_F_NOLOGO 			=	-zq
CC_F_COMPILE_ONLY		=	
CC_F_WARNING_MAX		=	-w=9
CC_F_WARNING_ERR		=	-we
CC_F_WARNINGS_LIMIT		=	
CC_F_MINIMUM_SIZE		=	
#CC_F_MAXIMUM_SPEED		=	
CC_APP_F_WARNING_MAX	=	$(CC_F_WARNING_MAX)
CC_APP_F_WARNING_ERR	=	$(CC_F_WARNING_ERR)

# CPPC flags

CPPC_F_NOLOGO			=   -zq
CPPC_F_COMPILE_ONLY		=   
CPPC_F_WARNING_MAX		=   -w=9 -e=5
CPPC_F_WARNING_ERR		=   -we
CPPC_F_EXCEPTIONS_ON	=	-xs
CPPC_F_EXCEPTIONS_OFF	=	
CPPC_F_RTTI				=   -xr
CPPC_F_WARNINGS_LIMIT	=	
CPPC_F_MINIMUM_SIZE 	=	
CPPC_F_MAXIMUM_SPEED	=	-os
CPPC_F_OPTIMISED		=	$(CPPC_F_MAXIMUM_SPEED)
CPPC_APP_F_WARNING_MAX	=	$(CPPC_F_WARNING_MAX)
CPPC_APP_F_WARNING_ERR	=	$(CPPC_F_WARNING_ERR)



CC_TOOL_FLAGS		=

CPPC_TOOL_FLAGS 	=



CC_FLAGS=\
$(CC_TOOL_FLAGS)\
$(CC_F_NOLOGO)\
$(CC_F_COMPILE_ONLY)\
$(CC_F_WARNING_MAX)\
$(CC_F_WARNING_ERR)\
$(CC_F_WARNINGS_LIMIT)\
$(CC_F_MINIMUM_SIZE)\
 \

CPPC_FLAGS=\
$(CPPC_TOOL_FLAGS)\
$(CPPC_F_NOLOGO)\
$(CPPC_F_COMPILE_ONLY)\
$(CPPC_F_WARNING_MAX)\
$(CPPC_F_WARNING_ERR)\
$(CPPC_F_WARNINGS_LIMIT)\
$(CPPC_F_MAXIMUM_SPEED)\
$(CPPC_F_EXCEPTIONS_ON)\
$(CPPC_F_RTTI)\
 \


# - App (base)
CC_APP_FLAGS=\
$(CC_TOOL_FLAGS)\
$(CC_F_NOLOGO)\
$(CC_F_COMPILE_ONLY)\
$(CC_APP_F_WARNING_MAX)\
$(CC_APP_F_WARNING_ERR)\
$(CC_F_WARNINGS_LIMIT)\
$(CC_F_MINIMUM_SIZE)\
 \

CPPC_APP_FLAGS=\
$(CPPC_TOOL_FLAGS)\
$(CPPC_F_NOLOGO)\
$(CPPC_F_COMPILE_ONLY)\
$(CPPC_APP_F_WARNING_MAX)\
$(CPPC_APP_F_WARNING_ERR)\
$(CPPC_F_WARNINGS_LIMIT)\
$(CPPC_F_MAXIMUM_SPEED)\
$(CPPC_F_EXCEPTIONS_ON)\
$(CPPC_F_RTTI)\
 \

# - shwild
CC_SHWILD_FLAGS = $(CC_APP_FLAGS)

CPPC_SHWILD_FLAGS = $(CPPC_APP_FLAGS)


# - xTests
CC_XTESTS_FLAGS = $(CC_APP_FLAGS)

CPPC_XTESTS_FLAGS = $(CPPC_APP_FLAGS)


# - Example
CC_EXAMPLE_FLAGS = $(CC_APP_FLAGS)

CPPC_EXAMPLE_FLAGS = $(CPPC_APP_FLAGS)


# - Test (Component)
CC_TEST_COMPONENT_FLAGS = $(CC_APP_FLAGS)

CPPC_TEST_COMPONENT_FLAGS = $(CPPC_APP_FLAGS)


# - Test (Scratch)
CC_TEST_SCRATCH_FLAGS = $(CC_APP_FLAGS)

CPPC_TEST_SCRATCH_FLAGS = $(CPPC_APP_FLAGS)


# - Test (Unit)
CC_TEST_UNIT_FLAGS = $(CC_APP_FLAGS)

CPPC_TEST_UNIT_FLAGS = $(CPPC_APP_FLAGS)





# Arguments (= flags + defines + includes)

# - Libs
CC_LIB_ARGS_ST_D			=	$(CC_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CC_LIB_ARGS_ST_R			=	$(CC_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT

CPPC_LIB_ARGS_ST_D			=	$(CPPC_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CPPC_LIB_ARGS_ST_R			=	$(CPPC_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT

# - shwild
CC_SHWILD_ARGS_ST_D			=	$(CC_SHWILD_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_SHWILD_ARGS_ST_R			=	$(CC_SHWILD_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_SHWILD_ARGS_ST_D		=	$(CPPC_SHWILD_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_SHWILD_ARGS_ST_R		=	$(CPPC_SHWILD_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - xTests
CC_XTESTS_ARGS_ST_D			=	$(CC_XTESTS_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_XTESTS_ARGS_ST_R			=	$(CC_XTESTS_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_XTESTS_ARGS_ST_D			=	$(CPPC_XTESTS_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_XTESTS_ARGS_ST_R			=	$(CPPC_XTESTS_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Examples
CC_EXAMPLE_ARGS_ST_D		=	$(CC_EXAMPLE_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_EXAMPLE_ARGS_ST_R		=	$(CC_EXAMPLE_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_EXAMPLE_ARGS_ST_D		=	$(CPPC_EXAMPLE_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_EXAMPLE_ARGS_ST_R		=	$(CPPC_EXAMPLE_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Test (Component)
CC_TEST_COMPONENT_ARGS_ST_D			=	$(CC_TEST_COMPONENT_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_COMPONENT_ARGS_ST_R			=	$(CC_TEST_COMPONENT_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_TEST_COMPONENT_ARGS_ST_D			=	$(CPPC_TEST_COMPONENT_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_COMPONENT_ARGS_ST_R			=	$(CPPC_TEST_COMPONENT_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Test (Scratch)
CC_TEST_SCRATCH_ARGS_ST_D			=	$(CC_TEST_SCRATCH_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_SCRATCH_ARGS_ST_R			=	$(CC_TEST_SCRATCH_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_TEST_SCRATCH_ARGS_ST_D			=	$(CPPC_TEST_SCRATCH_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_SCRATCH_ARGS_ST_R			=	$(CPPC_TEST_SCRATCH_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Test (Unit)
CC_TEST_UNIT_ARGS_ST_D			=	$(CC_TEST_UNIT_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_UNIT_ARGS_ST_R			=	$(CC_TEST_UNIT_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_TEST_UNIT_ARGS_ST_D			=	$(CPPC_TEST_UNIT_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_UNIT_ARGS_ST_R			=	$(CPPC_TEST_UNIT_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# AR args

AR_ARGS 			=	-q -c


# LD flags

LD_F_NOLOGO				=   

# LD args

LD_ARGS_ST_D =  $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)
LD_ARGS_ST_R =  $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)

############################################################################
# Headers

CORE_HEADERS=\
 $(PROJ_INCLUDE_DIR)\xcontract\xcontract.h\
 $(PROJ_INCLUDE_DIR)\xcontract\implicit_link.h\
 $(PROJ_INCLUDE_DIR)\xcontract\internal\safestr.h\
 \

SHWILD_HEADERS=\
 $(PROJ_INCLUDE_DIR)\shwild\shwild.h\
 $(PROJ_INCLUDE_DIR)\shwild\shwild.hpp\
 \

XTESTS_HEADERS=\
 $(PROJ_INCLUDE_DIR)\xtests\xtests.h\
 \

############################################################################
# Names

############################################################
# Targets

########################################
# Libraries

# core
LIB_CORE_ST_D		=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib

LIB_CORE_ST_R		=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib

# shwild
LIB_SHWILD_ST_D   =   $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).xctrct.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib

LIB_SHWILD_ST_R   =   $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).xctrct.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib

# xtests
LIB_XTESTS_ST_D	=   $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).xctrct.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib

LIB_XTESTS_ST_R	=   $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).xctrct.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib

########################################
# Examples



########################################
# Tests


##############################
# Component Tests


##############################
# Scratch Tests



##############################
# Component Tests

TARG_TEST_UNIT_violations_ST_D	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.violations.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_violations_ST_R	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.violations.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe

############################################################
# Objects

########################################
# Libraries

# core

OBJ_lib_core_ST_D =	$(PROJ_OBJ_DIR)\core.debug.obj

OBJ_LIB_CORE_ST_D=\
 $(OBJ_lib_core_ST_D)\
 \

OBJ_LIB_CORE_ST_D_PM=\
 -+$(OBJ_lib_core_ST_D)\
 \

OBJ_lib_core_ST_R =	$(PROJ_OBJ_DIR)\core.obj

OBJ_LIB_CORE_ST_R=\
 $(OBJ_lib_core_ST_R)\
 \

OBJ_LIB_CORE_ST_R_PM=\
 -+$(OBJ_lib_core_ST_R)\
 \


# shwild

OBJ_shw_api_ST_D            = $(PROJ_OBJ_DIR)\shwild.xctrct.api.debug.obj
OBJ_shw_matches_ST_D        = $(PROJ_OBJ_DIR)\shwild.xctrct.matches.debug.obj
OBJ_shw_pattern_ST_D        = $(PROJ_OBJ_DIR)\shwild.xctrct.pattern.debug.obj

OBJ_SHWILD_ST_D=\
 $(OBJ_shw_api_ST_D)\
 $(OBJ_shw_matches_ST_D)\
 $(OBJ_shw_pattern_ST_D)\
 \

OBJ_SHWILD_ST_D_PM=\
 -+$(OBJ_shw_api_ST_D)\
 -+$(OBJ_shw_matches_ST_D)\
 -+$(OBJ_shw_pattern_ST_D)\
 \

OBJ_shw_api_ST_R            = $(PROJ_OBJ_DIR)\shwild.xctrct.api.obj
OBJ_shw_matches_ST_R        = $(PROJ_OBJ_DIR)\shwild.xctrct.matches.obj
OBJ_shw_pattern_ST_R        = $(PROJ_OBJ_DIR)\shwild.xctrct.pattern.obj

OBJ_SHWILD_ST_R=\
 $(OBJ_shw_api_ST_R)\
 $(OBJ_shw_matches_ST_R)\
 $(OBJ_shw_pattern_ST_R)\
 \

OBJ_SHWILD_ST_R_PM=\
 -+$(OBJ_shw_api_ST_R)\
 -+$(OBJ_shw_matches_ST_R)\
 -+$(OBJ_shw_pattern_ST_R)\
 \


# xtests

OBJ_xts_core_ST_D           = $(PROJ_OBJ_DIR)\xtests.xctrct.core.api.debug.obj

OBJ_XTESTS_ST_D=\
 $(OBJ_xts_core_ST_D)\
 \

OBJ_XTESTS_ST_D_PM=\
 -+$(OBJ_xts_core_ST_D)\
 \

OBJ_xts_core_ST_R           = $(PROJ_OBJ_DIR)\xtests.xctrct.core.api.obj

OBJ_XTESTS_ST_R=\
 $(OBJ_xts_core_ST_R)\
 \

OBJ_XTESTS_ST_R_PM=\
 -+$(OBJ_xts_core_ST_R)\
 \



########################################
# Examples



########################################
# Tests

##############################
# Component Tests

TARG_TEST_UNIT_violations_ST_D	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.violations.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_violations_ST_R	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.violations.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe

##############################
# Scratch Tests



##############################
# Unit Tests

OBJ_TEST_UNIT_violations_ST_D	=	.\test.unit.violations.debug.obj
OBJ_TEST_UNIT_violations_ST_R	=	.\test.unit.violations.obj

# Target groups

########################################
# Objects

# core
OBJS_CORE=\
 $(OBJ_CORE_ST_D)\
 $(OBJ_CORE_ST_R)\
 \

# shwild
OBJS_SHWILD=\
 $(OBJ_SHWILD_ST_D)\
 $(OBJ_SHWILD_ST_R)\
 \

# examples
OBJS_EXAMPLE=\
 \

# Component Tests
OBJS_TEST_COMPONENT=\
 \

# Scratch Tests
OBJS_TEST_SCRATCH=\
 \

# Unit Tests
OBJS_TEST_UNIT=\
 \

########################################
# Libraries

TARGETS_LIB_CORE=\
 $(LIB_CORE_ST_D)\
 $(LIB_CORE_ST_R)\
 \

TARGETS_LIB_ALL=\
 $(TARGETS_LIB_CORE)\
 \

TARGETS_LIB_SHWILD=\
 $(LIB_SHWILD_ST_D)\
 $(LIB_SHWILD_ST_R)\
 \

########################################
# Programs

TARGETS_EXAMPLE_C=\
 \

TARGETS_EXAMPLE_CPP=\
 \

TARGETS_EXAMPLE=\
 $(TARGETS_EXAMPLE_C)\
 $(TARGETS_EXAMPLE_CPP)\
 \


TARGETS_SAMPLE=\
 \


TARGETS_TEST_COMPONENT=\
 \

TARGETS_TEST_SCRATCH=\
 \

TARGETS_TEST_UNIT=\
 $(TARG_TEST_UNIT_violations_ST_D)\
 $(TARG_TEST_UNIT_violations_ST_R)\
 \


############################################################
# Third-party libraries

############################################################################
# External Targets (invokable by make)

# primary

_default:					build

usage:
	@echo "make [usage | compile | build | test | clean] - default is 'build'"

# infrastructure

check.lib.dir:				$(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)

check.bin.dir:				$(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_BIN_DIR)\NUL mkdir $(PROJ_BIN_DIR)


# compile targets

compile.libs.core:			$(PROJ_MAKEFILE_NAME)	$(OBJS_CORE)

compile.libs:										compile.libs.core

compile.libs.shwild:		$(PROJ_MAKEFILE_NAME)	$(OBJS_SHWILD)

compile.libs.3pty:									compile.libs.shwild

compile.libs.all:                                   compile.libs compile.libs.3pty

compile.examples:			$(PROJ_MAKEFILE_NAME)	$(OBJS_EXAMPLE)

compile.samples:			$(PROJ_MAKEFILE_NAME)	$(OBJS_SAMPLE)

compile.test.component:		$(PROJ_MAKEFILE_NAME)	$(OBJS_TEST_COMPONENT)

compile.test.scratch:		$(PROJ_MAKEFILE_NAME)	$(OBJS_TEST_SCRATCH)

compile.test.unit:			$(PROJ_MAKEFILE_NAME)	$(OBJS_TEST_UNIT)

compile.test:										compile.test.unit compile.test.component compile.test.scratch

compile:											compile.libs compile.libs.3pty compile.test compile.examples compile.samples

compile.all:										compile




# build targets

build.libs.core:			check.lib.dir			$(TARGETS_LIB_CORE)

build.libs:											build.libs.core

build.libs.shwild:			check.lib.dir			$(TARGETS_LIB_SHWILD)

build.libs.3pty:									build.libs.shwild

build.libs.all:										build.libs build.libs.3pty

build.examples:				check.bin.dir			$(TARGETS_EXAMPLE)

build.samples:				check.bin.dir			$(TARGETS_SAMPLE)

build.test.component:		check.bin.dir			$(TARGETS_TEST_COMPONENT)

build.test.scratch:			check.bin.dir			$(TARGETS_TEST_SCRATCH)

build.test.unit:			check.bin.dir			$(TARGETS_TEST_UNIT)

build.test:											build.test.unit build.test.component build.test.scratch

build:												build.libs build.test build.examples build.samples

build.all:											build



# test targets

test.component_:
	@echo Running Test:Component programs ...

test.scratch_:
	@echo Running Test:Scratch programs ...

test.unit_:
	@echo Running Test:Unit programs ...
	$(TARG_TEST_UNIT_violations_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_violations_ST_R) --verbosity=$(TEST_VERBOSITY)

test.component:			$(PROJ_MAKEFILE_NAME)	build.test.component test.component_

test.scratch:			$(PROJ_MAKEFILE_NAME)	build.test.scratch test.scratch_

test.unit:				$(PROJ_MAKEFILE_NAME)	build.test.unit test.unit_

test:											test.unit test.component

test.all:										test test.scratch
test-all:				test.all


# clean targets

clean.libs.core:
	@echo Cleaning Core libraries ...
	@-if exist core*.obj $(RM) core*.obj
	@-if exist $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_TAG)*.lib

clean.libs.shwild:
	@echo Cleaning shwild libraries ...
	@-if exist shwild.*.obj $(RM) shwild.*.obj
	@-if exist $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).xctrct.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).xctrct.$(COMP_TAG)*.lib

clean.test.component:
	@echo cleaning Test:Component libraries ...

clean.test.scratch:
	@echo cleaning Test:Scratch libraries ...
	@-if exist $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.*.$(COMP_TAG)*.exe $(RM) $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.*.$(COMP_TAG)*.exe
	@-if exist $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.*.$(COMP_TAG)*.exe $(RM) $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.*.$(COMP_TAG)*.exe

clean.test.unit:
	@echo cleaning Test:Unit libraries ...

clean.libs: 									clean.libs.core

clean.libs.3pty:								clean.libs.shwild

clean.libs.all: 								clean.libs clean.libs.3pty

clean.examples:			$(PROJ_MAKEFILE_NAME)

clean.samples:			$(PROJ_MAKEFILE_NAME)

clean.test:										clean.test.component clean.test.scratch clean.test.unit

clean:					$(PROJ_MAKEFILE_NAME)	clean.libs.all clean.test clean.examples clean.samples



############################################################################
# build targets

##################################################
# Libraries

########################################
# Main library - 'xcontract.X.core.a'

$(LIB_CORE_ST_D): $(OBJ_LIB_CORE_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_LIB_CORE_ST_D_PM)

$(OBJ_lib_core_ST_D):	$(PROJ_MAKEFILE_NAME) $(PROJ_SRC_DIR)\xcontract.core.c
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -fo=$@ $(PROJ_SRC_DIR)\xcontract.core.c

$(LIB_CORE_ST_R): $(OBJ_LIB_CORE_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_LIB_CORE_ST_R_PM)

$(OBJ_lib_core_ST_R):	$(PROJ_MAKEFILE_NAME) $(PROJ_SRC_DIR)\xcontract.core.c
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -fo=$@ $(PROJ_SRC_DIR)\xcontract.core.c

########################################
# shwild library - 'shwild.X.xctrct.core.a'

$(LIB_SHWILD_ST_D): $(OBJ_SHWILD_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_SHWILD_ST_D_PM)

$(OBJ_shw_api_ST_D): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_D) $(CPPC_SHWILD_INCLUDES_ST_D) -fo=$@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_ST_D): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_D) $(CPPC_SHWILD_INCLUDES_ST_D) -fo=$@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_ST_D): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_D) $(CPPC_SHWILD_INCLUDES_ST_D) -fo=$@ $(SHWILD_SRC_DIR)\pattern.cpp

$(LIB_SHWILD_ST_R): $(OBJ_SHWILD_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_SHWILD_ST_R_PM)

$(OBJ_shw_api_ST_R): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_R) $(CPPC_SHWILD_INCLUDES_ST_R) -fo=$@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_ST_R): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_R) $(CPPC_SHWILD_INCLUDES_ST_R) -fo=$@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_ST_R): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_R) $(CPPC_SHWILD_INCLUDES_ST_R) -fo=$@ $(SHWILD_SRC_DIR)\pattern.cpp

########################################
# xTests library - 'xtests.X.xctrct.core.a'

$(LIB_XTESTS_ST_D): $(OBJ_XTESTS_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_XTESTS_ST_D_PM)

$(OBJ_xts_core_ST_D): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_ST_D) $(CPPC_XTESTS_INCLUDES_ST_D) -fo=$@ $(XTESTS_SRC_DIR)\xtests.core.cpp

$(LIB_XTESTS_ST_R): $(OBJ_XTESTS_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_XTESTS_ST_R_PM)

$(OBJ_xts_core_ST_R): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_ST_R) $(CPPC_XTESTS_INCLUDES_ST_R) -fo=$@ $(XTESTS_SRC_DIR)\xtests.core.cpp

##################################################
# Examples



##################################################
# Tests

##############################
# Component Tests

##############################
# Scratch Tests

##############################
# Unit Tests

$(TARG_TEST_UNIT_violations_ST_D):	\
			$(OBJ_TEST_UNIT_violations_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -fe=$@ \
		$(OBJ_TEST_UNIT_violations_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_violations_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.violations\test.unit.violations.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -fo=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.violations\test.unit.violations.cpp

$(TARG_TEST_UNIT_violations_ST_R):	\
			$(OBJ_TEST_UNIT_violations_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -fe=$@ \
		$(OBJ_TEST_UNIT_violations_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_violations_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.violations\test.unit.violations.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -fo=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.violations\test.unit.violations.cpp


############################### end of file ################################
