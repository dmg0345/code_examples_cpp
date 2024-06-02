/**
 ***********************************************************************************************************************
 * @file        exercise_13.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include <iostream>
#include <vector>

// NOLINTBEGIN(misc-const-correctness)

namespace CppPrimer::Chapter3
{

void exercise_13(void)
{
    using std::vector;
    using std::string;
    using std::cout;
    using std::endl;

    // No elements.
    vector<int> v1;

    cout << "This are the elements in v1: " << endl;
    cout << "Elements: " << v1.size() << endl;
    for (auto & c : v1)
    {
        cout << c << ' ';
    }
    cout << endl;

    // Ten elements initialized to zero.
    vector<int> v2(10);

    cout << "This are the elements in v2: " << endl;
    cout << "Elements: " << v2.size() << endl;
    for (auto & c : v2)
    {
        cout << c << ' ';
    }
    cout << endl;

    // Ten elements initialized to 42.
    vector<int> v3(10, 42);

    cout << "This are the elements in v3: " << endl;
    cout << "Elements: " << v3.size() << endl;
    for (auto & c : v3)
    {
        cout << c << ' ';
    }
    cout << endl;

    // One element initialized to 10.
    vector<int> v4{10};

    cout << "This are the elements in v4: " << endl;
    cout << "Elements: " << v4.size() << endl;
    for (auto & c : v4)
    {
        cout << c << ' ';
    }
    cout << endl;

    // Two elements initialized to 10 and 42.
    vector<int> v5{10, 42};

    cout << "This are the elements in v5: " << endl;
    cout << "Elements: " << v5.size() << endl;
    for (auto & c : v5)
    {
        cout << c << ' ';
    }
    cout << endl;

    // Wrong initialization, will compile same as v6(10).
    vector<string> v6{10};

    cout << "This are the elements in v6: " << endl;
    cout << "Elements: " << v6.size() << endl;
    for (auto & c : v6)
    {
        cout << c << ' ';
    }
    cout << endl;

    // Wrong initialization, will compile same as v7(10, "hi").
    vector<string> v7{10, "hi"};

    cout << "This are the elements in v7: " << endl;
    cout << "Elements: " << v7.size() << endl;
    for (auto & c : v7)
    {
        cout << c << ' ';
    }
    cout << endl;
}

}

// NOLINTEND(misc-const-correctness)

/******************************************************************************************************END OF FILE*****/
