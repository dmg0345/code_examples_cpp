/**
 ***********************************************************************************************************************
 * @file        exercise_23.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
