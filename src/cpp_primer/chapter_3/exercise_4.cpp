/**
 ***********************************************************************************************************************
 * @file        exercise_4.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_4(void)
{
    using std::string;
    using std::cout;
    using std::endl;
    using std::cin;
    using std::getline;

    string s0;
    string s1;

    cout << "Please type the first string." << endl;
    getline(cin, s0);
    cout << "Please type the second string." << endl;
    getline(cin, s1);

    if (s0 == s1)
    {
        cout << "Both strings are equal.";
    }
    else if (s0 < s1)
    {
        cout << "The second string is larger than the first one.";
    }
    else
    {
        cout << "The first string is larger that the second one.";
    }
    cout << endl;

    if (s0.size() == s1.size())
    {
        cout << "Both strings have the same length.";
    }
    else if (s0.size() < s1.size())
    {
        cout << "The second string is longer than the first one.";
    }
    else
    {
        cout << "The first string is longer than the second one.";
    }
    cout << endl;
}

}

/******************************************************************************************************END OF FILE*****/
