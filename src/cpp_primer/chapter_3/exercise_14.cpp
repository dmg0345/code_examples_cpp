/**
 ***********************************************************************************************************************
 * @file        exercise_14.cpp
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
