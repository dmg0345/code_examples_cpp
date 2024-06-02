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

// NOLINTBEGIN(misc-const-correctness)

namespace
{

void swap_value(int * a, int * b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

}

namespace CppPrimer::Chapter6
{

void exercise_10(void)
{
    using std::cout;
    using std::endl;

    int a = 5;
    int b = 10;

    cout << "Values before swap: a is " << a << ", b is " << b << "." << endl;
    swap_value(&a, &b);
    cout << "Values after swap: a is " << a << ", b is " << b << "." << endl;
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
