/**
 ***********************************************************************************************************************
 * @file        exercise_22.cpp
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

void exercise_22(void)
{
    using std::cout;
    using std::string;
    using std::endl;
    using std::vector;

    vector<string> txt = {"\n",
                          "This is the first paragraph.",
                          "\n",
                          "This is the second paragraph",
                          "\n",
                          "This is the third paragraph"};

    for (auto it = txt.begin(); it != txt.end() && !it->empty(); ++it)
    {
        if (*it != "\n")
        {
            for (auto & c : *it)
            {
                c = static_cast<char>(toupper(c));
            }
            break;
        }
    }

    for (auto & a : txt)
    {
        cout << a << endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
