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

namespace CppPrimer::Chapter4
{

void exercise_10(void)
{
    int a = 0;
    std::cout << "Reading values until the input is 42..." << std::endl;

    while ((a != 42) && (std::cin >> a))
    {
        std::cout << "Value read " << a << std::endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
