/**
 ***********************************************************************************************************************
 * @file        exercise_7.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */
#include <iostream>
#include <vector>

#if defined(__GNUC__)
#pragma GCC diagnostic push // Store current settings.
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif

// NOLINTBEGIN(clang-analyzer-deadcode.DeadStores,misc-const-correctness)

namespace CppPrimer::Chapter5
{

void exercise_7(void)
{
    // First
    int a_ival1 = 0;
    int a_ival2 = 2;

    if (a_ival1 != a_ival2)
    {
        a_ival1 = a_ival2;
    }
    else
    {
        a_ival1 = a_ival2 = 0;
    }

    // Second
    int b_ival = 0;
    int b_minval = 0;
    int b_occurs = 0;

    if (b_ival < b_minval)
    {
        b_occurs = 1;
    }

    // Third
    int c_ival = 0;

    if (c_ival > 0)
    {
        std::cout << "ival = " << c_ival << std::endl;
    }
    else
    {
        std::cout << "ival = 0" << std::endl;
    }

    // Fourth
    int d_ival = 0;

    if (d_ival == 0)
    {
        d_ival = 5;
    }
}

}

// NOLINTEND(clang-analyzer-deadcode.DeadStores,misc-const-correctness)

#if defined(__GNUC__)
#pragma GCC diagnostic pop // Restore settings.
#endif

/******************************************************************************************************END OF FILE*****/
