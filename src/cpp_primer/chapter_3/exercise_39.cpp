/**
 ***********************************************************************************************************************
 * @file        exercise_39.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <cstring>
#include <iostream>

// NOLINTBEGIN(misc-const-correctness)

namespace CppPrimer::Chapter3
{

void exercise_39(void)
{
    using std::string;
    using std::cout;
    using std::endl;

    // First part.
    const char * str_0 = "This is a C-Style string.";
    const char * str_1 = "This is a C-Style string...";

    if (strcmp(str_0, str_1) == 0)
    {
        cout << "The C-Style strings are equal." << endl;
    }
    else
    {
        cout << "The C-Style strings are not equal." << endl;
    }

    // Second part.
    string s0 = "This is a C-Style string.";
    string s1 = "This is a C-Style string...";

    if (s0 == s1)
    {
        cout << "The C++-Style strings are equal." << endl;
    }
    else
    {
        cout << "The C++-Style strings are not equal." << endl;
    }
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
