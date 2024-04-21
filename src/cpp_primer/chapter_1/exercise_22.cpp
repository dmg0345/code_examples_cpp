/**
 ***********************************************************************************************************************
 * @file        exercise_22.cpp
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

void exercise_22(void)
{
    Sales_item book1;
    Sales_item book2;

    while (std::cin >> book1)
    {
        if (book2.isbn().empty())
        {
            book2 = book1;
        }
        else if (book2.isbn() != book1.isbn())
        {
            std::cout << "Transaction details: " << book2 << std::endl;
            book2 = book1;
        }
        else
        {
            book2 += book1;
        }
    }
}

}

/******************************************************************************************************END OF FILE*****/
