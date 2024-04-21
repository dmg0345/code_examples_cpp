/**
 ***********************************************************************************************************************
 * @file        exercise_5.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_5(void)
{
    using std::string;
    using std::cout;
    using std::endl;
    using std::cin;
    using std::getline;

    string s0;
    string s1;

    cout << "Type strings, they will be concatenated (separated by spaces) and then printed back to you." << endl;
    while (getline(cin, s0))
    {
        if (!s1.empty())
        {
            s1 += " ";
        }
        s1 += s0;
    }
    cout << endl << "The concatenated string is the following: " << endl;
    cout << s1 << endl;
}

}

/******************************************************************************************************END OF FILE*****/
