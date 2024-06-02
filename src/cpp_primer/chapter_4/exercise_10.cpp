/**
 ***********************************************************************************************************************
 * @file        exercise_10.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter4
{

void exercise_10(void)
{
    int a = 0;
    std::cout << "Reading values until the input is 42..." << std::endl;

    while ((a != 42) && (std::cin >> a))
    {
        std::cout << "Value read " << a << std::endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
