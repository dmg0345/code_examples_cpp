/**
 ***********************************************************************************************************************
 * @file        exercise_5.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace
{

int abs_val(int x)
{
    return (x < 0) ? (-x) : (x);
}

}

namespace CppPrimer::Chapter6
{

void exercise_5(void)
{
    using std::cout;
    using std::endl;

    for (const auto & val : {-4, -2, 0, 2, 4})
    {
        cout << "Absolute value of number of " << val << " is " << abs_val(val) << "." << endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
