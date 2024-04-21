/**
 ***********************************************************************************************************************
 * @file        exercise_12.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

// NOLINTBEGIN(misc-const-correctness)

namespace
{

void swap_value(int & a, int & b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

}

namespace CppPrimer::Chapter6
{

void exercise_12(void)
{
    using std::cout;
    using std::endl;

    int a = 5;
    int b = 10;

    cout << "Values before swap: a is " << a << ", b is " << b << "." << endl;
    swap_value(a, b);
    cout << "Values after swap: a is " << a << ", b is " << b << "." << endl;
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
