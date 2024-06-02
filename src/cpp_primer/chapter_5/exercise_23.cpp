/**
 ***********************************************************************************************************************
 * @file        exercise_23.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
