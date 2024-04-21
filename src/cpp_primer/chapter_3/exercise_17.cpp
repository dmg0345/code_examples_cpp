/**
 ***********************************************************************************************************************
 * @file        exercise_17.cpp
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
