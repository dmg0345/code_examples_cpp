/**
 ***********************************************************************************************************************
 * @file        exercise_27.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter2
{

void exercise_27(void)
{
    // - i = -1 is valid, but &r is not valid because it is a reference to a literal.
    // - Is valid because is a constant pointer to int, initialized to the address of i2.
    // - const int i = -1 is valid, but &r is not valid because it is a reference to a literal.
    // - p3 is a constant pointer to constant integer, and it is initialized to the address of i2, so it's valid,
    //   i2 doesn't need to be const.
    // - p1 is a pointer to integer constant, initialized to the address of i2, which is correct,
    //   i2 doesn't need to be const.
    // - Invalid reference, can't have top level const because it is already top-level const implicitly, also,
    //   the reference is not initialized.
    // - Both are valid, i2 is initialized to a value and reference r is initialized to a i.
    //   i doesn't have to be const.
}

}

/******************************************************************************************************END OF FILE*****/
