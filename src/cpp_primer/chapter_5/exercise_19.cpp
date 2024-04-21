/**
 ***********************************************************************************************************************
 * @file        exercise_19.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter5
{

void exercise_19(void)
{
    std::string str1;
    std::string str2;

    do {
        std::cout << "Please input the first string: ";
        if (std::cin >> str1)
        {
            std::cout << std::endl << "Please input the second string: ";
            if (std::cin >> str2)
            {
                if (str1 < str2)
                {
                    std::cout << std::endl << "The first string is less than the second string." << std::endl;
                }
                else if (str2 < str1)
                {
                    std::cout << std::endl << "The second string is less than the first string." << std::endl;
                }
                else
                {
                    std::cout << std::endl << "The second string is equal to the first string." << std::endl;
                }
            }
        }
    }
    while (std::cin);
}

}

/******************************************************************************************************END OF FILE*****/
