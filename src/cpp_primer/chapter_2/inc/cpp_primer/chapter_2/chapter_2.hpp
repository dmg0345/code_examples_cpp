/**
 ***********************************************************************************************************************
 * @file        chapter_2.hpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#ifndef CPP_PRIMER_CHAPTER_2_HPP
#define CPP_PRIMER_CHAPTER_2_HPP

/**
 * @brief Namespace for chapter #2.
 */
namespace CppPrimer::Chapter2
{

/**
 * @brief Exercise 1
 * @rst
 * What are the differences between ``int``, ``long``, ``long long``, and ``short``? Between an ``unsigned`` and a
 * ``signed`` type? Between a ``float`` and a ``double``?
 * @endrst
 */
void exercise_1(void);

/**
 * @brief Exercise 3
 * @rst
 * What output will the following code produce?
 * 
 * .. code-block:: cpp
 *
 *     unsigned u = 10, u2 = 42;
 *     std::cout << u2 - u << std::endl;
 *     std::cout << u - u2 << std::endl;
 *     
 *     int i = 10, i2 = 42;
 *     std::cout << i2 - i << std::endl;
 *     std::cout << i - i2 << std::endl;
 *     
 *     std::cout << i - u << std::endl;
 *     std::cout << u - i << std::endl;
 * @endrst
 */
void exercise_3(void);

/**
 * @brief Exercise 5
 * @rst
 * Determine the type of each of the following literals. Explain the differences among the literals
 * in each of the four examples:
 * 
 *   - ``'a'``, ``L'a'``, ``"a"``, ``L"a"``
 *   - ``10``, ``10u``, ``10L``, ``10uL``, ``012``, ``0xC``
 *   - ``3.14``, ``3.14f``, ``3.14L``
 *   - ``10``, ``10u``, ``10.``, ``10e-2``
 * @endrst
 */
void exercise_5(void);

/**
 * @brief Exercise 6
 * @rst
 * What, if any, are the differences between the following definitions:
 * 
 *   - ``int month = 9, day = 7;``
 *   - ``int month = 09, day = 07;``
 * @endrst
 */
void exercise_6(void);

/**
 * @brief Exercise 7
 * @rst
 * What values do these literals represent? What type does each have?
 * 
 *   - ``"Who goes with F\145rgus?\012"``
 *   - ``3.14e1L``
 *   - ``1024f``
 *   - ``3.14L``
 * @endrst
 */
void exercise_7(void);

/**
 * @brief Exercise 8
 * @rst
 * Using escape sequences, write a program to print 2M followed by a newline.
 * Modify the program to print 2, then a tab, then an M, followed by a newline.
 * @endrst
 */
void exercise_8(void);

/**
 * @brief Exercise 9
 * @rst
 * Explain the following definitions. For those that are illegal, explain what's wrong and how to correct it.
 * 
 *   - ``std::cin >> int input_value;``
 *   - ``int i = { 3.14 };``
 *   - ``double salary = wage = 9999.99;``
 *   - ``int i = 3.14;``
 * @endrst
 */
void exercise_9(void);

/**
 * @brief Exercise 10
 * @rst
 * What are the initial values, if any, of each of the following variables?
 * 
 *   - ``std::string global_str;``
 *   - ``int global_int;``
 *   - ``double salary = wage = 9999.99;``
 *   - .. code-block:: cpp
 *
 *         int main()
 *         {
 *             int local_int;
 *             std::string local_str;
 *         }
 * @endrst
 */
void exercise_10(void);

/**
 * @brief Exercise 11
 * @rst
 * Explain whether each of the following is a declaration or a definition:
 * 
 *   - ``extern int ix = 1024;``
 *   - ``int iy;``
 *   - ``extern int iz;``
 * @endrst
 */
void exercise_11(void);

/**
 * @brief Exercise 12
 * @rst
 * Which, if any, of the following names are invalid?
 * 
 *   - ``int double = 3.14;``
 *   - ``int _;``
 *   - ``int catch-22;``
 *   - ``int 1_or_2 = 1;``
 *   - ``double Double = 3.14;``
 * @endrst
 */
void exercise_12(void);

/**
 * @brief Exercise 13
 * @rst
 * What is the value of ``j`` in the following program?
 * 
 * .. code-block:: cpp
 *
 *     int i = 42;
 *     int main()
 *     {
 *         int i = 100;
 *         int j = i;
 *     }
 * @endrst
 */
void exercise_13(void);

/**
 * @brief Exercise 14
 * @rst
 * Is the following program legal? If so, what values are printed?
 * 
 * .. code-block:: cpp
 *
 *     int i = 100, sum = 0;
 *     for (int i = 0; i != 10; ++i)
 *     {
 *         sum += i;
 *     }
 *     std::cout << i << " " << sum << std::endl;
 * @endrst
 */
void exercise_14(void);

/**
 * @brief Exercise 15
 * @rst
 * Which of the following definitions, if any, are invalid? Why?
 * 
 * .. code-block:: cpp
 *
 *     int ival = 1.01;
 *     int &rval1 = 1.01;
 *     int &rval2 = ival;
 *     int &rval3;
 * @endrst
 */
void exercise_15(void);

/**
 * @brief Exercise 16
 * @rst
 * Which, if any, of the following assignments are invalid? If they are valid, explain what they do.
 *
 * ``int i = 0, &r1 = i; double d = 0, &r2 = d;``
 *
 *   - ``r2 = 3.14159;``
 *   - ``r2 = r1;``
 *   - ``i = r2;``
 *   - ``r1 = d;``
 * @endrst
 */
void exercise_16(void);

/**
 * @brief Exercise 17
 * @rst
 * What does the following code print?
 *
 * .. code-block:: cpp
 *
 *     int i, &ri = i;
 *     i = 5; ri = 10;
 *     std::cout << i << " " << ri << std::endl;
 * @endrst
 */
void exercise_17(void);

/**
 * @brief Exercise 18
 * @rst
 * Write code to change the value of a pointer. Write code to change the value to which the pointer points.
 * @endrst
 */
void exercise_18(void);

/**
 * @brief Exercise 19
 * @rst
 * Explain the key differences between pointers and references.
 * @endrst
 */
void exercise_19(void);

/**
 * @brief Exercise 20
 * @rst
 * What does the following program do?
 *
 * .. code-block:: cpp
 *
 *     int i = 42;
 *     int * p1 = &i;
 *     *p1 = *p1 * *p1;
 * @endrst
 */
void exercise_20(void);

/**
 * @brief Exercise 21
 * @rst
 * Explain each of the following definitions. Indicate whether any are illegal and, if so, why.
 *
 * ``int i = 0;``
 *
 *   - ``double* dp = &i;``
 *   - ``int *ip = i;``
 *   - ``int *p = &i;``
 * @endrst
 */
void exercise_21(void);

/**
 * @brief Exercise 22
 * @rst
 * Assuming ``p`` is a pointer to ``int``, explain the following code:
 *
 *   - ``if (p) // ...``
 *   - ``if (*p) // ...``
 * @endrst
 */
void exercise_22(void);

/**
 * @brief Exercise 23
 * @rst
 * Given a pointer ``p``, can you determine whether ``p`` points to a valid object? If so, how? If not, why not?
 * @endrst
 */
void exercise_23(void);

/**
 * @brief Exercise 24
 * @rst
 * Why is the initialization of ``p`` legal but that of ``lp`` illegal?
 *
 * .. code-block:: cpp
 *
 *     int i = 42;
 *     void *p = &i;
 *     long *lp = &i;
 * @endrst
 */
void exercise_24(void);

/**
 * @brief Exercise 25
 * @rst
 * Determine the types and values of each of the following variables.
 *
 *   - ``int* ip, &r = ip;``
 *   - ``int i, *ip = 0;``
 *   - ``int* ip, ip2;``
 * @endrst
 */
void exercise_25(void);

/**
 * @brief Exercise 26
 * @rst
 * Which of the following are legal? For those that are illegal, explain why.
 *
 *   - ``const int buf;``
 *   - ``int cnt = 0;``
 *   - ``const int sz = cnt;``
 *   - ``++cnt; ++sz;``
 * @endrst
 */
void exercise_26(void);

/**
 * @brief Exercise 27
 * @rst
 * Which of the following initializations are legal? Explain why.
 *
 *   - ``int i = -1, &r = 0;``
 *   - ``int *const p2 = &i2;``
 *   - ``const int i = -1, &r = 0;``
 *   - ``const int *const p3 = &i2;``
 *   - ``const int *p1 = &i2;``
 *   - ``const int &const r2;``
 *   - ``const int i2 = i, &r = i;``
 * @endrst
 */
void exercise_27(void);

/**
 * @brief Exercise 28
 * @rst
 * Explain the following definitions. Identify any that are illegal.
 *
 *   - ``int i, *const cp;``
 *   - ``int *p1, *const p2;``
 *   - ``const int ic, &r = ic;``
 *   - ``const int *const p3;``
 *   - ``const int *p;``
 * @endrst
 */
void exercise_28(void);

/**
 * @brief Exercise 29
 * @rst
 * Using the variables in the previous exercise, which of the following assignments are legal? Explain why.
 *
 *   - ``i = ic;``
 *   - ``p1 = p3;``
 *   - ``p1 = &ic;``
 *   - ``p3 = &ic;``
 *   - ``p2 = p1;``
 *   - ``ic = *p3;``
 * @endrst
 */
void exercise_29(void);

/**
 * @brief Exercise 30
 * @rst
 * For each of the following declarations indicate whether the object being declared has top-level or
 * low-level ``const``.
 *
 *   - ``const int v2 = 0; int v1 = v2;``
 *   - ``int *p1 = &v1, &r1 = v1;``
 *   - ``const int *p2 = &v2, *const p3 = &i, &r2 = v2;``
 * @endrst
 */
void exercise_30(void);

/**
 * @brief Exercise 31
 * @rst
 * Given the declarations in the previous exercise:
 *
 * .. code-block:: cpp
 *
 *     int &r1;
 *     const int v2;
 *     int *p1;
 *     const int *p2;
 *     const int *const p3;
 *
 * Determine whether the following assignments are legal. Explain how the top-level or
 * low-level ``const`` applies in each case.
 *
 *   - ``r1 = v2;``
 *   - ``p1 = p2;``
 *   - ``p2 = p1;``
 *   - ``p1 = p3;``
 *   - ``p2 = p3;``
 * @endrst
 */
void exercise_31(void);

/**
 * @brief Exercise 32
 * @rst
 * Is the following code legal or not? If not, how might you make it legal?
 *
 *   - ``int null = 0, *p = null;``
 * @endrst
 */
void exercise_32(void);

/**
 * @brief Exercise 33
 * @rst
 * Using the variable definitions from this section:
 *
 * .. code-block:: cpp
 *
 *     auto a = r;         // a is an int (r is an alias for i, which has type int)
 *     auto b = ci;        // b is an int (top-level const in ci is dropped)
 *     auto c = cr;        // c is an int (cr is an alias for ci whose const is top-level)
 *     auto d = &i;        // d is an int* (& of an int object is int*)
 *     auto e = &ci;       // e is const int* (& of a const object is low-level const)
 *     auto &g = ci;       // g is a const int& that is bound to ci
 *
 * Determine what happens in each of these assignments:
 *
 *   - ``a = 42;``
 *   - ``b = 42;``
 *   - ``c = 42;``
 *   - ``d = 42;``
 *   - ``e = 42;``
 *   - ``g = 42;``
 * @endrst
 */
void exercise_33(void);

/**
 * @brief Exercise 34
 * @rst
 * Write a program containing the variables and assignments from the previous exercise.
 * Print the variables before and after the assignments to check whether your predictions in the previous
 * exercise were correct.
 * If not, study the examples until you can convince yourself you know what led you to the wrong conclusion.
 * @endrst
 */
void exercise_34(void);

/**
 * @brief Exercise 35
 * @rst
 * Determine the types deduced in each of the following definitions. Once you've figured out the types,
 * write a program to see whether you were correct.
 * 
 *   - ``const int i = 42;``
 *   - ``auto j = i; const auto &k = i; auto *p = &i;``
 *   - ``const auto j2 = i, &k2 = i;``
 * @endrst
 */
void exercise_35(void);

/**
 * @brief Exercise 36
 * @rst
 * In the following code, determine the type of each variable and the value each variable has when the code finishes:
 * 
 *   - ``int a = 3, b = 4;``
 *   - ``decltype(a) c = a;``
 *   - ``decltype((b)) d = a;``
 *   - ``++c;``
 *   - ``++d;``
 * @endrst
 */
void exercise_36(void);

/**
 * @brief Exercise 37
 * @rst
 * Assignment is an example of an expression that yields a reference type. The type is a reference to the type
 * of the left-hand operand. That is, if ``i`` is an ``int``, then the type of the expression ``i = x`` is ``int&``.
 * Using that knowledge, determine the type and value of each variable in this code:
 * 
 *   - ``int a = 3, b = 4;``
 *   - ``decltype(a) c = a;``
 *   - ``decltype(a = b) d = a;``
 * @endrst
 */
void exercise_37(void);

/**
 * @brief Exercise 38
 * @rst
 * Describe the differences in type deduction between ``decltype`` and ``auto``. Give an example of an expression
 * where ``auto`` and ``decltype`` will deduce the same type and an example where they will deduce differing types.
 * 
 *   - ``int a = 3, b = 4;``
 *   - ``decltype(a) c = a;``
 *   - ``decltype(a = b) d = a;``
 * @endrst
 */
void exercise_38(void);

/**
 * @brief Exercise 39
 * @rst
 * Compile the following program to see what happens when you forget the semicolon after a class definition.
 * Remember the message for future reference.
 *
 * .. code-block:: cpp
 * 
 *     struct Foo { } // Note: no semicolon
 *     int main()
 *     {
 *         return 0;
 *     }
 * @endrst
 */
void exercise_39(void);

/**
 * @brief Exercise 40
 * @rst
 * Write your own version of the ``Sales_data`` class.
 * @endrst
 */
void exercise_40(void);

}

#endif /* CPP_PRIMER_CHAPTER_2_HPP */

/******************************************************************************************************END OF FILE*****/
