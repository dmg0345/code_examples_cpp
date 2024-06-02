/**
 ***********************************************************************************************************************
 * @file        exercise_12.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

// NOLINTBEGIN(clang-analyzer-deadcode.DeadStores)

namespace CppPrimer::Chapter5
{

void exercise_12(void)
{
    std::string::iterator str_a;
    std::string::iterator str_e;
    std::string line;
    int vowelCount = 0;
    int spaceCount = 0;
    int tabCount = 0;
    int newLineCount = 0;
    bool previousf = false;
    int ffCount = 0;
    int flCount = 0;
    int fiCount = 0;

    do {
        std::cout << "Input your word: ";

        if (std::getline(std::cin, line))
        {
            str_a = line.begin();
            str_e = line.end();
            vowelCount = tabCount = spaceCount = newLineCount = 0;
            ffCount = flCount = fiCount = newLineCount = 0;
            previousf = false;
            while (str_a != str_e)
            {
                switch (*str_a++)
                {
                    case 'a':
                    case 'e':
                    case 'o':
                    case 'u':
                    case 'A':
                    case 'E':
                    case 'I':
                    case 'O':
                    case 'U': vowelCount++; break;

                    case 'i':
                        vowelCount++;
                        if (previousf)
                        {
                            fiCount++;
                        }
                        previousf = false;
                        break;

                    case 'l':
                        if (previousf)
                        {
                            flCount++;
                        }
                        previousf = false;
                        break;

                    case '\t':
                        tabCount++;
                        previousf = false;
                        break;

                    case ' ':
                        spaceCount++;
                        previousf = false;
                        break;

                    case '\n':
                        newLineCount++;
                        previousf = false;
                        break;

                    case 'f':
                        if (previousf)
                        {
                            ffCount++;
                        }
                        previousf = true;
                        break;

                    default: break;
                }
            }
            std::cout << "The number of vowels in " << line << " is " << vowelCount << "." << std::endl;
            std::cout << "The number of tabs in " << line << " is " << tabCount << "." << std::endl;
            std::cout << "The number of spaces in " << line << " is " << spaceCount << "." << std::endl;
            std::cout << "The number of new lines in " << line << " is " << newLineCount << "." << std::endl;
            std::cout << "The number of fi in " << line << " is " << fiCount << "." << std::endl;
            std::cout << "The number of ff in " << line << " is " << ffCount << "." << std::endl;
            std::cout << "The number of fl in " << line << " is " << flCount << "." << std::endl;
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

// NOLINTEND(clang-analyzer-deadcode.DeadStores)

/******************************************************************************************************END OF FILE*****/
