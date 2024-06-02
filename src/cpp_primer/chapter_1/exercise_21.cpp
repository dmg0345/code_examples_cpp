/**
 ***********************************************************************************************************************
 * @file        exercise_21.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
