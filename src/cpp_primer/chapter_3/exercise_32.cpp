/**
 ***********************************************************************************************************************
 * @file        exercise_32.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

#if defined(__GNUC__)
#pragma GCC diagnostic push // Store current settings.
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif

// NOLINTBEGIN(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-constant-array-index,
// performance-unnecessary-copy-initialization)

namespace CppPrimer::Chapter3
{

void exercise_32(void)
{
    using std::vector;

    int my_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int my_array_2[10];

    // Could also use memcpy, but whatever.
    for (unsigned long a = 0; a < (sizeof(my_array) / sizeof(*my_array)); a++)
    {
        my_array_2[a] = my_array[a];
    }

    // Rewrite with vectors.
    vector<int> v1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v2 = v1;
}

}

// NOLINTEND(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-constant-array-index,
// performance-unnecessary-copy-initialization)

#if defined(__GNUC__)
#pragma GCC diagnostic pop // Restore settings.
#endif

/******************************************************************************************************END OF FILE*****/
