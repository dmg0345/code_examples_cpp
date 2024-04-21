/**
 ***********************************************************************************************************************
 * @file        exercise_34.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter2
{

void exercise_34(void)
{
    int i = 0;
    const int & r = i;
    const int ci = i;
    const int & cr = ci;
    auto a = r;
    auto b = ci;
    auto c = cr;
    auto * d = &i;
    const auto * e = &ci;
    const auto & g = ci;

    std::cout << "Previous values: " << std::endl;
    std::cout << "A: " << a << std::endl;
    std::cout << "B: " << b << std::endl;
    std::cout << "C: " << c << std::endl;
    std::cout << "D: " << d << std::endl;
    std::cout << "E: " << e << std::endl;
    std::cout << "G: " << g << std::endl;

    a = 42;
    b = 42;
    c = 42;
    //d = 42;
    //e = 42;
    //g = 42;

    std::cout << "Values after: " << std::endl;
    std::cout << "A: " << a << std::endl;
    std::cout << "B: " << b << std::endl;
    std::cout << "C: " << c << std::endl;
    std::cout << "D: " << d << std::endl;
    std::cout << "E: " << e << std::endl;
    std::cout << "G: " << g << std::endl;
}

}

/******************************************************************************************************END OF FILE*****/
