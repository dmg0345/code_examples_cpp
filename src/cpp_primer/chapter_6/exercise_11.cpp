/**
 ***********************************************************************************************************************
 * @file        exercise_11.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace
{

void reset_value(bool & resetVal)
{
    resetVal = false;
}

}

namespace CppPrimer::Chapter6
{

void exercise_11(void)
{
    // It is valid, and the type of &c is reference to const char. (const char &).
    using std::string;
    using std::endl;
    using std::cout;

    bool resetVal = true;

    cout << "Value before reset: resetVal is " << resetVal << "." << endl;
    reset_value(resetVal);
    cout << "Value before reset: resetVal is " << resetVal << "." << endl;
}

}

/******************************************************************************************************END OF FILE*****/
