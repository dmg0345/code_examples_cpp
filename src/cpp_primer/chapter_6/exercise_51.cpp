/**
 ***********************************************************************************************************************
 * @file        exercise_51.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
