/**
 ***********************************************************************************************************************
 * @file        exercise_25.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>
#include <string>

using namespace std;

// NOLINTBEGIN(cppcoreguidelines-pro-bounds-pointer-arithmetic,cppcoreguidelines-avoid-c-arrays,
// cppcoreguidelines-pro-bounds-array-to-pointer-decay)

namespace
{

void main(int cnt, const char * argv[])
{
    string res = "error...";

    if (cnt == 2)
    {
        res = argv[0];
        res += argv[1];
    }

    cout << res << endl;
}

}

namespace CppPrimer::Chapter6
{

void exercise_25(void)
{
    const char * args[2] = {"Hi my name is", " John Wayne."};

    main(2, args);
}

}

// NOLINTEND(cppcoreguidelines-pro-bounds-pointer-arithmetic,cppcoreguidelines-avoid-c-arrays,
// cppcoreguidelines-pro-bounds-array-to-pointer-decay)

/******************************************************************************************************END OF FILE*****/
