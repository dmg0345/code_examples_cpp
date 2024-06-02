/**
 ***********************************************************************************************************************
 * @file        exercise_10.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter5
{

void exercise_10(void)
{
    std::string::iterator str_a;
    std::string::iterator str_e;
    std::string word;
    int vowelCount = 0;

    do {
        std::cout << "Input your word: ";
        if (std::cin >> word)
        {
            str_a = word.begin();
            str_e = word.end();
            vowelCount = 0;
            while (str_a < str_e)
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

                    default: break;
                }
            }
            std::cout << "The number of vowels in " << word << " is " << vowelCount << "." << std::endl;
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
