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

namespace CppPrimer::Chapter1
{

void exercise_6(void)
{
    // The program is not legal because of the semicolons, the proper program is shown below.
    const unsigned int v1 = 10;
    const unsigned int v2 = 20;

    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
