/**
 ***********************************************************************************************************************
 * @file        exercise_41.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <vector>
#include <iostream>

// NOLINTBEGIN(cppcoreguidelines-avoid-c-arrays,misc-const-correctness)

namespace CppPrimer::Chapter3
{

void exercise_41(void)
{
    using std::vector;
    using std::cout;
    using std::endl;
    using std::begin;
    using std::end;

    int my_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> my_vector(begin(my_array), end(my_array));

    cout << "This are the values in the vector: " << endl;
    for (auto & c : my_vector)
    {
        cout << c << ' ';
    }
    cout << endl;
}

}

// NOLINTEND(cppcoreguidelines-avoid-c-arrays,misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
