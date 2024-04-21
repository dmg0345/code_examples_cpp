/**
 ***********************************************************************************************************************
 * @file        exercise_8.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter5
{

void exercise_8(void)
{
    // A dangling else is for example the one below:
    //
    // if (a)
    //     if (b)
    // else
    //
    // A dangling else occurs when there are more if than else clauses.
    // The way this is resolved in C++ is by matching every else with the closest preceding unmatched if clause.
}

}

/******************************************************************************************************END OF FILE*****/
