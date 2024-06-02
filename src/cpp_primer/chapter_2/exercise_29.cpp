/**
 ***********************************************************************************************************************
 * @file        exercise_29.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter2
{

void exercise_29(void)
{
    // - Valid, because i is an integer and ic is a constant integer.
    // - p1 is pointer to integer and p3 is a constant pointer to integer constant, so it's not valid because
    //   of the low level const.
    // - p1 is pointer to integer and ic is constant integer, so it is not valid.
    // - p3 is constant pointer to integer constant and ic is a constant integer, so it is valid.
    // - p2 is a constant pointer to integer, and it's value can't be modified.
    // - ic is a constant integer so its value can't be modified.
}

}

/******************************************************************************************************END OF FILE*****/
