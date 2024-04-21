/**
 ***********************************************************************************************************************
 * @file        exercise_3.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace
{

int fact(int x)
{
    int fact = 1;
    int tmp = 1;

    if (x > 1)
    {
        do {
            fact *= (tmp++);
        }
        while (tmp <= x);
    }

    return fact;
}

}

namespace CppPrimer::Chapter6
{

void exercise_3(void)
{
    using std::cout;
    using std::endl;

    for (const auto & val : {0, 1, 2, 3, 4})
    {
        cout << "Factorial number of " << val << " is " << fact(val) << "." << endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
