/**
 ***********************************************************************************************************************
 * @file        exercise_10.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_10(void)
{
    using std::string;
    using std::cin;
    using std::cout;
    using std::endl;

    string s0;

    cout << "Write a string with punctuation, a new string with the punctuation removed will be printed." << endl;
    getline(cin, s0);
    for (auto & i : s0)
    {
        if (ispunct(i) == 0)
        {
            cout << i;
        }
    }
    cout << endl;
}

}

/******************************************************************************************************END OF FILE*****/
