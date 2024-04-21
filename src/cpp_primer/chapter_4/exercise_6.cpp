/**
 ***********************************************************************************************************************
 * @file        exercise_6.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

// NOLINTBEGIN(readability-implicit-bool-conversion,misc-const-correctness)

namespace CppPrimer::Chapter4
{

void exercise_6(void)
{
    int a = 0x01;
    std::cout << ((a & 1) ? ("ODD") : ("EVEN")) << std::endl;
}

}

// NOLINTEND(readability-implicit-bool-conversion,misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
