/**
 ***********************************************************************************************************************
 * @file        exercise_16.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
