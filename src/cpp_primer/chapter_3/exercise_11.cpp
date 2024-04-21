/**
 ***********************************************************************************************************************
 * @file        exercise_11.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_11(void)
{
    // It is valid, and the type of &c is reference to const char. (const char &).
    using std::string;
    using std::endl;
    using std::cout;

    const string s = "Keep out!";

    for (const auto & c : s)
    {
        cout << c;
    }
    cout << endl;
}

}

/******************************************************************************************************END OF FILE*****/
