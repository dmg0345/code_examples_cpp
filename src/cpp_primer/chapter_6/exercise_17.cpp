/**
 ***********************************************************************************************************************
 * @file        exercise_17.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
