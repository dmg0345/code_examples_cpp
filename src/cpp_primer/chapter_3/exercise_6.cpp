/**
 ***********************************************************************************************************************
 * @file        exercise_6.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_6(void)
{
    using std::string;
    using std::cout;
    using std::endl;
    using std::cin;
    using std::getline;

    string s0;

    cout << "Type a string, all its characters will be replaced by \'X\'." << endl;
    getline(cin, s0);

    for (auto & chr : s0)
    {
        chr = 'X';
    }
    cout << "This is your string now: " << s0 << endl;
}

}

/******************************************************************************************************END OF FILE*****/
