/**
 ***********************************************************************************************************************
 * @file        exercise_27.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include <initializer_list>

using namespace std;

namespace
{

int ExerciseNum(initializer_list<int> lst)
{
    int sum = 0;

    for (const auto & c : lst)
    {
        sum += c;
    }

    return sum;
}

}

namespace CppPrimer::Chapter6
{

void exercise_27(void)
{
    cout << "The sum of 1, 2, 3, 4, 5 is: " << ExerciseNum({1, 2, 3, 4, 5}) << "." << endl;
}

}

/******************************************************************************************************END OF FILE*****/
