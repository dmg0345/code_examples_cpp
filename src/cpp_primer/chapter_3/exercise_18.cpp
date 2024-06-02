/**
 ***********************************************************************************************************************
 * @file        exercise_18.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <vector>

namespace CppPrimer::Chapter3
{

void exercise_18(void)
{
    // ivec is empty, and the behaviour of subscripting it will be undefined, however it is compile-able.
    using std::vector;

    vector<int> ivec;
    ivec[0] = 42;
}

}

/******************************************************************************************************END OF FILE*****/
