/**
 ***********************************************************************************************************************
 * @file        exercise_31.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter2
{

void exercise_31(void)
{
    // - r1 = v2 -> valid, the value of v2 will be assigned to r1.
    // - p1 = p2 -> invalid, because p1 has no low level or top level const, p2 has low level const.
    // - p2 = p1 -> valid, because p2, p2 has low level const and p1 doesnt, this only limits the kind of
    //   operations we will be able to do with the pointer.
    // - p1 = p3 -> invalid, because p1 has no const and p3 has low level const.
    // - p2 = p3 -> valid, because p2 has low level const and p3 has low level and top level const.
}

}

/******************************************************************************************************END OF FILE*****/
