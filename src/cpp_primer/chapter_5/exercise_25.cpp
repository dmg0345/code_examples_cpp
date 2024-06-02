/**
 ***********************************************************************************************************************
 * @file        exercise_25.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
