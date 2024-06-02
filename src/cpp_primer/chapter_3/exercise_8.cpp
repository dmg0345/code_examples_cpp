/**
 ***********************************************************************************************************************
 * @file        exercise_8.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_8(void)
{
    using std::string;
    using std::cout;
    using std::endl;
    using std::cin;
    using std::getline;

    string s0;
    string s1;
    decltype(s0.size()) i = 0;

    cout << "Type a string, all its characters will be replaced by \'X\'." << endl;
    getline(cin, s0);
    s1 = s0;

    while (i < s0.size())
    {
        s0[i++] = 'X';
    }

    cout << "This is your string now (while loop): " << s0 << endl;
    s0 = s1;

    for (i = 0; i < s0.size(); i++)
    {
        s0[i] = 'X';
    }

    cout << "This is your string now (for loop): " << s0 << endl;
}

}

/******************************************************************************************************END OF FILE*****/
