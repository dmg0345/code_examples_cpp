/**
 ***********************************************************************************************************************
 * @file        exercise_22.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
