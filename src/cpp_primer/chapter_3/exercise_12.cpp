/**
 ***********************************************************************************************************************
 * @file        exercise_12.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

// NOLINTBEGIN(misc-const-correctness)

namespace CppPrimer::Chapter3
{

void exercise_12(void)
{
    using std::vector;
    using std::string;

    // Legal, vector of vector of integers.
    vector<vector<int>> ivec;
    // Not legal, vector of strings initialized from vector of integers.
    //vector<string> svec = ivec;
    // Legal, vector of ten "null" elements.
    vector<string> svec(10, "null");
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
