/* /////////////////////////////////////////////////////////////////////////
 * File:        test.scratch.test1.cpp
 *
 * Purpose:     Implementation file for the test.scratch.test1 project.
 *
 * Created:     22nd March 2008
 * Updated:     28th September 2008
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2008, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */


#define XCONTRACT_ENFORCING_UNEXPECTED_CONDITION
#define XCONTRACT_ENFORCING_PRECONDITION_LOGIC_0

#define XCONTRACT_VERIFY_CONDITION_AT_RUNTIME


/* xContract Header Files */
#include <xcontract/xcontract.h>

/* STLSoft Header Files */
#include <stlsoft/stlsoft.h>
#include <platformstl/platformstl.hpp>


/* Standard C++ Header Files */
#include <exception>

/* Standard C Header Files */
#include <stdio.h>
#include <stdlib.h>

#if defined(_MSC_VER) && \
    defined(_DEBUG)
# include <crtdbg.h>
#endif /* _MSC_VER) && _DEBUG */

/* ////////////////////////////////////////////////////////////////////// */

#ifndef _XCONTRACT_NO_NAMESPACE
using xcontract::xContract_violation_type_t;
using xcontract::xContract_violationReport_fn_t;
#endif /* _XCONTRACT_NO_NAMESPACE */


#ifdef XCONTRACT_VERIFY_CONDITION_AT_RUNTIME
XCONTRACT_CALL(int) xContract_isConditionVerified(  xContract_violation_type_t      /* type */
                                                ,   int                             /* level */
                                                ,   char const*                     /* file */
                                                ,   unsigned                        /* line */
                                                ,   char const*                     /* function */
                                                ,   char const*                     /* expression */)
{
    return 1;
}
#endif /* XCONTRACT_VERIFY_CONDITION_AT_RUNTIME */

/* ////////////////////////////////////////////////////////////////////// */

#if defined(STLSOFT_COMPILER_IS_MSVC)
#pragma comment(linker, "/FORCE:MULTIPLE")
#endif /* compiler */

XCONTRACT_CALL(void) xContract_contract_violation2( char const*                     file
                                                ,   unsigned                        line
                                                ,   char const*                     function
                                                ,   char const*                     expression
                                                ,   char const*                     message
                                                ,   char const*                     qualifier
                                                ,   xContract_violation_type_t      type
                                                ,   int                             level
                                                ,   xContract_violationReport_fn_t  pfnReport)
{
    if(NULL == pfnReport)
    {
        pfnReport = XCONTRACT_NS_QUAL(xContract_violationReport);
    }

    (*pfnReport)(file, line, function, expression, message, qualifier, type, level);
}

/* ////////////////////////////////////////////////////////////////////// */

static int main_(int argc, char** /*argv*/)
{
    if(0 == argc)
    {
        XCONTRACT_ENFORCE_UNEXPECTED_CONDITION("should never get here!");
    }

    XCONTRACT_ENFORCE_PRECONDITION_LOGIC_0(true == false, "things in main()");

    XCONTRACT_NS_QUAL(xContract_contract_violation2)(__FILE__, __LINE__, NULL, "0", "stuff happens", NULL, XCONTRACT_NS_QUAL(xContract_unexpectedCondition), 0, NULL);

    return EXIT_SUCCESS;
}

int main(int argc, char** argv)
{
    int             res;

#if defined(_MSC_VER) && \
    defined(_DEBUG)
    _CrtMemState    memState;
#endif /* _MSC_VER && _MSC_VER */

#if defined(_MSC_VER) && \
    defined(_DEBUG)
    _CrtMemCheckpoint(&memState);
#endif /* _MSC_VER && _MSC_VER */

#if 0
    { for(size_t i = 0; i < 0xffffffff; ++i){} }
#endif /* 0 */

    try
    {
#if defined(_DEBUG) || \
    defined(__SYNSOFT_DBS_DEBUG)
        puts("test.scratch.test1: " __STLSOFT_COMPILER_LABEL_STRING);
#endif /* debug */

        res = main_(argc, argv);
    }
    catch(std::exception& x)
    {
        fprintf(stderr, "Unhandled error: %s\n", x.what());

        res = EXIT_FAILURE;
    }
    catch(...)
    {
        fprintf(stderr, "Unhandled unknown error\n");

        res = EXIT_FAILURE;
    }

#if defined(_MSC_VER) && \
    defined(_DEBUG)
    _CrtMemDumpAllObjectsSince(&memState);
#endif /* _MSC_VER) && _DEBUG */

    return res;
}

/* ////////////////////////////////////////////////////////////////////// */
