/**
 ***********************************************************************************************************************
 * @file        exercise_21.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

// NOLINTBEGIN(bugprone-branch-clone)

namespace CppPrimer::Chapter5
{

void exercise_21(void)
{
    std::string lastWord;
    std::string repeatedWord;
    bool wordRepeated = false;

    while (std::cin >> lastWord)
    {
        if (repeatedWord.empty())
        {
            repeatedWord = lastWord;
        }
        else if ((repeatedWord == lastWord) && (isupper(repeatedWord[0]) != 0) && (isupper(lastWord[0]) != 0))
        {
            wordRepeated = true;
            break;
        }
        else
        {
            repeatedWord = lastWord;
        }
    }

    if (wordRepeated)
    {
        std::cout << "The word " << lastWord << " was repeated twice." << std::endl;
    }
    else
    {
        std::cout << "No word was repeated." << std::endl;
    }
}

}

// NOLINTEND(bugprone-branch-clone)

/******************************************************************************************************END OF FILE*****/
