/**
 ***********************************************************************************************************************
 * @file        exercise_13.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter5
{

void exercise_13(void)
{
    // - Missing the break statement after each case label.
    // - Mix variable is defined in a case label and used in another case label, it should be defined outside the
    //   switch, also missing break statement in default (for consistency).
    // - Can't use commas in case labels like that, there must be different case labels one on top of the other to
    //   achieve the same purpose.
    // - The operators in case labels have to be constant expressions.
}

}

/******************************************************************************************************END OF FILE*****/
