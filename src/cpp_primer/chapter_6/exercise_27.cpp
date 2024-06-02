/**
 ***********************************************************************************************************************
 * @file        exercise_27.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
