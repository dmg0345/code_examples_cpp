/**
 ***********************************************************************************************************************
 * @file        exercise_20.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include "cpp_primer/third_party/Sales_Item.hpp"

namespace CppPrimer::Chapter1
{

void exercise_20(void)
{
    Sales_item book;

    std::cout << "Enter sale items in the following format: <ISBN> <Units> <Value>\r\n" << std::endl;
    while (std::cin >> book)
    {
        std::cout << book << std::endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
