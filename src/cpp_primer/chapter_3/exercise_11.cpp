/**
 ***********************************************************************************************************************
 * @file        exercise_11.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_11(void)
{
    // It is valid, and the type of &c is reference to const char. (const char &).
    using std::string;
    using std::endl;
    using std::cout;

    const string s = "Keep out!";

    for (const auto & c : s)
    {
        cout << c;
    }
    cout << endl;
}

}

/******************************************************************************************************END OF FILE*****/
