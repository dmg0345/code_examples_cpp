/**
 ***********************************************************************************************************************
 * @file        exercise_5.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_5(void)
{
    using std::string;
    using std::cout;
    using std::endl;
    using std::cin;
    using std::getline;

    string s0;
    string s1;

    cout << "Type strings, they will be concatenated (separated by spaces) and then printed back to you." << endl;
    while (getline(cin, s0))
    {
        if (!s1.empty())
        {
            s1 += " ";
        }
        s1 += s0;
    }
    cout << endl << "The concatenated string is the following: " << endl;
    cout << s1 << endl;
}

}

/******************************************************************************************************END OF FILE*****/
