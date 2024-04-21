/**
 ***********************************************************************************************************************
 * @file        exercise_20.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter2
{

void exercise_20(void)
{
    int i = 42;
    int * p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << *p1 << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
