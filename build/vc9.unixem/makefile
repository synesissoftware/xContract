############################################################################
# File:     makefile
#
# Purpose:  Makefile for the xContract:C project, for the Visual C++ 9.0 (x86 UNIXem)
#           compiler, on UNIX
#
# Created:  15th February 2005
# Updated:  11th July 2006
#
############################################################################


############################################################################
# Environment check
#

!ifndef STLSOFT
!error STLSOFT must be defined
!endif # !STLSOFT
!ifndef PTHREADS_WIN32
!error PTHREADS_WIN32 must be defined
!endif # !PTHREADS_WIN32
!ifndef UNIXEM
!error UNIXEM must be defined
!endif # !UNIXEM

############################################################################
# Symbols

########################################
# Project & compiler version

COMP_TAG			=	vc9
ARCH_TAG            =   
OS_TAG				=   .unix
PROJ_TAG			=	xcontract
PROJ_VER_MAJOR		=   0
PROJ_TAG_VER		=   $(PROJ_TAG).$(PROJ_VER_MAJOR)
COMP_ARCH_OS_TAG	=	$(COMP_TAG)$(OS_TAG)$(ARCH_TAG)

SHWILD_VER_MAJOR	=	0
SHWILD_TAG_VER		=	shwild.$(SHWILD_VER_MAJOR)

XTESTS_VER_MAJOR    =   0
XTESTS_TAG_VER      =   xtests.$(XTESTS_VER_MAJOR)

UNIXEM_VER_MAJOR	=	1
UNIXEM_TAG_VER      =   unixem.$(XTESTS_VER_MAJOR)

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

CC						=   cl
CPPC					=   cl
AR						=   lib
LD						=   link
RM						=   del /f
CP						=   copy
RC						=   rc

# Includes

INCLUDES_LEADER 	=	

PROJ_INCLUDE		=	-I$(PROJ_INCLUDE_DIR)

ENV_INCLUDES 	=

COMMON_INCLUDES 	=	-I$(SYNESIS_DEV)/include -I$(SYNESIS_DEV)/libraries/include

CC_INCLUDES_BASE=\
$(INCLUDES_LEADER)\
$(PROJ_INCLUDE)\
-I"$(STLSOFT)\include"\
$(COMMON_INCLUDES)\
-I"$(PTHREADS_WIN32)\include"\
-I"$(UNIXEM)\include"\
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
-I"$(PTHREADS_WIN32)\include"\
-I"$(UNIXEM)\include"\
$(ENV_INCLUDES)\
 \

CPPC_INCLUDES=\
$(CPPC_INCLUDES_BASE)\
 \


# shwild

CPPC_SHWILD_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_MT_UX =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_MT_UX_DEBUG =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \


# xTests

