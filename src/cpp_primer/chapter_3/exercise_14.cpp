/**
 ***********************************************************************************************************************
 * @file        exercise_14.cpp
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

void exercise_14(void)
{
    using std::vector;
    using std::endl;
    using std::cout;
    using std::cin;

    vector<int> v1;
    int a = 0;

    cout << "Please type integer values to add to the vector." << endl;
    while (cin >> a)
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
