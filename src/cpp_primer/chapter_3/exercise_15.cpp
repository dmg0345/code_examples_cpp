/**
 ***********************************************************************************************************************
 * @file        exercise_15.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

namespace CppPrimer::Chapter3
{

void exercise_15(void)
{
    using std::vector;
    using std::string;
    using std::endl;
    using std::cout;
    using std::cin;

    vector<string> v1;
    string a;

    cout << "Please type strings to add to the vector." << endl;
    while (getline(cin, a))
    {
        v1.push_back(a);
    }

    for (auto & i : v1)
    {
        cout << i << ' ';
    }
    cout << endl;
}

}

/******************************************************************************************************END OF FILE*****/
