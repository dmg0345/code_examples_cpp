/**
 ***********************************************************************************************************************
 * @file        exercise_5.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

#if defined(__GNUC__)
#pragma GCC diagnostic push // Store current settings.
#pragma GCC diagnostic ignored "-Wsign-conversion"
#endif

namespace CppPrimer::Chapter5
{

void exercise_5(void)
{
    const std::vector<std::string> letters = {"F", // 0 to 59
                                              "D", // 60 to 69
                                              "C", // 70 to 79
                                              "B", // 80 to 89
                                              "A", // 90 to 99
                                              "A++"}; // 100
    const std::vector<char> plusminus = {'-', // 0
                                         '-', // 1
                                         '-', // 2
                                         '\0', // 3
                                         '\0', // 4
                                         '\0', // 5
                                         '\0', // 6
                                         '\0', // 7
                                         '+', // 8
                                         '+'}; // 9
    std::string lettergrade;
    int grade = 0;

    // Read value.
    std::cout << "Please input a grade (0 to 100): ";
    std::cin >> grade;

    if (grade < 60)
    {
        lettergrade = letters[0];
    }
    else
    {
        lettergrade = letters[(grade - 50) / 10];
        if (grade != 100)
        {
            lettergrade += plusminus[grade % 10];
        }
    }

    std::cout << "The related grade is the following: " << lettergrade << std::endl;
}

}

#if defined(__GNUC__)
#pragma GCC diagnostic pop // Restore settings.
#endif

/******************************************************************************************************END OF FILE*****/
