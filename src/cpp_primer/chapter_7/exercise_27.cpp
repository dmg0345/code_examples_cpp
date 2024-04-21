/**
 ***********************************************************************************************************************
 * @file        exercise_27.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include "cpp_primer/third_party/Screen.hpp"

namespace CppPrimer::Chapter7
{

void exercise_27(void)
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";
}

}

/******************************************************************************************************END OF FILE*****/
