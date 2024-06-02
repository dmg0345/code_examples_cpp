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
#include <string>

using namespace std;

namespace
{

void getUpperCaseOcurrences(const string & s, int & ocurrences)
{
    ocurrences = 0;
    for (const auto & c : s)
    {
        if (isupper(c) > 0)
        {
            ocurrences++;
        }
    }
}

void upperToLower(string & s)
{
    for (auto & c : s)
    {
        if (isupper(c) > 0)
        {
            c = static_cast<char>(tolower(c));
        }
    }
}

}

namespace CppPrimer::Chapter6
{

void exercise_17(void)
{
    string input;
    int ocurrences = 0;

    while (cin >> input)
    {
        cout << "String written by user: " << input << endl;
        getUpperCaseOcurrences(input, ocurrences);
        cout << "Number of uppercase characters in the string: " << ocurrences << endl;
        upperToLower(input);
        cout << "String converted to lowercase: " << input << endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
