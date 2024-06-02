/**
 ***********************************************************************************************************************
 * @file        exercise_16.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter1
{

void exercise_16(void)
{
    unsigned int a = 0;
    unsigned int sum = 0;
    while (std::cin >> a)
    {
        sum += a;
    }
    std::cout << "Total sum: " << sum << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
