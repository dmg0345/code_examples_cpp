/**
 ***********************************************************************************************************************
 * @file        exercise_21.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
