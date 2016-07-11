/* /////////////////////////////////////////////////////////////////////////
 * File:        test.unit.violations.cpp
 *
 * Purpose:     Implementation file for the test.unit.violations project.
 *
 * Created:     26th September 2008
 * Updated:     11th July 2016
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2008-2016, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */



/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#include <xcontract/test/util/compiler_warnings_suppression.first_include.h>

/* xContract Header Files */
#define XCONTRACT_CUSTOM_REPORTER   violationReport_fn_t
#include <xcontract/xcontract.h>

/* xTests Header Files */
#include <xtests/xtests.h>

/* STLSoft Header Files */
#include <stlsoft/stlsoft.h>
#include <platformstl/filesystem/file_lines.hpp>
#include <platformstl/filesystem/path.hpp>

/* Standard C++ Header Files */
#include <string>

/* Standard C Header Files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef PLATFORMSTL_OS_IS_UNIX
# include <sys/wait.h> 
#endif /* OS */

#include <xcontract/test/util/compiler_warnings_suppression.last_include.h>

/* /////////////////////////////////////////////////////////////////////////
 * Constants
 */

const int EXIT_VIOLATION    =   100;

/* /////////////////////////////////////////////////////////////////////////
 * Forward declarations
 */

namespace
{

    static void test_1_0(void);
    static void test_1_1(void);
    static void test_1_2(void);
    static void test_1_3(void);
    static void test_1_4(void);
    static void test_1_5(void);
    static void test_1_6(void);
    static void test_1_7(void);
    static void test_1_8(void);
    static void test_1_9(void);

    std::string argv0;
    std::string logFileName;

} // anonymous namespace

/* /////////////////////////////////////////////////////////////////////////
 * Violations
 */

namespace
{

    static void exercise_unexpectedCondition();
    static void exercise_precondition_logic();
    static void exercise_precondition_parameters();
    static void exercise_postcondition_returnValue();
    static void exercise_postcondition_logic();
    static void exercise_postcondition_parameters();
    static void exercise_invariant_class();
    static void exercise_invariant_global();
    static void exercise_staticData();
    static void exercise_intermediateAssumption();

    static const struct map_item_t
    {
        char const* name;
        void        (*pfn)();
    } items[] =
    {
#define DEFINE_ITEM(name)   { # name, exercise_ ## name }

        DEFINE_ITEM(unexpectedCondition),
        DEFINE_ITEM(precondition_logic),
        DEFINE_ITEM(precondition_parameters),
        DEFINE_ITEM(postcondition_returnValue),
        DEFINE_ITEM(postcondition_logic),
        DEFINE_ITEM(postcondition_parameters),
        DEFINE_ITEM(invariant_class),
        DEFINE_ITEM(invariant_global),
        DEFINE_ITEM(staticData),
        DEFINE_ITEM(intermediateAssumption),
    };

	int
	always_true()
	{
		return 1;
	}

} // anonymous namespace

/* /////////////////////////////////////////////////////////////////////////
 * Helper functions
 */

static
void XCONTRACT_CALLCONV violationReport_fn_t(   char const*                 /* file */
                                            ,   unsigned                    /* line */
                                            ,   char const*                 /* function */
                                            ,   char const*                 /* expression */
                                            ,   char const*                 message
                                            ,   char const*                 /* qualifier */
                                            ,   xcontract::violation_type_t type
                                            ,   int                         level)
{
    printf("%s|%s|%d\n", xcontract::xContract_getViolationTypeString(type), message, level);

    exit(EXIT_VIOLATION);
}

/* /////////////////////////////////////////////////////////////////////////
 * Main
 */

int main(int argc, char **argv)
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    argv0       =   argv[0];
    logFileName =   (platformstl::path(argv[0]).pop_ext().push_ext("test.log")).c_str();

    { for(int i = 1; i != argc; ++i)
    {
        if('-' != argv[i][0])
        {
            { for(size_t j = 0; j != STLSOFT_NUM_ELEMENTS(items); ++j)
            {
                if(0 == ::strcmp(items[j].name, argv[1]))
                {
                    (*items[j].pfn)();

                    return EXIT_SUCCESS;
                }
            }}

            return EXIT_FAILURE;
        }
    }}

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if(XTESTS_START_RUNNER("test.unit.violations", verbosity))
    {
        XTESTS_RUN_CASE(test_1_0);
        XTESTS_RUN_CASE(test_1_1);
        XTESTS_RUN_CASE(test_1_2);
        XTESTS_RUN_CASE(test_1_3);
        XTESTS_RUN_CASE(test_1_4);
        XTESTS_RUN_CASE(test_1_5);
        XTESTS_RUN_CASE(test_1_6);
        XTESTS_RUN_CASE(test_1_7);
        XTESTS_RUN_CASE(test_1_8);
        XTESTS_RUN_CASE(test_1_9);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}

