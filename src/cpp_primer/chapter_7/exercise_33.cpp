/**
 ***********************************************************************************************************************
 * @file        exercise_33.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
