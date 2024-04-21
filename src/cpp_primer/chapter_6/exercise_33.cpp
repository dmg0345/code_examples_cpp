/**
 ***********************************************************************************************************************
 * @file        exercise_33.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

using namespace std;

// NOLINTBEGIN(misc-no-recursion,misc-const-correctness)

namespace
{

void print_vector(vector<string>::const_iterator vcbegin, vector<string>::const_iterator vcend)
{
    if (vcbegin != vcend)
    {
        cout << *vcbegin << endl;

        if (++vcbegin != vcend)
        {
            print_vector(vcbegin, vcend);
        }
    }
}

}

namespace CppPrimer::Chapter6
{

void exercise_33(void)
{
    vector<string> example = {"Hello", "My", "Name", "Is", "Diego"};

    print_vector(example.cbegin(), example.cend());
}

}

// NOLINTEND(misc-no-recursion,misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
