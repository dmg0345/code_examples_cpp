/**
 ***********************************************************************************************************************
 * @file        exercise_7.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace
{

void counter(void)
{
    using std::cout;
    using std::endl;

    static int a = 0;
    cout << "This is the time " << a << " this function has been called." << endl;
    a++;
}

}

namespace CppPrimer::Chapter6
{

void exercise_7(void)
{
    counter();
    counter();
    counter();
    counter();
}

}

/******************************************************************************************************END OF FILE*****/
