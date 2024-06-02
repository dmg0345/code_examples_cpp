/**
 ***********************************************************************************************************************
 * @file        exercise_47.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
