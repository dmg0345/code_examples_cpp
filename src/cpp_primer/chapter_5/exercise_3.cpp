/**
 ***********************************************************************************************************************
 * @file        exercise_3.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter5
{

void exercise_3(void)
{
    int sum = 0;
    int val = 0;
    while (val <= 10)
    {
        sum += val;
        ++val;
    }
    std::cout << "Final sum value (original): " << sum << std::endl;
    // This makes the code worse..., it's better to use a compound statement.
    sum = val = 0;
    while (val <= 10)
    {
        sum += val, val++;
    }
    std::cout << "Final sum value (rewritten): " << sum << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
