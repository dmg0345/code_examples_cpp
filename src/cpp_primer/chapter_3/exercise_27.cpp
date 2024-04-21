/**
 ***********************************************************************************************************************
 * @file        exercise_27.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter3
{

void exercise_27(void)
{
    // unsigned int buf_size = 1024;

    // Invalid, because buf_size is not a constant expression, however it seems to pass for some reason,
    // probably compiler extension or something.
    // int ia[buf_size];

    // Valid, because it is a constant expression.
    // int ia_1[4 * 7 - 14];

    // Invalid, because the function doesn't return a constant expression, it seems to pass though
    // but it shouldn't, maybe compiler extension or something.
    // int ia_2[txt_size()];

    // Invalid, not enough space for the NULL terminator, should be 12 instead of 11.
    // char st[11] = "fundamental";
}

}

/******************************************************************************************************END OF FILE*****/
