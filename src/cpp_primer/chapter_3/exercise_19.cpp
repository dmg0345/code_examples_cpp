/**
 ***********************************************************************************************************************
 * @file        exercise_19.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <vector>

// NOLINTBEGIN(misc-const-correctness)

namespace CppPrimer::Chapter3
{

void exercise_19(void)
{
    // This three ways are possible.
    using std::vector;

    vector<int> v1(10, 42); // This is the preferred one, which is obvious why.
    vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v3 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
