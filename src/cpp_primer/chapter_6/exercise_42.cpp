/**
 ***********************************************************************************************************************
 * @file        exercise_42.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
