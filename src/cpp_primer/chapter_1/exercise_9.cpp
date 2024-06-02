/**
 ***********************************************************************************************************************
 * @file        exercise_9.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter1
{

void exercise_9(void)
{
    unsigned int sum = 0;
    unsigned int i = 50;

    while (i <= 100)
    {
        sum += i++;
    }

    std::cout << "Total sum: " << sum << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
