/**
 ***********************************************************************************************************************
 * @file        exercise_45.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <cstring>
#include <iostream>

// NOLINTBEGIN(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-array-to-pointer-decay,
// cppcoreguidelines-pro-bounds-constant-array-index)

namespace CppPrimer::Chapter3
{

void exercise_45(void)
{
    using std::cout;
    using std::endl;
    using std::begin;
    using std::end;

    using ref_to_arr4 = int(&)[4];
    using ref_to_int = int &;
    using s_op = size_t;
    using ptr_to_arr4 = int(*)[4];
    using ptr_to_int = int *;

    int ia[3][4] = {
        {0,  1,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    // Using a range for.
    cout << "Printing the elements using \"range for\": " << endl;
    for (ref_to_arr4 a : ia)
    {
        for (ref_to_int b : a)
        {
            cout << b << ' ';
        }
        cout << endl;
    }

    // Using a conventional for loop with subscripts.
    cout << "Printing the elements using \"conventional for loop with subscripts\": " << endl;
    for (s_op a = 0; a < 3; a++)
    {
        for (s_op b = 0; b < 4; b++)
        {
            cout << ia[a][b] << ' ';
        }
        cout << endl;
    }

    // Using a conventional for loop with pointers.
    cout << "Printing the elements using \"conventional for loop with pointers\": " << endl;
    for (ptr_to_arr4 a = begin(ia); a < end(ia); a++)
    {
        for (ptr_to_int b = begin(*a); b < end(*a); b++)
        {
            cout << *b << ' ';
        }
        cout << endl;
    }
}

}

// NOLINTEND(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-array-to-pointer-decay,
// cppcoreguidelines-pro-bounds-constant-array-index)

/******************************************************************************************************END OF FILE*****/
