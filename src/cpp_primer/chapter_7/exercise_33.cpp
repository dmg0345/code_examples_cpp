/**
 ***********************************************************************************************************************
 * @file        exercise_33.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

#if defined(__GNUC__)
#pragma GCC diagnostic push // Store current settings.
#pragma GCC diagnostic ignored "-Wunused-function"
#endif

namespace
{

class Screen
{
public:
    typedef std::string::size_type pos;

    pos size() const;

private:
    pos height = 0, width = 0;
};

// This is the proper definition.
Screen::pos Screen::size() const
{
    return height * width;
}

}

namespace CppPrimer::Chapter7
{

void exercise_33(void)
{
    // See above.
}

}

#if defined(__GNUC__)
#pragma GCC diagnostic pop // Restore settings.
#endif

/******************************************************************************************************END OF FILE*****/
