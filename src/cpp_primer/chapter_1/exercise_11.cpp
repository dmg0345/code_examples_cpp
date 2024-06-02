/**
 ***********************************************************************************************************************
 * @file        exercise_11.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
