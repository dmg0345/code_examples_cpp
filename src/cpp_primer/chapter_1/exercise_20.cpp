/**
 ***********************************************************************************************************************
 * @file        exercise_20.cpp
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
