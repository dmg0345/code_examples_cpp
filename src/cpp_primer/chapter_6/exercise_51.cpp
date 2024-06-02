/**
 ***********************************************************************************************************************
 * @file        exercise_51.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

using namespace std;

#if defined(__GNUC__)
#pragma GCC diagnostic push // Store current settings.
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

// NOLINTBEGIN(misc-unused-parameters)

namespace
{

void function(void)
{
    cout << "First function called." << endl;
}

void function(int a)
{
    cout << "Second function called." << endl;
}

void function(int a, int b)
{
    cout << "Third function called." << endl;
}

void function(double a, double b = 3.14)
{
    cout << "Fourth function called." << endl;
}

}

namespace CppPrimer::Chapter6
{

void exercise_51(void)
{
    // function(2.56, 42);
    function();
    function(42);
    function(42, 0);
    function(2.56, 3.14);
}

}

// NOLINTEND(misc-unused-parameters)

#if defined(__GNUC__)
#pragma GCC diagnostic pop // Restore settings.
#endif

/******************************************************************************************************END OF FILE*****/
