/**
 ***********************************************************************************************************************
 * @file        exercise_7.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
