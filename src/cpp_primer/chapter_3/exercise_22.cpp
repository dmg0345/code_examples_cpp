/**
 ***********************************************************************************************************************
 * @file        exercise_22.cpp
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
