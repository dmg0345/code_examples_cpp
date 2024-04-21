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
#include <vector>

namespace CppPrimer::Chapter3
{

void exercise_21(void)
{
    // Redo exercise 3.16 with iterators.

    using std::vector;
    using std::string;
    using std::cout;
    using std::endl;

    vector<int>::iterator b_i;
    vector<int>::iterator e_i;
    vector<string>::iterator b_s;
    vector<string>::iterator e_s;

    // No elements.
    vector<int> v1;

    cout << "This are the elements in v1: " << endl;
    cout << "Elements: " << v1.size() << endl;
    for (b_i = v1.begin(), e_i = v1.end(); b_i != e_i; b_i++)
    {
        cout << *b_i << ' ';
    }
    cout << endl;

    // Ten elements initialized to zero.
    vector<int> v2(10);

    cout << "This are the elements in v2: " << endl;
    cout << "Elements: " << v2.size() << endl;
    for (b_i = v2.begin(), e_i = v2.end(); b_i != e_i; b_i++)
    {
        cout << *b_i << ' ';
    }
    cout << endl;

    // Ten elements initialized to 42.
    vector<int> v3(10, 42);

    cout << "This are the elements in v3: " << endl;
    cout << "Elements: " << v3.size() << endl;
    for (b_i = v3.begin(), e_i = v3.end(); b_i != e_i; b_i++)
    {
        cout << *b_i << ' ';
    }
    cout << endl;

    // One element initialized to 10.
    vector<int> v4{10};

    cout << "This are the elements in v4: " << endl;
    cout << "Elements: " << v4.size() << endl;
    for (b_i = v4.begin(), e_i = v4.end(); b_i != e_i; b_i++)
    {
        cout << *b_i << ' ';
    }
    cout << endl;

    // Two elements initialized to 10 and 42.
    vector<int> v5{10, 42};

    cout << "This are the elements in v5: " << endl;
    cout << "Elements: " << v5.size() << endl;
    for (b_i = v5.begin(), e_i = v5.end(); b_i != e_i; b_i++)
    {
        cout << *b_i << ' ';
    }
    cout << endl;

    // Wrong initialization, will compile same as v6(10).
    vector<string> v6{10};

    cout << "This are the elements in v6: " << endl;
    cout << "Elements: " << v6.size() << endl;
    for (b_s = v6.begin(), e_s = v6.end(); b_s != e_s; b_s++)
    {
        cout << *b_s << ' ';
    }
    cout << endl;

    // Wrong initialization, will compile same as v7(10, "hi").
    vector<string> v7{10, "hi"};

    cout << "This are the elements in v7: " << endl;
    cout << "Elements: " << v7.size() << endl;
    for (b_s = v7.begin(), e_s = v7.end(); b_s != e_s; b_s++)
    {
        cout << *b_s << ' ';
    }
    cout << endl;
}

}

/******************************************************************************************************END OF FILE*****/
