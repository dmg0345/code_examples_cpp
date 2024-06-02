/**
 ***********************************************************************************************************************
 * @file        exercise_33.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
