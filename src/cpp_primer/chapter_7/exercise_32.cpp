/**
 ***********************************************************************************************************************
 * @file        exercise_32.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include "cpp_primer/third_party/Window_mgr.hpp"

namespace CppPrimer::Chapter7
{

void exercise_32(void)
{
    // I find easier to make the whole class a friend and then use what is necessary, because I need the full
    // definition of screen in window manager class. Making a member function a friend requires too many
    // interdependencies for my liking.
    Window_mgr manager(2);

    manager.display(std::cout);
    manager.clear();
    manager.display(std::cout);
}

}

/******************************************************************************************************END OF FILE*****/
