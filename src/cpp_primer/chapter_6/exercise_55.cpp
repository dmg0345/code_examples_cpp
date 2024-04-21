/**
 ***********************************************************************************************************************
 * @file        exercise_55.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <vector>

using namespace std;

// NOLINTBEGIN(misc-const-correctness)

namespace
{

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

}

namespace CppPrimer::Chapter6
{

void exercise_55(void)
{
    using fnPtr = int (*)(int, int);

    vector<fnPtr> fnPtrVector = {add, subtract, multiply, divide};
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
