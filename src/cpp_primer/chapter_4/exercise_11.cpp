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

// NOLINTBEGIN(misc-const-correctness)

namespace CppPrimer::Chapter4
{

void exercise_11(void)
{
    char a = 4;
    char b = 3;
    char c = 2;
    char d = 1;

    std::cout << ((a > b) ? ((b > c) ? ((c > d) ? ("YEP") : ("YES BUT NO")) : ("ALMOST THERE")) : ("NOPE"))
              << std::endl;
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
