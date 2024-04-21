/**
 ***********************************************************************************************************************
 * @file        exercise_6.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter1
{

void exercise_6(void)
{
    // The program is not legal because of the semicolons, the proper program is shown below.
    const unsigned int v1 = 10;
    const unsigned int v2 = 20;

    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
