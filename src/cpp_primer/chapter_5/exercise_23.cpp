/**
 ***********************************************************************************************************************
 * @file        exercise_23.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter5
{

void exercise_23(void)
{
    int a = 0;
    int b = 0;

    if (std::cin >> a >> b)
    {
        std::cout << "The result of " << a << " split by " << b << " is " << a / b << "." << std::endl;
    }
    else
    {
        std::cout << "Cancelled." << std::endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
