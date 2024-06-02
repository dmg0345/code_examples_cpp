/**
 ***********************************************************************************************************************
 * @file        exercise_41.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
