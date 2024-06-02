/**
 ***********************************************************************************************************************
 * @file        exercise_4.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
