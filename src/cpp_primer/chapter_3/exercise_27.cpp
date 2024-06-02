/**
 ***********************************************************************************************************************
 * @file        exercise_27.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
