/**
 ***********************************************************************************************************************
 * @file        exercise_56.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

using namespace std;

// NOLINTBEGIN(readability-isolate-declaration,misc-const-correctness)

namespace
{

using fnPtr = int (*)(int, int);

int add(int a, int b)
{
    return a + b;
};

int subtract(int a, int b)
{
    return a - b;
};

int multiply(int a, int b)
{
    return a * b;
};

int divide(int a, int b)
{
    return a / b;
};

vector<fnPtr> fnPtrVector = {add, subtract, multiply, divide};

}

namespace CppPrimer::Chapter6
{

void exercise_56(void)
{
    int a = 4, b = 4;

    for (const auto & fn : fnPtrVector)
    {
        cout << fn(a, b) << endl;
    }
}

}

// NOLINTEND(readability-isolate-declaration,misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
