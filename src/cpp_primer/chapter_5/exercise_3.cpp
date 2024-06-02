/**
 ***********************************************************************************************************************
 * @file        exercise_3.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter5
{

void exercise_3(void)
{
    int sum = 0;
    int val = 0;
    while (val <= 10)
    {
        sum += val;
        ++val;
    }
    std::cout << "Final sum value (original): " << sum << std::endl;
    // This makes the code worse..., it's better to use a compound statement.
    sum = val = 0;
    while (val <= 10)
    {
        sum += val, val++;
    }
    std::cout << "Final sum value (rewritten): " << sum << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
