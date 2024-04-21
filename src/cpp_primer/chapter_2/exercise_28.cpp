/**
 ***********************************************************************************************************************
 * @file        exercise_28.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter2
{

void exercise_28(void)
{
    // - i is an integer, cp is a constant pointer to integer, which is not initialized, so not valid.
    // - p1 is a pointer to int, and p2 is a constant pointer to int, which is not initialized, so not valid.
    // - ic is a constant integer, which is not initialized, so invalid. r is a constant reference to an integer,
    //   which is fine but ic declaration is not valid.
    // - p3 is a constant pointer to integer constant, but not initialized, so not valid.
    // - p is a pointer to integer constant.
}

}

/******************************************************************************************************END OF FILE*****/
