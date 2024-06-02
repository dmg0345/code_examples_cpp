/**
 ***********************************************************************************************************************
 * @file        exercise_6.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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

void exercise_6(void)
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

    lettergrade = (grade < 60) ? (letters[0]) : (letters[(grade - 50) / 10]);
    lettergrade += (grade != 100) ? (plusminus[grade % 10]) : ('\0');

    std::cout << "The related grade is the following: " << lettergrade << std::endl;
}

}

#if defined(__GNUC__)
#pragma GCC diagnostic pop // Restore settings.
#endif

/******************************************************************************************************END OF FILE*****/
