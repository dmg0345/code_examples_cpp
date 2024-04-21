/**
 ***********************************************************************************************************************
 * @file        exercise_36.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

// NOLINTBEGIN(misc-const-correctness)

namespace CppPrimer::Chapter2
{

void exercise_36(void)
{
    // c is an int with an initialization value of 3.
    // b us a reference to int bounded to a.
    // The final value of a is 4.
    // The final value of b is 4.
    // The final value of c is 4.
    // d is a reference bounded to a.

    int a = 3;
    int b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
