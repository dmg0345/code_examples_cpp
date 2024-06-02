/**
 ***********************************************************************************************************************
 * @file        exercise_16.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter6
{

void exercise_16(void)
{
    // The limitation is that the function expects a reference to string, but it should be a reference to const
    // string, as otherwise for example we can't pass literals and the function could be modified inside the function.
    // bool is_empty(const string &s) { return s.empty(); }
}

}

/******************************************************************************************************END OF FILE*****/
