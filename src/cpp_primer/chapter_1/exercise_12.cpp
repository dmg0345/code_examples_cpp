/**
 ***********************************************************************************************************************
 * @file        exercise_12.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter1
{

void exercise_12(void)
{
    signed int sum = 0;
    signed int i = 0;

    for (i = -100; i <= 100; i++)
    {
        sum += i;
    }

    std::cout << sum << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
