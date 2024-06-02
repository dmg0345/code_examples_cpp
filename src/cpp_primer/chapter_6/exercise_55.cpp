/**
 ***********************************************************************************************************************
 * @file        exercise_55.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
