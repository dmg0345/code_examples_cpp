/**
 ***********************************************************************************************************************
 * @file        exercise_20.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter2
{

void exercise_20(void)
{
    int i = 42;
    int * p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << *p1 << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
