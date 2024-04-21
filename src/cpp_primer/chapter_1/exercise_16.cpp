/**
 ***********************************************************************************************************************
 * @file        exercise_16.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter1
{

void exercise_16(void)
{
    unsigned int a = 0;
    unsigned int sum = 0;
    while (std::cin >> a)
    {
        sum += a;
    }
    std::cout << "Total sum: " << sum << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
