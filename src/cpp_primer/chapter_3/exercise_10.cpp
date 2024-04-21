/**
 ***********************************************************************************************************************
 * @file        exercise_10.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_10(void)
{
    using std::string;
    using std::cin;
    using std::cout;
    using std::endl;

    string s0;

    cout << "Write a string with punctuation, a new string with the punctuation removed will be printed." << endl;
    getline(cin, s0);
    for (auto & i : s0)
    {
        if (ispunct(i) == 0)
        {
            cout << i;
        }
    }
    cout << endl;
}

}

/******************************************************************************************************END OF FILE*****/