CPPC_XTESTS_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_MT_UX =\
$(CPPC_XTESTS_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_MT_UX_DEBUG =\
$(CPPC_XTESTS_INCLUDES_BASE)\
 \




# Lib

LIBS_LEADER 		=	

# lib paths

ENV_LIBPATHS		=
COMMON_LIBPATHS			=	-libpath:$(SYNESIS_DEV)/lib 



LIBPATHS=\
$(LIBS_LEADER)\
 -libpath:"$(PTHREADS_WIN32)\lib"\
 -libpath:"$(UNIXEM)\lib"\
$(COMMON_LIBPATHS)\
$(ENV_LIBPATHS)\
\


# lib names

TARGET_LIB_MT_UX	= kernel32.lib user32.lib advapi32.lib uuid.lib wininet.lib ole32.lib oleaut32.lib ws2_32.lib pthreadVC.lib
TARGET_LIB_MT_UX_DEBUG	= kernel32.lib user32.lib advapi32.lib uuid.lib wininet.lib ole32.lib oleaut32.lib ws2_32.lib pthreadVC.lib

# #defines

COMMON_DEFS 		=	-DUNIX

CUSTOM_DEFS			=

CC_CUSTOM_DEFS		=	$(CUSTOM_DEFS)

CPPC_CUSTOM_DEFS	=	$(CUSTOM_DEFS)

CC_DEFS 			=	$(COMMON_DEFS) $(CC_CUSTOM_DEFS)

CPPC_DEFS			=	$(COMMON_DEFS) $(CPPC_CUSTOM_DEFS)

# CC flags

CC_F_NOLOGO 			=	-nologo
CC_F_COMPILE_ONLY		=	-c
CC_F_WARNING_MAX		=	-W4
CC_F_WARNING_ERR		=	-WX
CC_F_WARNINGS_LIMIT		=	
CC_F_MINIMUM_SIZE		=	-O1
#CC_F_MAXIMUM_SPEED		=	-O2
CC_APP_F_WARNING_MAX	=	$(CC_F_WARNING_MAX)
CC_APP_F_WARNING_ERR	=	$(CC_F_WARNING_ERR)

# CPPC flags

CPPC_F_NOLOGO			=   -nologo
CPPC_F_COMPILE_ONLY		=   -c
CPPC_F_WARNING_MAX		=   -W4
CPPC_F_WARNING_ERR		=   -WX
CPPC_F_EXCEPTIONS_ON	=	-EHsc
CPPC_F_EXCEPTIONS_OFF	=	-wd4530
CPPC_F_RTTI				=   -GR
CPPC_F_WARNINGS_LIMIT	=	
CPPC_F_MINIMUM_SIZE 	=	-O1
CPPC_F_MAXIMUM_SPEED	=	-O2
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
CC_LIB_ARGS_MT_UX			=	$(CC_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CC_LIB_ARGS_MT_UX_DEBUG			=	$(CC_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT

CPPC_LIB_ARGS_MT_UX			=	$(CPPC_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CPPC_LIB_ARGS_MT_UX_DEBUG			=	$(CPPC_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT

# - shwild
CC_SHWILD_ARGS_MT_UX			=	$(CC_SHWILD_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_SHWILD_ARGS_MT_UX_DEBUG			=	$(CC_SHWILD_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_SHWILD_ARGS_MT_UX		=	$(CPPC_SHWILD_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_SHWILD_ARGS_MT_UX_DEBUG		=	$(CPPC_SHWILD_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# - xTests
CC_XTESTS_ARGS_MT_UX			=	$(CC_XTESTS_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_XTESTS_ARGS_MT_UX_DEBUG			=	$(CC_XTESTS_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_XTESTS_ARGS_MT_UX			=	$(CPPC_XTESTS_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_XTESTS_ARGS_MT_UX_DEBUG			=	$(CPPC_XTESTS_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# - Examples
CC_EXAMPLE_ARGS_MT_UX		=	$(CC_EXAMPLE_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_EXAMPLE_ARGS_MT_UX_DEBUG		=	$(CC_EXAMPLE_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_EXAMPLE_ARGS_MT_UX		=	$(CPPC_EXAMPLE_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_EXAMPLE_ARGS_MT_UX_DEBUG		=	$(CPPC_EXAMPLE_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# - Test (Component)
CC_TEST_COMPONENT_ARGS_MT_UX			=	$(CC_TEST_COMPONENT_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_TEST_COMPONENT_ARGS_MT_UX_DEBUG			=	$(CC_TEST_COMPONENT_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_TEST_COMPONENT_ARGS_MT_UX			=	$(CPPC_TEST_COMPONENT_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_TEST_COMPONENT_ARGS_MT_UX_DEBUG			=	$(CPPC_TEST_COMPONENT_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# - Test (Scratch)
CC_TEST_SCRATCH_ARGS_MT_UX			=	$(CC_TEST_SCRATCH_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_TEST_SCRATCH_ARGS_MT_UX_DEBUG			=	$(CC_TEST_SCRATCH_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_TEST_SCRATCH_ARGS_MT_UX			=	$(CPPC_TEST_SCRATCH_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_TEST_SCRATCH_ARGS_MT_UX_DEBUG			=	$(CPPC_TEST_SCRATCH_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# - Test (Unit)
CC_TEST_UNIT_ARGS_MT_UX			=	$(CC_TEST_UNIT_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_TEST_UNIT_ARGS_MT_UX_DEBUG			=	$(CC_TEST_UNIT_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_TEST_UNIT_ARGS_MT_UX			=	$(CPPC_TEST_UNIT_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG			=	$(CPPC_TEST_UNIT_FLAGS) $(CPPC_F_WITH_EXCEPTIONS) -MTd -D_REENTRANT -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# AR args

AR_ARGS 			=	-nologo


# LD flags

LD_F_NOLOGO				=   -nologo

# LD args

LD_ARGS_MT_UX = libWinSysLog.$(COMP_TAG).mt.lib unixem.1.$(COMP_TAG).mt.lib -release $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)
LD_ARGS_MT_UX_DEBUG = libWinSysLog.$(COMP_TAG).mt.debug.lib unixem.1.$(COMP_TAG).mt.debug.lib -debug $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)

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
LIB_CORE_MT_UX		=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_ARCH_OS_TAG).mt.lib

LIB_CORE_MT_UX_DEBUG		=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_ARCH_OS_TAG).mt.debug.lib

# shwild
LIB_SHWILD_MT_UX   =   $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).xctrct.$(COMP_ARCH_OS_TAG).mt.lib

LIB_SHWILD_MT_UX_DEBUG   =   $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).xctrct.$(COMP_ARCH_OS_TAG).mt.debug.lib

# xtests
LIB_XTESTS_MT_UX	=   $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).xctrct.$(COMP_ARCH_OS_TAG).mt.lib

LIB_XTESTS_MT_UX_DEBUG	=   $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).xctrct.$(COMP_ARCH_OS_TAG).mt.debug.lib

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

TARG_TEST_UNIT_violations_MT_UX	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.violations.$(COMP_ARCH_OS_TAG).mt.exe
TARG_TEST_UNIT_violations_MT_UX_DEBUG	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.violations.$(COMP_ARCH_OS_TAG).mt.debug.exe

############################################################
# Objects

########################################
# Libraries

# core

OBJ_lib_core_MT_UX =	$(PROJ_OBJ_DIR)\core.mt.obj

OBJ_LIB_CORE_MT_UX=\
 $(OBJ_lib_core_MT_UX)\
 \

OBJ_lib_core_MT_UX_DEBUG =	$(PROJ_OBJ_DIR)\core.mt.debug.obj

OBJ_LIB_CORE_MT_UX_DEBUG=\
 $(OBJ_lib_core_MT_UX_DEBUG)\
 \


# shwild

OBJ_shw_api_MT_UX            = $(PROJ_OBJ_DIR)\shwild.xctrct.api.mt.obj
OBJ_shw_matches_MT_UX        = $(PROJ_OBJ_DIR)\shwild.xctrct.matches.mt.obj
OBJ_shw_pattern_MT_UX        = $(PROJ_OBJ_DIR)\shwild.xctrct.pattern.mt.obj

OBJ_SHWILD_MT_UX=\
 $(OBJ_shw_api_MT_UX)\
 $(OBJ_shw_matches_MT_UX)\
 $(OBJ_shw_pattern_MT_UX)\
 \

OBJ_shw_api_MT_UX_DEBUG            = $(PROJ_OBJ_DIR)\shwild.xctrct.api.mt.debug.obj
OBJ_shw_matches_MT_UX_DEBUG        = $(PROJ_OBJ_DIR)\shwild.xctrct.matches.mt.debug.obj
OBJ_shw_pattern_MT_UX_DEBUG        = $(PROJ_OBJ_DIR)\shwild.xctrct.pattern.mt.debug.obj
PDB_shw_api_MT_UX_DEBUG            = $(PROJ_OBJ_DIR)\shwild.xctrct.api.mt.debug.pdb
PDB_shw_matches_MT_UX_DEBUG        = $(PROJ_OBJ_DIR)\shwild.xctrct.matches.mt.debug.pdb
PDB_shw_pattern_MT_UX_DEBUG        = $(PROJ_OBJ_DIR)\shwild.xctrct.pattern.mt.debug.pdb

OBJ_SHWILD_MT_UX_DEBUG=\
 $(OBJ_shw_api_MT_UX_DEBUG)\
 $(OBJ_shw_matches_MT_UX_DEBUG)\
 $(OBJ_shw_pattern_MT_UX_DEBUG)\
 \

PDB_SHWILD_MT_UX_DEBUG=\
 $(PDB_shw_api_MT_UX_DEBUG)\
 $(PDB_shw_matches_MT_UX_DEBUG)\
 $(PDB_shw_pattern_MT_UX_DEBUG)\
 \


# xtests

OBJ_xts_core_MT_UX           = $(PROJ_OBJ_DIR)\xtests.xctrct.core.api.mt.obj

OBJ_XTESTS_MT_UX=\
 $(OBJ_xts_core_MT_UX)\
 \

OBJ_xts_core_MT_UX_DEBUG           = $(PROJ_OBJ_DIR)\xtests.xctrct.core.api.mt.debug.obj
PDB_xts_core_MT_UX_DEBUG           = $(PROJ_OBJ_DIR)\xtests.xctrct.core.api.mt.debug.pdb

OBJ_XTESTS_MT_UX_DEBUG=\
 $(OBJ_xts_core_MT_UX_DEBUG)\
 \

PDB_XTESTS_MT_UX_DEBUG=\
 $(PDB_xts_core_MT_UX_DEBUG)\
 \



########################################
# Examples



########################################
# Tests

##############################
# Component Tests

TARG_TEST_UNIT_violations_MT_UX	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.violations.$(COMP_ARCH_OS_TAG).mt.exe
TARG_TEST_UNIT_violations_MT_UX_DEBUG	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.violations.$(COMP_ARCH_OS_TAG).mt.debug.exe

##############################
# Scratch Tests



##############################
# Unit Tests

OBJ_TEST_UNIT_violations_MT_UX	=	.\test.unit.violations.mt.obj
OBJ_TEST_UNIT_violations_MT_UX_DEBUG	=	.\test.unit.violations.mt.debug.obj

# Target groups

########################################
# Objects

# core
OBJS_CORE=\
 $(OBJ_CORE_MT_UX)\
 $(OBJ_CORE_MT_UX_DEBUG)\
 \

# shwild
OBJS_SHWILD=\
 $(OBJ_SHWILD_MT_UX)\
 $(OBJ_SHWILD_MT_UX_DEBUG)\
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
 $(LIB_CORE_MT_UX)\
 $(LIB_CORE_MT_UX_DEBUG)\
 \

TARGETS_LIB_ALL=\
 $(TARGETS_LIB_CORE)\
 \

TARGETS_LIB_SHWILD=\
 $(LIB_SHWILD_MT_UX)\
 $(LIB_SHWILD_MT_UX_DEBUG)\
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
 $(TARG_TEST_UNIT_violations_MT_UX)\
 $(TARG_TEST_UNIT_violations_MT_UX_DEBUG)\
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
	$(TARG_TEST_UNIT_violations_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_violations_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)

test.component:			$(PROJ_MAKEFILE_NAME)	build.test.component test.component_

test.scratch:			$(PROJ_MAKEFILE_NAME)	build.test.scratch test.scratch_

test.unit:				$(PROJ_MAKEFILE_NAME)	build.test.unit test.unit_

test:											test.unit test.component

test.all:										test test.scratch
test-all:				test.all


# clean targets

clean.libs.core:
	@echo Cleaning Core libraries ...
	@-$(RM) $(LIB_CORE_MT_UX)
	@-$(RM) $(LIB_CORE_MT_UX_DEBUG)
	@-$(RM) $(OBJ_CORE_MT_UX)
	@-$(RM) $(OBJ_CORE_MT_UX_DEBUG)
	@-$(RM) $(PDB_CORE_MT_UX_DEBUG)

clean.libs.shwild:
	@echo Cleaning shwild libraries ...
	@-$(RM) $(LIB_SHWILD_MT_UX)
	@-$(RM) $(LIB_SHWILD_MT_UX_DEBUG)
	@-$(RM) $(OBJ_SHWILD_MT_UX)
	@-$(RM) $(OBJ_SHWILD_MT_UX_DEBUG)
	@-$(RM) $(PDB_SHWILD_MT_UX_DEBUG)

clean.test.component:
	@echo cleaning Test:Component libraries ...

clean.test.scratch:
	@echo cleaning Test:Scratch libraries ...

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

$(LIB_CORE_MT_UX): $(OBJ_LIB_CORE_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_LIB_CORE_MT_UX)

$(OBJ_lib_core_MT_UX):	$(PROJ_MAKEFILE_NAME) $(PROJ_SRC_DIR)\xcontract.core.c
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\xcontract.core.c

$(LIB_CORE_MT_UX_DEBUG): $(OBJ_LIB_CORE_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_LIB_CORE_MT_UX_DEBUG)

$(OBJ_lib_core_MT_UX_DEBUG):	$(PROJ_MAKEFILE_NAME) $(PROJ_SRC_DIR)\xcontract.core.c
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\xcontract.core.c

########################################
# shwild library - 'shwild.X.xctrct.core.a'

$(LIB_SHWILD_MT_UX): $(OBJ_SHWILD_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_SHWILD_MT_UX)

$(OBJ_shw_api_MT_UX): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX) $(CPPC_SHWILD_INCLUDES_MT_UX) -Fo$@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_MT_UX): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX) $(CPPC_SHWILD_INCLUDES_MT_UX) -Fo$@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_MT_UX): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX) $(CPPC_SHWILD_INCLUDES_MT_UX) -Fo$@ $(SHWILD_SRC_DIR)\pattern.cpp

$(LIB_SHWILD_MT_UX_DEBUG): $(OBJ_SHWILD_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_SHWILD_MT_UX_DEBUG)

$(OBJ_shw_api_MT_UX_DEBUG): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX_DEBUG) $(CPPC_SHWILD_INCLUDES_MT_UX_DEBUG) -Fo$@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_MT_UX_DEBUG): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX_DEBUG) $(CPPC_SHWILD_INCLUDES_MT_UX_DEBUG) -Fo$@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_MT_UX_DEBUG): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX_DEBUG) $(CPPC_SHWILD_INCLUDES_MT_UX_DEBUG) -Fo$@ $(SHWILD_SRC_DIR)\pattern.cpp

########################################
# xTests library - 'xtests.X.xctrct.core.a'

$(LIB_XTESTS_MT_UX): $(OBJ_XTESTS_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_XTESTS_MT_UX)

$(OBJ_xts_core_MT_UX): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_MT_UX) $(CPPC_XTESTS_INCLUDES_MT_UX) -Fo$@ $(XTESTS_SRC_DIR)\xtests.core.cpp

$(LIB_XTESTS_MT_UX_DEBUG): $(OBJ_XTESTS_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_XTESTS_MT_UX_DEBUG)

$(OBJ_xts_core_MT_UX_DEBUG): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_MT_UX_DEBUG) $(CPPC_XTESTS_INCLUDES_MT_UX_DEBUG) -Fo$@ $(XTESTS_SRC_DIR)\xtests.core.cpp

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

$(TARG_TEST_UNIT_violations_MT_UX):	\
			$(OBJ_TEST_UNIT_violations_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_violations_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_violations_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.violations\test.unit.violations.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.violations\test.unit.violations.cpp

$(TARG_TEST_UNIT_violations_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_violations_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_violations_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_violations_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.violations\test.unit.violations.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.violations\test.unit.violations.cpp


############################### end of file ################################
