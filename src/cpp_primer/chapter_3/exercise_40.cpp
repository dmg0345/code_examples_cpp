/**
 ***********************************************************************************************************************
 * @file        exercise_40.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
