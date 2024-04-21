/**
 ***********************************************************************************************************************
 * @file        exercise_40.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <cstring>
#include <iostream>

// NOLINTBEGIN(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-array-to-pointer-decay,
// clang-analyzer-security.insecureAPI.strcpy)

namespace CppPrimer::Chapter3
{

void exercise_40(void)
{
    using std::cout;
    using std::endl;

    const char * array_0 = "01234";
    const char * array_1 = "56789";
    char array_2[11];

    strcpy(array_2, array_0);
    strcat(array_2, array_1);

    cout << array_2 << endl;
}

}

// NOLINTEND(cppcoreguidelines-avoid-c-arrays,cppcoreguidelines-pro-bounds-array-to-pointer-decay,
// clang-analyzer-security.insecureAPI.strcpy)

/******************************************************************************************************END OF FILE*****/
