/**
 ***********************************************************************************************************************
 * @file        exercise_4.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter1
{

void exercise_4(void)
{
    unsigned int v1 = 0;
    unsigned int v2 = 0;

    std::cout << "Please input the first operand: " << std::endl;
    std::cin >> v1;
    std::cout << "Please input the second operand: " << std::endl;
    std::cin >> v2;
    std::cout << "The result is: " << v1 * v2 << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
