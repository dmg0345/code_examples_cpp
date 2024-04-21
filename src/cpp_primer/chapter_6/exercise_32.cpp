/**
 ***********************************************************************************************************************
 * @file        exercise_32.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
