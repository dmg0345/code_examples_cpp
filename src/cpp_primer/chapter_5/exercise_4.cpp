/**
 ***********************************************************************************************************************
 * @file        exercise_4.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter5
{

void exercise_4(void)
{
    // The first statement is okay, the scope of the iter variable is just the body of the while loop.
    // The second statement is not okay, status was declared in the while loop and it's used afterwards in the
    // if statement, which is out of its scope.
}

}

/******************************************************************************************************END OF FILE*****/
