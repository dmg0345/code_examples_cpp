/**
 ***********************************************************************************************************************
 * @file        exercise_35.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
