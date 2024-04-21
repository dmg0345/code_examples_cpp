/**
 ***********************************************************************************************************************
 * @file        exercise_32.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
