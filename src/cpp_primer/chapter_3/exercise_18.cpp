/**
 ***********************************************************************************************************************
 * @file        exercise_18.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
