/**
 ***********************************************************************************************************************
 * @file        exercise_35.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iterator>

// NOLINTBEGIN(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-pointer-arithmetic)

namespace CppPrimer::Chapter3
{

void exercise_35(void)
{
    using std::begin;
    using std::end;

    int array_0[5] = {1, 1, 1, 1, 1};
    int * ptr_b = begin(array_0);
    int * ptr_e = end(array_0);

    while (ptr_b != ptr_e)
    {
        *ptr_b = 0;
        ptr_b++;
    }
}

}

// NOLINTEND(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-pointer-arithmetic)

/******************************************************************************************************END OF FILE*****/
