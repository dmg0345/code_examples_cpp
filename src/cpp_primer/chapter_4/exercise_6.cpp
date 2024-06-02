/**
 ***********************************************************************************************************************
 * @file        exercise_6.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

// NOLINTBEGIN(readability-implicit-bool-conversion,misc-const-correctness)

namespace CppPrimer::Chapter4
{

void exercise_6(void)
{
    int a = 0x01;
    std::cout << ((a & 1) ? ("ODD") : ("EVEN")) << std::endl;
}

}

// NOLINTEND(readability-implicit-bool-conversion,misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
