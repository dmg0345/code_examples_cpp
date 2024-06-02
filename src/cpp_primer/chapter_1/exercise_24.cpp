/**
 ***********************************************************************************************************************
 * @file        exercise_24.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>
#include <cpp_primer/third_party/Sales_Item.hpp>

namespace CppPrimer::Chapter1
{

void exercise_24(void)
{
    int nTransactions = 0;
    Sales_item book1;
    Sales_item book2;

    while (std::cin >> book1)
    {
        if ((book2.isbn() != book1.isbn()) && (!book2.isbn().empty()))
        {
            std::cout << nTransactions << " transactions for ISBN: " << book1.isbn() << std::endl;
            nTransactions = 0;
        }
        book2 = book1;
        nTransactions++;
    }
}

}

/******************************************************************************************************END OF FILE*****/
