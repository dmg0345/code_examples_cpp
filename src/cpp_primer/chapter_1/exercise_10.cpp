/**
 ***********************************************************************************************************************
 * @file        exercise_10.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter1
{

void exercise_10(void)
{
    unsigned int i = 10;

    while (i != 0)
    {
        std::cout << i-- << "\r";
    }

    std::cout << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
