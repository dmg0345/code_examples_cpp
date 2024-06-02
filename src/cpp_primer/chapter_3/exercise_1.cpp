/**
 ***********************************************************************************************************************
 * @file        exercise_1.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace CppPrimer::Chapter3
{

void exercise_1(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    int sum = 0;
    int i = 0;
    int a = 0;

    // Exercise 1.9
    sum = 0, i = 50;
    while (i <= 100)
    {
        sum += i++;
    }
    cout << "Total sum: " << sum << endl;

    // Exercise 1.10
    i = 10;
    while (i != 0)
    {
        cout << i-- << "\r";
    }
    cout << endl;

    // Exercise 1.11
    cout << "Type two numbers" << endl;
    cin >> i >> a;
    while (++i < a)
    {
        cout << i << " ";
    }
    cout << endl;
}

}

/******************************************************************************************************END OF FILE*****/
