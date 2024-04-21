/**
 ***********************************************************************************************************************
 * @file        chapter_6.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_PRIMER_CHAPTER_6_HPP
#define CPP_PRIMER_CHAPTER_6_HPP

/**
 * @brief Namespace for chapter #6.
 */
namespace CppPrimer::Chapter6
{

/**
 * @brief Exercise 1
 * @rst
 * What is the difference between a parameter and an argument?
 * @endrst
 */
void exercise_1(void);

/**
 * @brief Exercise 2
 * @rst
 * Indicate which of the following functions are in error and why.
 * Suggest how you might correct the problems.
 *
 *   - ``int f() { string s; return s; }``
 *   - ``f2(int i) { ... }``
 *   - ``int calc(int v1, int v1) ... }``
 *   - ``double square(double x) return x * x;``
 * @endrst
 */
void exercise_2(void);

/**
 * @brief Exercise 3
 * @rst
 * Write and test your own version of fact.
 * @endrst
 */
void exercise_3(void);

/**
 * @brief Exercise 4
 * @rst
 * Write a function that interacts with the user, asking for a number and generating the factorial of that number.
 * Call this function from ``main``.
 * @endrst
 */
void exercise_4(void);

/**
 * @brief Exercise 5
 * @rst
 * Write a function to return the absolute value of its argument.
 * @endrst
 */
void exercise_5(void);

/**
 * @brief Exercise 6
 * @rst
 * Explain the differences between a parameter, a local variable and a local static variable.
 * Give an example of a function in which each might be useful.
 * @endrst
 */
void exercise_6(void);

/**
 * @brief Exercise 7
 * @rst
 * Write a function that returns zero when it is first called and then generates numbers in sequence each time
 * it is called again.
 * @endrst
 */
void exercise_7(void);

/**
 * @brief Exercise 10
 * @rst
 * Using pointers, write a function to swap the values of two integers. Test the function by calling it and printing
 * the swapped values.
 * @endrst
 */
void exercise_10(void);

/**
 * @brief Exercise 11
 * @rst
 * Write and test your own version of reset that takes a reference.
 * @endrst
 */
void exercise_11(void);

/**
 * @brief Exercise 12
 * @rst
 * Rewrite the program from exercise 6.10 to use references instead of pointers.
 * Which version do you think it would be easier to use and why?
 * @endrst
 */
void exercise_12(void);

/**
 * @brief Exercise 12
 * @rst
 * Assuming ``T`` is the name of a type, explain the difference between a function declared
 * as ``void f(T)`` and ``void f(T&)``.
 * @endrst
 */
void exercise_13(void);

/**
 * @brief Exercise 14
 * @rst
 * Give an example of when a parameter should be a reference type and when a parameter should not be a reference.
 * @endrst
 */
void exercise_14(void);

/**
 * @brief Exercise 15
 * @rst
 * Explain the rationale for the type of each of ``find_char`` parameter. In particular, why is s a reference
 * to ``const`` but occurs is a plain reference?
 * Why are these parameters references, but the char parameter ``c`` is not? What would happen if we made
 * ``s`` a plain reference? What if we made occurs a reference to ``const``?
 * @endrst
 */
void exercise_15(void);

/**
 * @brief Exercise 16
 * @rst
 * The following function, although legal, is less useful that it might be. Identify and correct the limitation
 * on this function:
 * 
 *   - ``bool is_empty(string &s) { return s.empty(); }``
 * @endrst
 */
void exercise_16(void);

/**
 * @brief Exercise 17
 * @rst
 * Write a function to determine whether a string contains any capital letters. Write a function to change a
 * string to all lowercase. Do the parameters you used in these function have the same type?
 * If so, why? If not, why not?
 * @endrst
 */
void exercise_17(void);

/**
 * @brief Exercise 18
 * @rst
 * Write declarations for each of the following functions. When you write these declarations, use the name of the
 * function to indicate what the function does.
 *
 *   - A function named ``compare`` that return a ``bool`` and has two parameters that are references
 *     to a class named ``matrix``.
 *   - A function named ``change_val`` that returns a ``vector<int>`` iterator and takes two parameters:
 *     one is an ``int`` and the other is an iterator for a ``vector<int>``.
 * @endrst
 */
void exercise_18(void);

/**
 * @brief Exercise 19
 * @rst
 * Given the following declarations:
 *
 * .. code-block:: cpp
 *
 *     double calc(double);
 *     int count(const string &, char);
 *     int sum(vector<int>::iterator, vector<int>::iterator, int);
 *     vector<int> vec(10);
 *
 * Determine which calls are legal and which are illegal. For those that are illegal, explain why.
 *
 *   - ``calc(23.4, 55.1);``
 *   - ``count("abcda", 'a');``
 *   - ``calc(66);``
 *   - ``sum(vec.begin(), vec.end(), 3.8);``
 * @endrst
 */
void exercise_19(void);

/**
 * @brief Exercise 20
 * @rst
 * When should reference parameters be references to ``const``? What happens if we make a parameter a plain reference
 * when it could be a reference to ``const``?
 * @endrst
 */
void exercise_20(void);

/**
 * @brief Exercise 21
 * @rst
 * Write a function that takes an ``int`` and a pointer to an ``int`` and returns the larger of the ``int`` value
 * or the value to which the pointer points. What type should you use for the pointer?
 * @endrst
 */
void exercise_21(void);

/**
 * @brief Exercise 22
 * @rst
 * Write a function to swap two ``int`` pointers.
 * @endrst
 */
void exercise_22(void);

/**
 * @brief Exercise 23
 * @rst
 * Write your own versions of each of the print functions presented in this section. Call each of these functions
 * to print ``i`` and ``j`` defined as follows:
 *
 *   - ``int i = 0, j[2] = {0, 1}``
 * @endrst
 */
void exercise_23(void);

/**
 * @brief Exercise 24
 * @rst
 * Explain the behaviour of the following function. If there are problems in the code, explain what they are
 * and how you might fix them.
 *
 * .. code-block:: cpp
 *
 *     void print(const int ia[10])
 *     {
 *         for (size_t i = 0; i != 10; ++i)
 *             cout << ia[i] << endl;
 *     }
 * @endrst
 */
void exercise_24(void);

/**
 * @brief Exercise 25
 * @rst
 * Write a ``main`` function that takes two arguments. Concatenate the supplied arguments and print
 * the resulting string.
 * @endrst
 */
void exercise_25(void);

/**
 * @brief Exercise 27
 * @rst
 * Write a function that takes an ``initializer_list<int>`` and produces the sum of the elements in the list.
 * @endrst
 */
void exercise_27(void);

/**
 * @brief Exercise 28
 * @rst
 * In the second version of ``error_msg`` that has an ``ErrCode`` parameter, what is the type of ``elem``
 * in the ``for`` loop?
 *
 * .. code-block:: cpp
 *
 *     void error_msg(ErrCode e, initializer_list<string> il)
 *     {
 *         cout << e.msg() << ": ";
 *         for (const auto &elem : il)
 *             cout << elem << " ";
 *         cout << endl;
 *     }
 * @endrst
 */
void exercise_28(void);

/**
 * @brief Exercise 29
 * @rst
 * When you use an ``initializer_list`` in a range for would you ever use a reference as the loop
 * control variable? If so, why? If not, why not?
 * @endrst
 */
void exercise_29(void);

/**
 * @brief Exercise 31
 * @rst
 * When is valid to return a reference? A reference to ``const``?
 * @endrst
 */
void exercise_31(void);

/**
 * @brief Exercise 32
 * @rst
 * Indicate whether the following function is legal. If so, explain what it does, if not, correct any errors
 * and then explain it.
 *
 * .. code-block:: cpp
 *
 *     int &get(int *arry, int index) { return arry[index]; }
 * 
 *     int main()
 *     {
 *         int ia[10];
 * 
 *         for (int i = 0; i != 10; ++i)
 *         {
 *             get(ia, i) = i;
 *         }
 *     }
 * @endrst
 */
void exercise_32(void);

/**
 * @brief Exercise 33
 * @rst
 * Write a recursive function to print the contents of a vector.
 * @endrst
 */
void exercise_33(void);

/**
 * @brief Exercise 34
 * @rst
 * What would happen if the stopping condition in a factorial were:
 *
 * .. code-block:: cpp
 *
 *     if (val != 0)
 * @endrst
 */
void exercise_34(void);

/**
 * @brief Exercise 35
 * @rst
 * In the function below, why did we pass ``val - 1`` rather than ``val--``?
 *
 * .. code-block:: cpp
 *
 *     int factorial(int val)
 *     {
 *         if (val > 1)
 *             return factorial(val - 1) * val;
 *         return 1;
 *     }
 * @endrst
 */
void exercise_35(void);

/**
 * @brief Exercise 37
 * @rst
 * Write three additional declarations for the function in the previous exercise. One should use a type alias,
 * one should use a trailing ``return``, and the third should use ``decltype``.
 * Which form do you prefer and why?
 * @endrst
 */
void exercise_37(void);

/**
 * @brief Exercise 38
 * @rst
 * Revise the ``arrPtr`` function on to return a reference to the array.
 *
 * .. code-block:: cpp
 *
 *     int odd[] = {1, 3, 5, 7, 9};
 * 
 *     decltype(odd) *arrPtr(int i)
 *     {
 *         return (i % 2) ? &odd : &even;
 *     }
 * @endrst
 */
void exercise_38(void);

/**
 * @brief Exercise 39
 * @rst
 * Explain the effect of the second declaration in each one of the following sets of declarations.
 * Indicate which, if any, are illegal.
 *
 *   - ``int calc(int, int); int calc(const int, const int);``
 *   - ``int get(); double get();``
 *   - ``int *reset(int *); double *reset(double *);``
 * @endrst
 */
void exercise_39(void);

/**
 * @brief Exercise 40
 * @rst
 * Which, if either, of the following declarations are errors? Why?
 *
 *   - ``int ff(int a, int b = 0, int c = 0);``
 *   - ``char *init(int ht = 24, int wd, char bckgrnd);``
 * @endrst
 */
void exercise_40(void);

/**
 * @brief Exercise 41
 * @rst
 * Which, if any, of the following calls are illegal? Why? Which if any, are legal but unlikely to match
 * the programmer's intent? Why?
 *
 * ``char *init(int ht, int wd = 80, char bckgrnd = ' ');``
 *
 *   - ``init();``
 *   - ``init(24, 10);``
 *   - ``init(14, '*');``
 * @endrst
 */
void exercise_41(void);

/**
 * @brief Exercise 42
 * @rst
 * Give the second parameter of make_plural a default argument of ``s``. Test your program by printing singular
 * and plural versions of the words success and failure.
 *
 * .. code-block:: cpp
 *
 *     string make_plural(size_t ctr, const string &word, const string &ending)
 *     {
 *         return (ctr > 1) ? word + ending : word;
 *     }
 * @endrst
 */
void exercise_42(void);

/**
 * @brief Exercise 43
 * @rst
 * Which one of the following declarations and definitions would you put in a header? In a source file? Explain why.
 *
 *   - ``inline bool eq(const BigInt&, const BigInt&) {...}``
 *   - ``void putValues(int *arr, int size);``
 * @endrst
 */
void exercise_43(void);

/**
 * @brief Exercise 44
 * @rst
 * Rewrite the ``isShorter`` function to be inline.
 *
 * .. code-block:: cpp
 *
 *     bool isShorter(const string &s1, const string &s2)
 *     {
 *         return s1.size() < s2.size();
 *     }
 * @endrst
 */
void exercise_44(void);

/**
 * @brief Exercise 45
 * @rst
 * Review the programs you've written for the earlier exercises and decide whether they should be defined as
 * inline. If so, do so, If not explain why they should not be inline.
 * @endrst
 */
void exercise_45(void);

/**
 * @brief Exercise 46
 * @rst
 * Would it be possible to define isShorter as a ``constexpr``? If so, do so, if not, explain why not.
 *
 * .. code-block:: cpp
 *
 *     bool isShorter(const string &s1, const string &s2)
 *     {
 *         return s1.size() < s2.size();
 *     }
 * @endrst
 */
void exercise_46(void);

/**
 * @brief Exercise 47
 * @rst
 * Revise the program you wrote in the exercise 33 that used recursion to print the contents of a vector to
 * conditionally print information about its execution. For example, you might print the size of the vector on
 * each call. Compile and run the program with debugging turned on and again with it turned off.
 * @endrst
 */
void exercise_47(void);

/**
 * @brief Exercise 48
 * @rst
 * Explain what this loop does and whether it is a good use of ``assert``:
 *
 * .. code-block:: cpp
 *
 *     string s;
 *     while (cin >> s && s != sought) {}
 *     assert(cin);
 * @endrst
 */
void exercise_48(void);

/**
 * @brief Exercise 49
 * @rst
 * What is a candidate function? What is a viable function?
 * @endrst
 */
void exercise_49(void);

/**
 * @brief Exercise 50
 * @rst
 * Given the following declarations:
 *
 * .. code-block:: cpp
 *
 *     void f();
 *     void f(int);
 *     void f(int, int);
 *     void f(double, double = 3.14);
 *
 * List the viable functions, if any for each of the following calls. Indicate which function is the best match,
 * or if the call is illegal whether there is no match or why the call is ambiguous.
 *
 *   - ``f(2.56, 42)``
 *   - ``f(42)``
 *   - ``f(42)``
 *   - ``f(42, 0)``
 *   - ``f(2.56, 3.14)``
 * @endrst
 */
void exercise_50(void);

/**
 * @brief Exercise 51
 * @rst
 * Write all four version of ``f`` in the previous exercise. Each function should print a distinguishing message.
 * Check your answers for the previous exercise. If your answers were incorrect, study this section until you
 * understand why your answers were wrong.
 * @endrst
 */
void exercise_51(void);

/**
 * @brief Exercise 52
 * @rst
 * Given the following declarations:
 *
 * .. code-block:: cpp
 *
 *     void manip(int, int);
 *     double dobj;
 *
 * What is the rank of each conversion in the following calls:
 *
 *   - ``manip('a', 'z');``
 *   - ``manip(55.4, dobj);``
 * @endrst
 */
void exercise_52(void);

/**
 * @brief Exercise 53
 * @rst
 * Explain the effect of the second declaration in each one of the following sets of declarations.
 * Indicate which, if any, are illegal.
 *
 *   - .. code-block:: cpp
 *
 *         int calc(int&, int&);
 *         int calc(const int&, const int&);
 *   - .. code-block:: cpp
 *
 *         int calc(char*, char*);
 *         int calc(const char*, const char*);
 *   - .. code-block:: cpp
 *
 *         int calc(char*, char*);
 *         int calc(char* const, char* const);
 * @endrst
 */
void exercise_53(void);

/**
 * @brief Exercise 54
 * @rst
 * Write a declaration for a function that takes two ``int`` parameters and returns an ``int``, and declare a vector
 * whose elements have this function pointer type.
 * @endrst
 */
void exercise_54(void);

/**
 * @brief Exercise 55
 * @rst
 * Write four functions that ``add``, ``subtract``, ``multiply``, and ``divide`` two ``int`` values. Store pointers
 * to these values in your vector from the previous exercise.
 * @endrst
 */
void exercise_55(void);

/**
 * @brief Exercise 56
 * @rst
 * Call each element in the vector and print their result.
 * @endrst
 */
void exercise_56(void);

}

#endif /* CPP_PRIMER_CHAPTER_6_HPP */

/******************************************************************************************************END OF FILE*****/
