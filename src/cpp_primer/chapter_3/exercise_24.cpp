/**
 ***********************************************************************************************************************
 * @file        exercise_24.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

// NOLINTBEGIN(bugprone-narrowing-conversions,cppcoreguidelines-narrowing-conversions)

namespace CppPrimer::Chapter3
{

void exercise_24(void)
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
    for (auto b = v1.cbegin(), e = v1.cend(), bc = v1.cbegin(); (b + 1) < e; b += 2)
    {
        cout << "The sum of pair n" << (((b - bc) > 0) ? ((b - bc) / 2) : 0) << " is : ";
        cout << *b + *(b + 1) << ".";
        cout << endl;
    }
    cout << endl;

    // Second part.
    cout << "The first and last numbers sum, the second-first and second-last numbers sum, and so on..." << endl;
    for (auto b = v1.cbegin(), e = v1.cend(), bc = v1.cbegin(); b != (bc + (v1.size() / 2)); b++, e--)
    {
        cout << "The sum of pair n" << (b - bc) << " is : ";
        cout << *b + *(e - 1) << ".";
        cout << endl;
    }
    cout << endl;
}

}

// NOLINTEND(bugprone-narrowing-conversions,cppcoreguidelines-narrowing-conversions)

/******************************************************************************************************END OF FILE*****/
