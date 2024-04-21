/**
 ***********************************************************************************************************************
 * @file        exercise_24.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter5
{

void exercise_24(void)
{
    int a = 0;
    int b = 0;

    if (std::cin >> a >> b)
    {
        if (b == 0)
        {
            throw std::runtime_error("Divisor can't be zero.");
        }
        std::cout << "The result of " << a << " split by " << b << " is " << a / b << "." << std::endl;
    }
    else
    {
        std::cout << "Cancelled." << std::endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
