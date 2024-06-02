/**
 ***********************************************************************************************************************
 * @file        exercise_42.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <vector>
#include <iostream>

// NOLINTBEGIN(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-array-to-pointer-decay,
// cppcoreguidelines-pro-bounds-constant-array-index)

namespace CppPrimer::Chapter3
{

void exercise_42(void)
{
    using std::vector;
    using std::cout;
    using std::endl;

    vector<int> my_vector{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int my_array[10];

    if ((sizeof(my_array) / sizeof(*my_array)) == my_vector.size())
    {
        cout << "This are the values in the array: " << endl;
        for (size_t a = 0; a < ((sizeof(my_array) / sizeof(*my_array))); a++)
        {
            my_array[a] = my_vector[a];
            cout << my_array[a] << ' ';
        }
        cout << endl;
    }
    else
    {
        cout << "Sizes do not match, so nothing copied." << endl;
    }
}

}

// NOLINTEND(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-array-to-pointer-decay,
// cppcoreguidelines-pro-bounds-constant-array-index)

/******************************************************************************************************END OF FILE*****/
