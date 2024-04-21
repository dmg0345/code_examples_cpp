/**
 ***********************************************************************************************************************
 * @file        exercise_47.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <string>
#include <vector>
#include <iostream>

using namespace std;

// NOLINTBEGIN(misc-no-recursion,cppcoreguidelines-pro-bounds-array-to-pointer-decay,misc-const-correctness)

namespace
{

void print_vector(vector<string>::const_iterator vcbegin, vector<string>::const_iterator vcend)
{
    if (vcbegin != vcend)
    {
        cerr << "Function: " << __FUNCTION__ << ", Elements to print remaining: " << vcend - vcbegin << endl;
        cout << *vcbegin << endl;
        print_vector(++vcbegin, vcend);
    }
    else
    {
        cerr << "Function: " << __FUNCTION__ << ", Elements to print remaining: " << vcend - vcbegin << endl;
    }
}

}

namespace CppPrimer::Chapter6
{

void exercise_47(void)
{
    vector<string> example = {"Hello", "My", "Name", "Is", "Diego"};

    print_vector(example.cbegin(), example.cend());
}

}

// NOLINTEND(misc-no-recursion,cppcoreguidelines-pro-bounds-array-to-pointer-decay,misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
