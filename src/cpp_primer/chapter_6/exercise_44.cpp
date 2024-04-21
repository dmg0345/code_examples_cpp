/**
 ***********************************************************************************************************************
 * @file        exercise_44.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include <string>

using namespace std;

// NOLINTBEGIN(misc-const-correctness)

namespace
{

inline bool isShorter(const string & s1, const string & s2)
{
    return s1.size() < s2.size();
}

}

namespace CppPrimer::Chapter6
{

void exercise_44(void)
{
    string s1 = "Hi!";
    string s2 = "Hello!";

    if (isShorter(s1, s2))
    {
        cout << s1 << " is shorter than " << s2 << "." << endl;
    }
    else
    {
        cout << s2 << " is shorter than " << s1 << "." << endl;
    }
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
