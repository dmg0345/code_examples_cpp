/**
 ***********************************************************************************************************************
 * @file        exercise_15.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter6
{

void exercise_15(void)
{
    // s is a reference to avoid copying the entire string and const because the string is not meant to be modified
    // inside the string.
    // occurs is a plain reference because it's used to return the number of occurrences in the string.
    // It could be a reference to const char too, we just need a copy of this value... we already know that the size
    // of char is not too large so it can'be inneficient compared to a string.
    // If we made s a plain reference we could change it from inside the function and that is not what we intend to do.
    // If occurs was a reference to const, we wouldn't be able to modify it.
}

}

/******************************************************************************************************END OF FILE*****/
