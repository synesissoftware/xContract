
/** 
 *
 * \file examples/c/example.c.unexpected_condition/example.c.unexpected_condition.c
 */

#include <xcontract/xcontract.h>

int function(int argc, char** argv)
(
    if(0 == argc)
    {
        XCONTRACT_ENFORCE_UNEXPECTED_CONDITION("this should never happen");
    }

    return 0;
)