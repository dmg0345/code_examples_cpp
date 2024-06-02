/**
 ***********************************************************************************************************************
 * @file        exercise_25.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

namespace CppPrimer::Chapter3
{

void exercise_25(void)
{
    using std::vector;
    using std::cin;
    using std::cout;
    using std::endl;

    vector<int> scores(11, 0);
    int grade = 0;

    while (cin >> grade)
    {
        if (grade <= 100)
        {
            (*(scores.begin() + (grade / 10)))++;
        }
    }

    cout << "This are then number of grades (0 to 100) in units of 10: " << endl;
    for (auto & val : scores)
    {
        cout << "Score: " << val << endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
