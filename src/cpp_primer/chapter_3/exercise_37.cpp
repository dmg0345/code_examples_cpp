/**
 ***********************************************************************************************************************
 * @file        exercise_37.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

// NOLINTBEGIN(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-constant-array-index,
// cppcoreguidelines-pro-bounds-array-to-pointer-decay)

namespace CppPrimer::Chapter3
{

void exercise_37(void)
{
    using std::cout;
    using std::endl;

    // It prints all the characters in ca, a line for each character, and then continues until it finds a \0,
    // which basically means that it will go out of bounds.
    const char ca[] = {'h', 'e', 'l', 'l', 'o' /*FIX: , '\0'*/};
    const char * cp = ca;

    while (*cp)
    {
        cout << *cp << endl;
        ++cp;
    }
}

}

// NOLINTEND(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-constant-array-index,
// cppcoreguidelines-pro-bounds-array-to-pointer-decay)

/******************************************************************************************************END OF FILE*****/
