/**
 ***********************************************************************************************************************
 * @file        exercise_36.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

// NOLINTBEGIN(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-constant-array-index,
// cppcoreguidelines-pro-bounds-array-to-pointer-decay)

namespace CppPrimer::Chapter3
{

void exercise_36(void)
{
    using std::vector;
    using std::cin;
    using std::cout;
    using std::endl;

    // Compare two arrays.
    int my_array[5] = {0, 1, 2, 3, 4};
    int my_array_0[6] = {0, 1, 2, 3, 4, 5};
    bool res = true;

    if (sizeof(my_array) == sizeof(my_array_0))
    {
        for (size_t a = 0; a < (sizeof(my_array) / sizeof(*my_array)); a++)
        {
            if (my_array[a] != my_array_0[a])
            {
                res = false;
                break;
            }
        }
    }
    else
    {
        res = false;
    }

    if (res)
    {
        cout << "The arrays are equal." << endl;
    }
    else
    {
        cout << "The arrays are not equal." << endl;
    }

    // Compare two vectors.
    vector<int> my_vector{0, 1, 2, 3, 4};
    vector<int> my_vector_0{0, 1, 2, 3, 4, 5};

    if (my_vector == my_vector_0)
    {
        cout << "The vectors are equal." << endl;
    }
    else
    {
        cout << "The vectors are not equal." << endl;
    }
}

}

// NOLINTEND(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-constant-array-index,
// cppcoreguidelines-pro-bounds-array-to-pointer-decay)

/******************************************************************************************************END OF FILE*****/
