/**
 ***********************************************************************************************************************
 * @file        exercise_11.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

// NOLINTBEGIN(misc-const-correctness)

namespace CppPrimer::Chapter4
{

void exercise_11(void)
{
    char a = 4;
    char b = 3;
    char c = 2;
    char d = 1;

    std::cout << ((a > b) ? ((b > c) ? ((c > d) ? ("YEP") : ("YES BUT NO")) : ("ALMOST THERE")) : ("NOPE"))
              << std::endl;
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
