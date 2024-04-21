/**
 ***********************************************************************************************************************
 * @file        exercise_21.cpp
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

void exercise_21(void)
{
    Sales_item book1;
    Sales_item book2;

    std::cout << "Enter two books that have the same ISBN: ";
    std::cin >> book1 >> book2;
    if (book1.isbn() == book2.isbn())
    {
        std::cout << "\nThe books sum is " << book1 + book2;
    }
    else
    {
        std::cout << "\nThe books don't have the same ISBN";
    }
    std::cout << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
