/**
 ***********************************************************************************************************************
 * @file        exercise_8.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
