/**
 ***********************************************************************************************************************
 * @file        chapter_4.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_PRIMER_CHAPTER_4_HPP
#define CPP_PRIMER_CHAPTER_4_HPP

/**
 * @brief Namespace for chapter #4.
 */
namespace CppPrimer::Chapter4
{

/**
 * @brief Exercise 1
 * @rst
 * What is the value returned by ``5 + 10 * 20 / 2``?
 * @endrst
 */
void exercise_1(void);

/**
 * @brief Exercise 2
 * @rst
 * Parenthesize the following expressions to indicate the order in which the operands are grouped.
 *
 *   - ``vec.begin()``
 *   - ``vec.begin() + 1``
 * @endrst
 */
void exercise_2(void);

/**
 * @brief Exercise 3
 * @rst
 * Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities
 * for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls
 * in the use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?
 * @endrst
 */
void exercise_3(void);

/**
 * @brief Exercise 4
 * @rst
 * Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the expression
 * (without parentheses) and printing its result.
 *
 * .. code-block:: cpp
 *
 *     12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
 * @endrst
 */
void exercise_4(void);

/**
 * @brief Exercise 5
 * @rst
 * Determine the result of the following expressions.
 *
 *   - ``-30 * 3 + 21 / 5``
 *   - ``-30 + 3 * 21 / 5``
 *   - ``30 / 3 * 21 % 5``
 *   - ``-30 / 3 * 21 % 4``
 * @endrst
 */
void exercise_5(void);

/**
 * @brief Exercise 6
 * @rst
 * Write an expression to determine whether an ``int`` value is even or odd.
 * @endrst
 */
void exercise_6(void);

/**
 * @brief Exercise 7
 * @rst
 * What does overflow mean? Show three expressions that will overflow.
 * @endrst
 */
void exercise_7(void);

/**
 * @brief Exercise 8
 * @rst
 * Explain when operands are evaluated in the logical AND, logical OR and equality operators.
 * @endrst
 */
void exercise_8(void);

/**
 * @brief Exercise 9
 * @rst
 * Explain the behaviour of the condition in the following if:
 *
 *   - ``const char *cp = "Hello world";``
 *   - ``if (cp && *cp)``
 * @endrst
 */
void exercise_9(void);

/**
 * @brief Exercise 10
 * @rst
 * Write the condition for a ``while`` loop that would read integers from the standard input and stops
 * when the value read is equal to 42.
 * @endrst
 */
void exercise_10(void);

/**
 * @brief Exercise 11
 * @rst
 * Write an expression that tests four values, ``a``, ``b``, ``c`` and ``d``, and ensures that
 * ``a`` is greater than ``b``, which is greater than ``c``, which is greater than ``d``.
 * @endrst
 */
void exercise_11(void);

/**
 * @brief Exercise 12
 * @rst
 * Assuming ``i``, ``j`` and ``k`` are all ``int``, explain what ``i != j < k`` means.
 * @endrst
 */
void exercise_12(void);

/**
 * @brief Exercise 13
 * @rst
 * What are the values of ``i`` and ``d`` after each assignment?
 *
 * ``int i; double d;``
 * 
 *   - ``d = i = 3.5;``
 *   - ``i = d = 3.5;``
 * @endrst
 */
void exercise_13(void);

/**
 * @brief Exercise 14
 * @rst
 * Explain what happens in each of the if tests:
 *
 *   - ``if (42 = i)   // ...``
 *   - ``if (i = 42)   // ...``
 * @endrst
 */
void exercise_14(void);

/**
 * @brief Exercise 15
 * @rst
 * The following assignment is illegal. Why? How would you correct it?
 *
 *   - ``double dval; int ival; int *pi;``
 *   - ``dval = ival = pi = 0;``
 * @endrst
 */
void exercise_15(void);

/**
 * @brief Exercise 16
 * @rst
 * Although the following are legal, they probably do not behave as the programmer expects.
 * Why? Rewrite the expressions as you think they should be.
 *
 *   - ``if (p = getPtr() != 0)``
 *   - ``if (i = 1024)``
 * @endrst
 */
void exercise_16(void);

/**
 * @brief Exercise 17
 * @rst
 * Explain the difference between prefix and postfix increment.
 * @endrst
 */
void exercise_17(void);

/**
 * @brief Exercise 18
 * @rst
 * What would happen in the following loop:
 *
 * .. code-block:: cpp
 *
 *     auto pbeg = v.begin();
 *     while (pbeg != v.end() && *beg >= 0)
 *         cout << *pbeg++ << endl;
 * 
 * If the while loop that prints the elements from a vector used the prefix increment operator?
 * @endrst
 */
void exercise_18(void);

/**
 * @brief Exercise 18
 * @rst
 * What would happen in the following loop:
 *
 * .. code-block:: cpp
 *
 *     auto pbeg = v.begin();
 *     while (pbeg != v.end() && *beg >= 0)
 *         cout << *pbeg++ << endl;
 * 
 * If the while loop that prints the elements from a vector used the prefix increment operator?
 * @endrst
 */
void exercise_18(void);

/**
 * @brief Exercise 19
 * @rst
 * Given that ptr points to an int, that vec is a ``vector<int>``, and that ``ival`` is an ``int``, explain
 * the behaviour of each of these expressions. Which, if any, are likely to be incorrect? Why?
 * How might each be corrected?
 *
 *   - ``ptr != 0 && *ptr++``
 *   - ``ival++ && ival``
 *   - ``vec[ival++] <= vec[ival]``
 * @endrst
 */
void exercise_19(void);

}

#endif /* CPP_PRIMER_CHAPTER_4_HPP */

/******************************************************************************************************END OF FILE*****/
