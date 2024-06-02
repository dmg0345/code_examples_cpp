/**
 ***********************************************************************************************************************
 * @file        exercise_31.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <cstddef>

#if defined(__GNUC__)
#pragma GCC diagnostic push // Store current settings.
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif

// NOLINTBEGIN(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-constant-array-index)

namespace CppPrimer::Chapter3
{

void exercise_31(void)
{
    constexpr size_t array_size = 10;
    int ia[array_size];

    for (size_t ix = 1; ix <= array_size; ++ix)
    {
        ia[ix - 1] = static_cast<int>(ix);
    }
}

}

// NOLINTEND(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-constant-array-index)

#if defined(__GNUC__)
#pragma GCC diagnostic pop // Restore settings.
#endif

/******************************************************************************************************END OF FILE*****/
