/**
 ***********************************************************************************************************************
 * @file        exercise_25.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

// NOLINTBEGIN(readability-else-after-return)

namespace CppPrimer::Chapter5
{

void exercise_25(void)
{
    int a = 0;
    int b = 0;

    do {
        try
        {
            std::cout << "Please input numbers A and B: ";
            if (std::cin >> a >> b)
            {
                if (b == 0)
                {
                    throw std::runtime_error("Divisor can't be zero.");
                }
                std::cout << "The result of " << a << " split by " << b << " is " << a / b << "." << std::endl;
                break;
            }
            else
            {
                std::cout << "cancelled or error." << std::endl;
                break;
            }
        }
        catch (std::runtime_error & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    while (true);
}

}

// NOLINTEND(readability-else-after-return)

/******************************************************************************************************END OF FILE*****/
