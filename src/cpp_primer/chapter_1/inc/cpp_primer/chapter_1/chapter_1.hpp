/**
 ***********************************************************************************************************************
 * @file        chapter_1.hpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#ifndef CPP_PRIMER_CHAPTER_1_HPP
#define CPP_PRIMER_CHAPTER_1_HPP

/**
 * @brief Namespace for chapter #1.
 */
namespace CppPrimer::Chapter1
{

/**
 * @brief Exercise 1
 * @rst
 * Review the documentation for your compiler and determine what file naming convention it uses.
 * Compile and run the main program from page 2.
 * @endrst
 */
void exercise_1(void);

/**
 * @brief Exercise 2
 * @rst
 * Change the program to return -1. A return value of -1 is often treated as an indicator that the program failed.
 * Recompile and rerun your program to see how your system treats a failure indicator from main.
 * @endrst
 */
void exercise_2(void);

/**
 * @brief Exercise 3
 * @rst
 * Write a program to print ``Hello, World`` on the standard output.
 * @endrst
 */
void exercise_3(void);

/**
 * @brief Exercise 4
 * @rst
 * Our program used the addition operator, ``+``, to add two numbers. Write a program that uses the multiplication
 * operator, ``*``, to print the product instead.
 * @endrst
 */
void exercise_4(void);

/**
 * @brief Exercise 5
 * @rst
 * We wrote the output in one large statement. Rewrite the program to use a separate statement to print
 * each operand.
 * @endrst
 */
void exercise_5(void);

/**
 * @brief Exercise 6
 * @rst
 * Explain whether the following program fragment is legal.
 *
 * .. code-block:: cpp
 * 
 *     std::cout << "The sum of " << v1;
 *               << " and " << v2;
 *               << " is " << v1 + v2 << std::endl;
 *
 * If the program is legal, what does it do? If the program is not legal, why not? How would you ﬁx it?
 * @endrst
 */
void exercise_6(void);

/**
 * @brief Exercise 9
 * @rst
 * Write a program that uses a while to sum the numbers from 50 to 100.
 * @endrst
 */
void exercise_9(void);

/**
 * @brief Exercise 10
 * @rst
 * In addition to the ``++`` operator that adds 1 to its operand, there is a decrement operator, ``--``,
 * that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.
 * @endrst
 */
void exercise_10(void);

/**
 * @brief Exercise 11
 * @rst
 * Write a program that prompts the user for two integers.
 * Print each number in the range speciﬁed by those two integers.
 * @endrst
 */
void exercise_11(void);

/**
 * @brief Exercise 12
 * @rst
 * What does the following for loop do? What is the ﬁnal value of sum?
 * @endrst
 */
void exercise_12(void);

/**
 * @brief Exercise 13
 * @rst
 * Rewrite exercises 9 and 10 using for loops.
 * @endrst
 */
void exercise_13(void);

/**
 * @brief Exercise 16
 * @rst
 * Write your own version of a program that prints the sum of a set of integers read from cin.
 * @endrst
 */
void exercise_16(void);

/**
 * @brief Exercise 20
 * @rst
 * Use the file ``Sales_Item.h`` to write a program that reads a set of book sales transactions, writing each
 * transaction to the standard output. A transaction has the format *<ISBN> <SOLD> <UNIT_PRICE>*, for example
 * *0-201-78345-X 3 20.00*.
 * @endrst
 */
void exercise_20(void);

/**
 * @brief Exercise 21
 * @rst
 * Write a program that reads two ``Sales_item`` objects that have the same ISBN and produces their sum.
 * @endrst
 */
void exercise_21(void);

/**
 * @brief Exercise 22
 * @rst
 * Write a program that reads several transactions for the same ISBN.
 * Write the sum of all the transactions that were read.
 * @endrst
 */
void exercise_22(void);

/**
 * @brief Exercise 23
 * @rst
 * Write a program that reads several transactions and counts how many transactions occur for each ISBN.
 * @endrst
 */
void exercise_23(void);

/**
 * @brief Exercise 24
 * @rst
 * Test the previous program by giving multiple transactions representing multiple ISBNs.
 * The records for each ISBN should be grouped together.
 * @endrst
 */
void exercise_24(void);

/**
 * @brief Exercise 25
 * @rst
 * Using the ``Sales_item.h`` header from the Web site, compile and execute the bookstore program presented
 * in this section.
 * @endrst
 */
void exercise_25(void);

}

#endif /* CPP_PRIMER_CHAPTER_1_HPP */

/******************************************************************************************************END OF FILE*****/
