/**
 ***********************************************************************************************************************
 * @file        exercise_32.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
