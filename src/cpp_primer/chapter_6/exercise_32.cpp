/**
 ***********************************************************************************************************************
 * @file        exercise_32.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

// NOLINTBEGIN(cppcoreguidelines-pro-bounds-pointer-arithmetic,cppcoreguidelines-avoid-c-arrays,
// cppcoreguidelines-pro-bounds-array-to-pointer-decay)

namespace
{

int & get(int * arry, int index)
{
    return arry[index];
}

}

namespace CppPrimer::Chapter6
{

void exercise_32(void)
{
    // In both cases, when the object is not a local object, as that object doesn't exist anymore after the function
    // ends.
    // In the case of reference to const, when the object only requires read access.

    int ia[10];

    for (int i = 0; i != 10; ++i)
    {
        get(ia, i) = i;
    }
}

}

// NOLINTEND(cppcoreguidelines-pro-bounds-pointer-arithmetic,cppcoreguidelines-avoid-c-arrays,
// cppcoreguidelines-pro-bounds-array-to-pointer-decay)

/******************************************************************************************************END OF FILE*****/
