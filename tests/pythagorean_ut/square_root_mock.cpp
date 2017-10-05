#include "CppUTestExt/MockSupport.h"

extern "C"
{
#include <stdio.h>
#include "square_root.h"
}


float SquareRoot_sqrt(float number)
{
    printf("SquareRoot_sqrt gets called.\n");

    return mock().actualCall(__func__)
        .withParameter("number", number)
        .returnDoubleValue();
}
