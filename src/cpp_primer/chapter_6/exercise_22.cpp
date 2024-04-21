/**
 ***********************************************************************************************************************
 * @file        exercise_22.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

using namespace std;

namespace
{

void swapPointers(int *& ptrA, int *& ptrB)
{
    int * ptrC = ptrA;

    ptrA = ptrB;
    ptrB = ptrC;
}

}

namespace CppPrimer::Chapter6
{

void exercise_22(void)
{
    int a = 0;
    int b = 1;
    int * ptrA = &a;
    int * ptrB = &b;

    cout << "Value in ptrA " << *ptrA << ", value in ptrB " << *ptrB << "." << endl;
    swapPointers(ptrA, ptrB);
    cout << "Value in ptrA " << *ptrA << ", value in ptrB " << *ptrB << "." << endl;
}

}

/******************************************************************************************************END OF FILE*****/
