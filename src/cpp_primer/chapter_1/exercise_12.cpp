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

namespace CppPrimer::Chapter1
{

void exercise_12(void)
{
    signed int sum = 0;
    signed int i = 0;

    for (i = -100; i <= 100; i++)
    {
        sum += i;
    }

    std::cout << sum << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
