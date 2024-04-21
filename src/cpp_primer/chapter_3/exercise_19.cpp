/**
 ***********************************************************************************************************************
 * @file        exercise_19.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
