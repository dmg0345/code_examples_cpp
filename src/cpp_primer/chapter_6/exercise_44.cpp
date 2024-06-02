/**
 ***********************************************************************************************************************
 * @file        exercise_44.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>
#include <string>

using namespace std;

// NOLINTBEGIN(misc-const-correctness)

namespace
{

inline bool isShorter(const string & s1, const string & s2)
{
    return s1.size() < s2.size();
}

}

namespace CppPrimer::Chapter6
{

void exercise_44(void)
{
    string s1 = "Hi!";
    string s2 = "Hello!";

    if (isShorter(s1, s2))
    {
        cout << s1 << " is shorter than " << s2 << "." << endl;
    }
    else
    {
        cout << s2 << " is shorter than " << s1 << "." << endl;
    }
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
