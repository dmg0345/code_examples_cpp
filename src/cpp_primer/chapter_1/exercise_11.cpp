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

namespace CppPrimer::Chapter1
{

void exercise_11(void)
{
    unsigned int i = 0;
    unsigned int a = 0;

    std::cin >> i >> a;

    while (++i < a)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
