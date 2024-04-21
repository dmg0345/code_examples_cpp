/**
 ***********************************************************************************************************************
 * @file        exercise_18.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter2
{

void exercise_18(void)
{
    int * p = nullptr;
    int i = 0;
    p = &i;
    *p = 5;
}

}

/******************************************************************************************************END OF FILE*****/
