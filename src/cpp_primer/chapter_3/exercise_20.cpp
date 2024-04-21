/**
 ***********************************************************************************************************************
 * @file        exercise_20.cpp
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

void exercise_20(void)
{
    using std::vector;
    using std::cout;
    using std::cin;
    using std::endl;

    vector<int> v1;

    cout << "Please type integers." << endl;
    for (int a = 0; cin >> a;)
    {
        v1.push_back(a);
    }

    cout << "There are in total " << v1.size() << endl;

    // First part.
    cout << "The sum of each pair of adjacent elements is displayed." << endl;
    for (vector<int>::size_type a = 0; (a + 1) < v1.size(); a += 2)
    {
        cout << "The sum of pair n" << ((a > 0) ? a - 1 : a) << " is : ";
        cout << v1[a] + v1[a + 1] << ".";
        cout << endl;
    }
    cout << endl;

    // Second part.
    cout << "The first and last numbers sum, the second-first and second-last numbers sum, and so on..." << endl;
    for (vector<int>::size_type a = 0; a < (v1.size() / 2); a++)
    {
        cout << "The sum of pair n" << a << " is : ";
        cout << v1[a] + v1[v1.size() - 1 - a] << ".";
        cout << endl;
    }
    cout << endl;
}

}

/******************************************************************************************************END OF FILE*****/
