/**
 ***********************************************************************************************************************
 * @file        exercise_4.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace
{

int fact(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    int fact = 1;
    int tmp = 1;
    int x = 0;

    cout << "Please input a number to calculate its factorial: ";
    if (cin >> x)
    {
        cout << endl;
        if (x > 1)
        {
            do {
                fact *= (tmp++);
            }
            while (tmp <= x);
        }

        cout << "Factorial number of " << x << " is " << fact << "." << endl;
    }

    return fact;
}

}

namespace CppPrimer::Chapter6
{

void exercise_4(void)
{
    fact();
}

}

/******************************************************************************************************END OF FILE*****/
