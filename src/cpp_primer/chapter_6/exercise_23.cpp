/**
 ***********************************************************************************************************************
 * @file        exercise_23.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

// NOLINTBEGIN(cppcoreguidelines-pro-bounds-pointer-arithmetic,cppcoreguidelines-avoid-c-arrays,
// cppcoreguidelines-pro-bounds-array-to-pointer-decay)

using namespace std;

namespace
{

void print(const int * param, const int length)
{
    int i = 0;

    for (; i < length; i++)
    {
        cout << param[i] << endl;
    }
}

}

namespace CppPrimer::Chapter6
{

void exercise_23(void)
{
    int i = 0;
    int j[2] = {0, 1};

    print(&i, 1);
    print(j, 2);
}

}

// NOLINTEND(cppcoreguidelines-pro-bounds-pointer-arithmetic,cppcoreguidelines-avoid-c-arrays,
// cppcoreguidelines-pro-bounds-array-to-pointer-decay)

/******************************************************************************************************END OF FILE*****/
