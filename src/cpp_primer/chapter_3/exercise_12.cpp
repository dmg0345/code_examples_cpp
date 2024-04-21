/**
 ***********************************************************************************************************************
 * @file        exercise_12.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
