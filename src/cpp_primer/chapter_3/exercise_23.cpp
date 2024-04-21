/**
 ***********************************************************************************************************************
 * @file        exercise_23.cpp
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

void exercise_23(void)
{
    using std::vector;
    using std::cout;
    using std::endl;

    vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "These are the original elements: " << endl;
    for (auto db = data.begin(), de = data.end(); db != de; db++)
    {
        cout << *db << ' ';
        *db *= 2;
    }
    cout << endl;

    cout << "These are the updated elements: " << endl;
    for (auto dbc = data.cbegin(), dec = data.cend(); dbc != dec; dbc++)
    {
        cout << *dbc << ' ';
    }
    cout << endl;
}

}

/******************************************************************************************************END OF FILE*****/
