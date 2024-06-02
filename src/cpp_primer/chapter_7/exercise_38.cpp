/**
 ***********************************************************************************************************************
 * @file        exercise_38.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>
#include <string>

#if defined(__GNUC__)
#pragma GCC diagnostic push // Store current settings.
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

#if defined(__clang__)
#pragma clang diagnostic push // Store current settings.
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

// NOLINTBEGIN(cppcoreguidelines-pro-type-member-init,misc-unused-parameters,performance-unnecessary-value-param)

namespace
{

class Sales_data
{
public:
    Sales_data(void) = default;

    Sales_data(std::string s = "") : bookNo(s) { }

    Sales_data(std::string s, unsigned cnt, double rev) : bookNo(s), units_sold(cnt), revenue(rev * cnt) { }

    Sales_data(std::istream & is = std::cin) { }

private:
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

}

namespace CppPrimer::Chapter7
{

void exercise_38(void)
{
    // See above.
}

}

// NOLINTEND(cppcoreguidelines-pro-type-member-init,misc-unused-parameters,performance-unnecessary-value-param)

#if defined(__clang__)
#pragma clang diagnostic pop // Restore settings.
#endif

#if defined(__GNUC__)
#pragma GCC diagnostic pop // Restore settings.
#endif

/******************************************************************************************************END OF FILE*****/
