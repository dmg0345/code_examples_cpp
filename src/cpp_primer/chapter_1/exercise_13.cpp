/**
 ***********************************************************************************************************************
 * @file        exercise_13.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter1
{

void exercise_13(void)
{
    // Exercise 9:
    unsigned int sum = 0;
    unsigned int i = 0;
    for (i = 50, sum = 0; i <= 100; sum += i++)
    {
        ;
    }
    std::cout << "Total sum: " << sum << std::endl;

    // Exercise 10:
    std::cin >> i >> sum;
    for (; ++i < sum; std::cout << i << " ")
    {
        ;
    }
    std::cout << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
