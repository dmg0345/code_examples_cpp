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

namespace CppPrimer::Chapter1
{

void exercise_4(void)
{
    unsigned int v1 = 0;
    unsigned int v2 = 0;

    std::cout << "Please input the first operand: " << std::endl;
    std::cin >> v1;
    std::cout << "Please input the second operand: " << std::endl;
    std::cin >> v2;
    std::cout << "The result is: " << v1 * v2 << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
