/**
 ***********************************************************************************************************************
 * @file        exercise_17.cpp
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

void exercise_17(void)
{
    using std::string;
    using std::vector;
    using std::cin;
    using std::cout;
    using std::endl;

    vector<string> v1;
    unsigned char i = 0;

    cout << "Please type as many words as you wish, they will be converted to uppercase and printed back." << endl;
    for (string a; cin >> a;)
    {
        v1.push_back(a);
    }

    for (auto & a : v1)
    {
        for (auto & c : a)
        {
            if (isupper(c) == 0)
            {
                c = static_cast<char>(toupper(c));
            }
        }

        cout << a << ' ';
        if (++i == 8)
        {
            cout << endl;
            i = 0;
        }
    }
}

}

/******************************************************************************************************END OF FILE*****/
