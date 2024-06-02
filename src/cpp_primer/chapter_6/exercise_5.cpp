/**
 ***********************************************************************************************************************
 * @file        exercise_5.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace
{

int abs_val(int x)
{
    return (x < 0) ? (-x) : (x);
}

}

namespace CppPrimer::Chapter6
{

void exercise_5(void)
{
    using std::cout;
    using std::endl;

    for (const auto & val : {-4, -2, 0, 2, 4})
    {
        cout << "Absolute value of number of " << val << " is " << abs_val(val) << "." << endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
