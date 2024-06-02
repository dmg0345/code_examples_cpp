/**
 ***********************************************************************************************************************
 * @file        exercise_4.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter4
{

void exercise_4(void)
{
    std::cout << "Without parentheses: " << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << std::endl;
    std::cout << "With parentheses: " << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
