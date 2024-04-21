/**
 ***********************************************************************************************************************
 * @file        exercise_7.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_7(void)
{
    using std::string;
    using std::cout;
    using std::endl;
    using std::cin;
    using std::getline;

    string s0;

    cout << "Type a string, all its characters will be replaced by \'X\'." << endl;
    getline(cin, s0);

    for (char & chr : s0)
    {
        chr = 'X';
    }
    cout << "This is your string now: " << s0 << endl;
}

}

/******************************************************************************************************END OF FILE*****/