/* /////////////////////////////////////////////////////////////////////////
 * Helper functions
 */

namespace
{
    void test_condition_(
        char const*                 file
    ,   int                         line
    ,   char const*                 conditionName
    ,   char const*                 message
    ,   xcontract::violation_type_t type
    )
    {
        using xtests::c::xtests_writeFailMessage;
        using xtests::c::xtestsComparisonEqual;
        using xtests::c::xtests_testMultibyteStrings;
        using xtests::cpp::xtests_test_integer;

        int r = system((argv0 + " " + conditionName + " >" + logFileName).c_str());

        if(r < 0)
        {
            xtests_writeFailMessage(file, line, XTESTS_GET_FUNCTION_(), "could not run the given test", conditionName);
        }
#ifdef PLATFORMSTL_OS_IS_UNIX
        else if(EXIT_VIOLATION != WEXITSTATUS(r))
#else /* ? OS */
        else if(EXIT_VIOLATION != r)
#endif /* OS */
        {
            xtests_writeFailMessage(file, line, XTESTS_GET_FUNCTION_(), "the given test did not fire any violations", conditionName);
        }
        else
        {
            platformstl::file_lines lines(logFileName);

            xtests_test_integer(__FILE__, __LINE__, XTESTS_GET_FUNCTION_(), "1u == lines.size()", 1u, lines.size(), xtestsComparisonEqual);
            if(1u == lines.size())
            {
                char const* expectedViolationTypeString = xcontract::xContract_getViolationTypeString(type);
                std::string expected;

                expected += expectedViolationTypeString;
                expected += "|";
                expected += message;
                expected += "|";
                expected += "0";

                xtests_testMultibyteStrings(file, line, XTESTS_GET_FUNCTION_(), "expected == lines[0]", expected, lines[0], xtestsComparisonEqual);
            }
        }
    }

#define TEST_CONDITION_(condition, message) \
                                            \
                                            \
        test_condition_(__FILE__, __LINE__, #condition, message, xcontract::xContract_ ## condition)
} // anonymous namespace

/* /////////////////////////////////////////////////////////////////////////
 * Test function and violation function implementations
 */

namespace
{
    int logic;
    int must_be_zero;

    const int zero_integers[] = { 1, 2, 3 }; // Design break


    static void test_1_0()
    {
#ifdef XCONTRACT_ENFORCING_UNEXPECTED_CONDITION
        TEST_CONDITION_(unexpectedCondition, "test_1_0");
#endif /* XCONTRACT_ENFORCING_UNEXPECTED_CONDITION */
    }
    static void exercise_unexpectedCondition()
    {
        if(always_true()) // Design break
        {
            XCONTRACT_ENFORCE_UNEXPECTED_CONDITION("test_1_0");
        }
    }



    static void test_1_1()
    {
#ifdef XCONTRACT_ENFORCING_PRECONDITION_LOGIC_0
        TEST_CONDITION_(precondition_logic, "test_1_1");
#endif /* XCONTRACT_ENFORCING_PRECONDITION_LOGIC_0 */
    }
    static void exercise_precondition_logic()
    {
        struct type
        {
            static void requires_that_logic_is_zero()
            {
                XCONTRACT_ENFORCE_PRECONDITION_LOGIC_0(0 == logic, "test_1_1");
            }
        };

        logic = 10; // Design break
        type::requires_that_logic_is_zero();
    }



    static void test_1_2()
    {
#ifdef XCONTRACT_ENFORCING_PRECONDITION_PARAMETERS_0
        TEST_CONDITION_(precondition_parameters, "test_1_2");
#endif /* XCONTRACT_ENFORCING_PRECONDITION_PARAMETERS_0 */
    }
    static void exercise_precondition_parameters()
    {
        struct type
        {
            static void must_be_passed_zero(int a0)
            {
                XCONTRACT_ENFORCE_PRECONDITION_PARAMETERS_0(0 == a0, "test_1_2");
            }
        };

        type::must_be_passed_zero(1); // Design break
    }



