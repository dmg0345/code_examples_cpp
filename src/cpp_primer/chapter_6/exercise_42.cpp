/**
 ***********************************************************************************************************************
 * @file        exercise_42.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <string>
#include <iostream>

using namespace std;

namespace
{

string make_plural(size_t ctr, const string & word, const string & ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

}

namespace CppPrimer::Chapter6
{

void exercise_42(void)
{
    cout << "This will print a singular word: " << make_plural(1, "count") << "." << endl;
    cout << "This will print a plural word: " << make_plural(2, "count") << "." << endl;
}

}

/******************************************************************************************************END OF FILE*****/
