/**
 ***********************************************************************************************************************
 * @file        exercise_50.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter6
{

void exercise_50(void)
{
    // - void f(int, int) and void f(double, double = 3.14) are viable functions, but none is a best match,
    //   so it will be an ambiguous function call.

    // - void f(int) and void f(double, double = 3.14) are viable functions,
    //   but the first one is the best match as no conversion is required.

    // - void f(int, int) and void f(double, double = 3.14) are viable function,
    //   but the first one is the best match as no conversion is required.

    // - void f(int, int) and void f(double, double = 3.14) are viable functions,
    //   but the second one is the best match as no conversion is required.
}

}

/******************************************************************************************************END OF FILE*****/
