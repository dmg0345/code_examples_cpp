/**
 ***********************************************************************************************************************
 * @file        exercise_8.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_8(void)
{
    using std::string;
    using std::cout;
    using std::endl;
    using std::cin;
    using std::getline;

    string s0;
    string s1;
    decltype(s0.size()) i = 0;

    cout << "Type a string, all its characters will be replaced by \'X\'." << endl;
    getline(cin, s0);
    s1 = s0;

    while (i < s0.size())
    {
        s0[i++] = 'X';
    }

    cout << "This is your string now (while loop): " << s0 << endl;
    s0 = s1;

    for (i = 0; i < s0.size(); i++)
    {
        s0[i] = 'X';
    }

    cout << "This is your string now (for loop): " << s0 << endl;
}

}

/******************************************************************************************************END OF FILE*****/