    static void test_1_3()
    {
#ifdef XCONTRACT_ENFORCING_POSTCONDITION_RETURN_0
        TEST_CONDITION_(postcondition_returnValue, "test_1_3");
#endif /* XCONTRACT_ENFORCING_POSTCONDITION_RETURN_0 */
    }
    static void exercise_postcondition_returnValue()
    {
        struct type
        {
            static int returns_zero()
            {
                return 1; // Design break
            }
        };

        XCONTRACT_ENFORCE_POSTCONDITION_RETURN_0(0 == type::returns_zero(), "test_1_3");
    }



    static void test_1_4()
    {
#ifdef XCONTRACT_ENFORCING_POSTCONDITION_LOGIC_0
        TEST_CONDITION_(postcondition_logic, "test_1_4");
#endif /* XCONTRACT_ENFORCING_POSTCONDITION_LOGIC_0 */
    }
    static void exercise_postcondition_logic()
    {
        struct type
        {
            static void requires_that_logic_is_zero()
            {
            }
        };

        logic = 10; // Design break
        type::requires_that_logic_is_zero();

        XCONTRACT_ENFORCE_POSTCONDITION_LOGIC_0(0 == logic, "test_1_4");
    }


    
    
    static void test_1_5()
    {
#ifdef XCONTRACT_ENFORCING_POSTCONDITION_PARAMETERS_0
        TEST_CONDITION_(postcondition_parameters, "test_1_5");
#endif /* XCONTRACT_ENFORCING_POSTCONDITION_PARAMETERS_0 */
    }
    static void exercise_postcondition_parameters()
    {
        struct type
        {
            static void sets_out_param_to_zero(int* a0)
            {
                *a0 = 1; // Design break
            }
        };

        int i;

        type::sets_out_param_to_zero(&i);

        XCONTRACT_ENFORCE_POSTCONDITION_PARAMETERS_0(0 == i, "test_1_5");

        STLSOFT_SUPPRESS_UNUSED(i);
    }



    static void test_1_6()
    {
#ifdef XCONTRACT_ENFORCING_CLASS_INVARIANT_0
        TEST_CONDITION_(invariant_class, "test_1_6");
#endif /* XCONTRACT_ENFORCING_CLASS_INVARIANT_0 */
    }
    static void exercise_invariant_class()
    {
        class type
        {
        public:
            type()
                : mustBeZero(1) // Design break
            {}
        private:
            type& operator =(type const&)   { return *this; }

        public:
            void operation()
            {
                XCONTRACT_ENFORCE_CLASS_INVARIANT_0(0 == mustBeZero, "test_1_6");
            }

        private:
            int const mustBeZero;
        };

        type    instance;

        instance.operation();
    }

    
    
    static void test_1_7()
    {
#ifdef XCONTRACT_ENFORCING_GLOBAL_INVARIANT_0
        TEST_CONDITION_(invariant_global, "test_1_7");
#endif /* XCONTRACT_ENFORCING_GLOBAL_INVARIANT_0 */
    }
    static void exercise_invariant_global()
    {
        must_be_zero = 1; // Design break

        XCONTRACT_ENFORCE_GLOBAL_INVARIANT_0(0 == must_be_zero, "test_1_7");
    }

    
    
    static void test_1_8()
    {
#ifdef XCONTRACT_ENFORCING_STATIC_DATA_0
        TEST_CONDITION_(staticData, "test_1_8");
#endif /* XCONTRACT_ENFORCING_STATIC_DATA_0 */
    }
    static void exercise_staticData()
    {
        XCONTRACT_ENFORCE_STATIC_DATA_0(0 == zero_integers[0], "test_1_8");
        XCONTRACT_ENFORCE_STATIC_DATA_0(0 == zero_integers[1], "test_1_8");
        XCONTRACT_ENFORCE_STATIC_DATA_0(0 == zero_integers[2], "test_1_8");
    }



    static void test_1_9()
    {
#ifdef XCONTRACT_ENFORCING_ASSUMPTION_0
        TEST_CONDITION_(intermediateAssumption, "test_1_9");
#endif /* XCONTRACT_ENFORCING_ASSUMPTION_0 */
    }
    static void exercise_intermediateAssumption()
    {
        int a   =   10;
        int b   =   10;

        int c   =   a + b;

        c++; // Design break

        XCONTRACT_ENFORCE_ASSUMPTION_0(10 == c, "test_1_9");

        int d   =   c * c;

        STLSOFT_SUPPRESS_UNUSED(d);
    }

} // anonymous namespace

/* ///////////////////////////// end of file //////////////////////////// */
