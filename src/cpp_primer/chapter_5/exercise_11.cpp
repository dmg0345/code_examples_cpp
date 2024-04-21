/**
 ***********************************************************************************************************************
 * @file        exercise_11.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter5
{

void exercise_11(void)
{
    std::string::iterator str_a;
    std::string::iterator str_e;
    std::string line;
    int vowelCount = 0;
    int spaceCount = 0;
    int tabCount = 0;
    int newLineCount = 0;

    do {
        std::cout << "Input your word: ";

        if (std::getline(std::cin, line))
        {
            str_a = line.begin();
            str_e = line.end();
            vowelCount = tabCount = spaceCount = newLineCount = 0;
            while (str_a != str_e)
            {
                switch (*str_a++)
                {
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                    case 'A':
                    case 'E':
                    case 'I':
                    case 'O':
                    case 'U': vowelCount++; break;

                    case '\t': tabCount++; break;

                    case ' ': spaceCount++; break;

                    case '\n': newLineCount++; break;

                    default: break;
                }
            }
            std::cout << "The number of vowels in " << line << " is " << vowelCount << "." << std::endl;
            std::cout << "The number of tabs in " << line << " is " << tabCount << "." << std::endl;
            std::cout << "The number of spaces in " << line << " is " << spaceCount << "." << std::endl;
            std::cout << "The number of new lines in " << line << " is " << newLineCount << "." << std::endl;
        }
        else
        {
            std::cout << "Quitting..." << std::endl;
            break;
        }
    }
    while (true);
}

}

/******************************************************************************************************END OF FILE*****/
