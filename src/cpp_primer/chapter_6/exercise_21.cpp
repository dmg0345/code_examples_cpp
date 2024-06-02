/**
 ***********************************************************************************************************************
 * @file        exercise_21.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace
{

int compare(int a, const int * b)
{
    return (a > *b) ? (a) : (*b);
}

}

namespace CppPrimer::Chapter6
{

void exercise_21(void)
{
    using std::cin;
    using std::cout;
    using std::endl;

    int a = 0;
    int b = 0;

    // It should be a pointer to const as we don't intend to modify the value.
    while (cin >> a >> b)
    {
        cout << "The biggest value of the two introduced is " << compare(a, &b) << "." << endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
