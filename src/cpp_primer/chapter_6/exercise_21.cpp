/**
 ***********************************************************************************************************************
 * @file        exercise_21.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>

namespace
{

int compare(int a, const int * b)
{
    return (a > *b) ? (a) : (*b);
}

}

namespace CppPrimer::Chapter6
{

void exercise_21(void)
{
    using std::cin;
    using std::cout;
    using std::endl;

    int a = 0;
    int b = 0;

    // It should be a pointer to const as we don't intend to modify the value.
    while (cin >> a >> b)
    {
        cout << "The biggest value of the two introduced is " << compare(a, &b) << "." << endl;
    }
}

}

/******************************************************************************************************END OF FILE*****/
