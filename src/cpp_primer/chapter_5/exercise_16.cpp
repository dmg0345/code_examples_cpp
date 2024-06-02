/**
 ***********************************************************************************************************************
 * @file        exercise_16.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

namespace CppPrimer::Chapter5
{

void exercise_16(void)
{
    size_t a = 0;
    std::vector<int> vectorInt = {0, 1, 2, 3, 4};

    // While loop as a for loop.
    while (a < vectorInt.size())
    {
        std::cout << "Element " << a << " is " << vectorInt[a] << "." << std::endl;
        a++;
    }

    // For loop as a while loop.
    for (; a >= 1;)
    {
        std::cout << "Element " << a - 1 << " is " << vectorInt[a - 1] << "." << std::endl;
        a--;
    }

    // I would choose the for loop, because it is more flexible.
}

}

/******************************************************************************************************END OF FILE*****/
