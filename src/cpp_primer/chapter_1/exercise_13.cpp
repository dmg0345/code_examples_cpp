/**
 ***********************************************************************************************************************
 * @file        exercise_13.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter1
{

void exercise_13(void)
{
    // Exercise 9:
    unsigned int sum = 0;
    unsigned int i = 0;
    for (i = 50, sum = 0; i <= 100; sum += i++)
    {
        ;
    }
    std::cout << "Total sum: " << sum << std::endl;

    // Exercise 10:
    std::cin >> i >> sum;
    for (; ++i < sum; std::cout << i << " ")
    {
        ;
    }
    std::cout << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
