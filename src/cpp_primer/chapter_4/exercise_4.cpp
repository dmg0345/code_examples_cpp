/**
 ***********************************************************************************************************************
 * @file        exercise_4.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter4
{

void exercise_4(void)
{
    std::cout << "Without parentheses: " << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << std::endl;
    std::cout << "With parentheses: " << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
