/**
 ***********************************************************************************************************************
 * @file        exercise_2.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_2(void)
{
    using std::string;
    using std::cout;
    using std::endl;
    using std::cin;
    using std::getline;

    string s0;

    // Read by word.
    cout << "Whatever you type, the words will be read and printed back, type \"continue\" to exit" << endl;
    while ((cin >> s0) && (s0 != "continue"))
    {
        cout << s0 << endl;
    }

    // Read by line.
    cout << "Now whatever you type, lines will be read and printed back, type \"continue\" to exit" << endl;
    while (getline(cin, s0) && (s0 != "continue"))
    {
        cout << s0 << endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
