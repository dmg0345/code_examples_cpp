/**
 ***********************************************************************************************************************
 * @file        exercise_42.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
