/**
 ***********************************************************************************************************************
 * @file        exercise_14.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter5
{

void exercise_14(void)
{
    std::string word;
    std::string repeatedWord;
    std::string mostRepeatedWord;
    int repetitions = 0;
    int mostRepetitions = 0;

    while (std::cin >> word)
    {
        std::cout << "User input the following word: " << word << "." << std::endl;
        // Check if the input word is the same as the repeated one.
        if (word == repeatedWord)
        {
            // Words are the same.
            repetitions++;
            std::cout << "Word: " << word << " repeated " << repetitions << " times." << std::endl;

            if (repetitions > mostRepetitions)
            {
                mostRepeatedWord = word;
                mostRepetitions = repetitions;
                std::cout << "Most repeated word: " << word << " repeated " << mostRepetitions << " times."
                          << std::endl;
            }
        }
        else
        {
            // Words are not the same, so reset repetitions and store the word.
            repeatedWord = word;
            repetitions = 0;
        }
    }

    // Check if there were repetitions.
    if (repetitions > 0)
    {
        // The following word was repeated.
        std::cout << "RESULT: " << mostRepeatedWord << " occurred " << mostRepetitions + 1 << " times." << std::endl;
    }
    else
    {
        // There were no repetitions.
        std::cout << "RESULT: No word was repeated." << std::endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
