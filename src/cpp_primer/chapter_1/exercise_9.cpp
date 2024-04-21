/**
 ***********************************************************************************************************************
 * @file        exercise_9.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter1
{

void exercise_9(void)
{
    unsigned int sum = 0;
    unsigned int i = 50;

    while (i <= 100)
    {
        sum += i++;
    }

    std::cout << "Total sum: " << sum << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
