/**
 ***********************************************************************************************************************
 * @file        exercise_17.cpp
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
#pragma GCC diagnostic ignored "-Wsign-compare"
#endif

namespace CppPrimer::Chapter5
{

void exercise_17(void)
{
    int a = 0;
    bool isPrefix = true;
    std::vector<int> vectorInt0;
    std::vector<int> vectorInt1;
    std::vector<int> * smallVector = nullptr;
    std::vector<int> * bigVector = nullptr;

    // First vector.
    std::cout << "Please input numbers to add to the first vector: " << std::endl;
    while (std::cin >> a)
    {
        vectorInt0.push_back(a);
        std::cout << "Number " << a << " added to the list." << std::endl;
    }
    std::cout << "The elements of the first vector are:";
    for (a = 0; a < vectorInt0.size(); a++)
    {
        std::cout << " " << vectorInt0[a];
    }
    std::cout << "." << std::endl;
    std::cin.clear();

    // Second vector.
    std::cout << "Please input numbers to add to the second vector: " << std::endl;
    while (std::cin >> a)
    {
        vectorInt1.push_back(a);
        std::cout << "Number " << a << " added to the list." << std::endl;
    }
    std::cout << "The elements of the second vector are:";
    for (a = 0; a < vectorInt1.size(); a++)
    {
        std::cout << " " << vectorInt1[a];
    }
    std::cout << "." << std::endl;
    std::cin.clear();

    // Check which vector is smaller.
    if (vectorInt0.size() > vectorInt1.size())
    {
        smallVector = &vectorInt1;
        bigVector = &vectorInt0;
    }
    else
    {
        smallVector = &vectorInt0;
        bigVector = &vectorInt1;
    }

    // Check if prefix.
    for (a = 0; (a < smallVector->size()) && (isPrefix); a++)
    {
        if ((*smallVector)[a] != (*bigVector)[a])
        {
            isPrefix = false;
        }
    }

    // Print data.
    if (isPrefix)
    {
        if (smallVector == &vectorInt0)
        {
            std::cout << "The first vector is a prefix of the second vector." << std::endl;
        }
        else
        {
            std::cout << "The second vector is a prefix of the first vector." << std::endl;
        }
    }
    else
    {
        if (smallVector == &vectorInt0)
        {
            std::cout << "The first vector is a NOT prefix of the second vector." << std::endl;
        }
        else
        {
            std::cout << "The second vector is a NOT prefix of the first vector." << std::endl;
        }
    }
}

}

#if defined(__GNUC__)
#pragma GCC diagnostic pop // Restore settings.
#endif

/******************************************************************************************************END OF FILE*****/
