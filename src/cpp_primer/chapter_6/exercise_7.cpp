/**
 ***********************************************************************************************************************
 * @file        exercise_7.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>

namespace
{

void counter(void)
{
    using std::cout;
    using std::endl;

    static int a = 0;
    cout << "This is the time " << a << " this function has been called." << endl;
    a++;
}

}

namespace CppPrimer::Chapter6
{

void exercise_7(void)
{
    counter();
    counter();
    counter();
    counter();
}

}

/******************************************************************************************************END OF FILE*****/
