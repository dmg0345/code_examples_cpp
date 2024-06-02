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

namespace
{

int fact(int x)
{
    int fact = 1;
    int tmp = 1;

    if (x > 1)
    {
        do {
            fact *= (tmp++);
        }
        while (tmp <= x);
    }

    return fact;
}

}

namespace CppPrimer::Chapter6
{

void exercise_3(void)
{
    using std::cout;
    using std::endl;

    for (const auto & val : {0, 1, 2, 3, 4})
    {
        cout << "Factorial number of " << val << " is " << fact(val) << "." << endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
