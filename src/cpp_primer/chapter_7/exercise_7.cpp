/**
 ***********************************************************************************************************************
 * @file        exercise_7.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>
#include "cpp_primer/third_party/Sales_data.hpp"

namespace CppPrimer::Chapter7
{

void exercise_7(void)
{
    Sales_data total = Sales_data();
    Sales_data tmp = Sales_data();

    std::cout << "Enter transactions in the following format: ISBN, units sold and price." << std::endl;

    if (read(std::cin, total))
    {
        while (read(std::cin, tmp))
        {
            if (total.isbn() == tmp.isbn())
            {
                total = add(total, tmp);
            }
            else
            {
                print(std::cout, total);
                total = Sales_data(tmp);
                std::cout << "************************" << std::endl;
            }
        }
        print(std::cout, total);
    }
    else
    {
        std::cout << "No data?!" << std::endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
