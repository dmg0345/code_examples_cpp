/**
 ***********************************************************************************************************************
 * @file        chapter_5.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_PRIMER_CHAPTER_5_HPP
#define CPP_PRIMER_CHAPTER_5_HPP

/**
 * @brief Namespace for chapter #5.
 */
namespace CppPrimer::Chapter5
{

/**
 * @brief Exercise 1
 * @rst
 * What is a ``null`` statement? When might you use a ``null`` statement?
 * @endrst
 */
void exercise_1(void);

/**
 * @brief Exercise 2
 * @rst
 * What is a block? When might you might use a block?
 * @endrst
 */
void exercise_2(void);

/**
 * @brief Exercise 3
 * @rst
 * Using the comma operator to rewrite the following loop so that it no longer requires a block.
 *
 * .. code-block:: cpp
 *
 *     while (val <= 10)
 *     {
 *         sum += val;
 *         ++val;
 *     }
 *
 * Explain whether this rewrite improves or diminishes the readability of this code.
 * @endrst
 */
void exercise_3(void);

/**
 * @brief Exercise 4
 * @rst
 * Explain each of the following examples, and correct any problems you detect.
 *
 *   - ``while (string::iterator iter != s.end()) { ... }``
 *   - ``while (bool status = find(word)) { ... } if (!status) { ... }``
 * @endrst
 */
void exercise_4(void);

/**
 * @brief Exercise 5
 * @rst
 * Using an if-else statement, write your own version of the program to generate the letter grade from a numeric grade.
 * @endrst
 */
void exercise_5(void);

/**
 * @brief Exercise 6
 * @rst
 * Rewrite your grading program to use the conditional operator in place of the if-else statement.
 * @endrst
 */
void exercise_6(void);

/**
 * @brief Exercise 7
 * @rst
 * Correct the errors in each of the following code fragments:
 *
 *   - .. code-block:: cpp
 *     
 *         if (ival1 != ival2)
 *             ival1 = ival2
 *         else ival1 = ival2 = 0;
 *   - .. code-block:: cpp
 *     
 *         if (ival < minval)
 *             minval = ival;
 *             occurs = 1;
 *   - .. code-block:: cpp
 *     
 *         if (int ival = get_value())
 *             cout << "ival = " << ival << endl;
 *         if (!ival)
 *             cout << "ival = 0\n";
 *   - .. code-block:: cpp
 *     
 *         if (ival = 0)
 *             ival = get_value();
 * @endrst
 */
void exercise_7(void);

/**
 * @brief Exercise 8
 * @rst
 * What is a "dangling else"? How are else clauses resolved in C++?
 * @endrst
 */
void exercise_8(void);

/**
 * @brief Exercise 9
 * @rst
 * Write a program using a series of if statements to count the number of vowels in text read from ``cin``.
 * @endrst
 */
void exercise_9(void);

/**
 * @brief Exercise 10
 * @rst
 * There is one problem with our vowel-counting program as we've implemented it: it doesn't count capital letters
 * as vowels. Write a program that counts both lower - and uppercase letters as the appropriate vowel - that is,
 * your program should count both ``a`` and ``A`` as part of ``aCnt``, and so forth.
 * @endrst
 */
void exercise_10(void);

/**
 * @brief Exercise 11
 * @rst
 * Modify our vowel-counting program so that it also counts the number of blank spaces, tabs and newlines read.
 * @endrst
 */
void exercise_11(void);

/**
 * @brief Exercise 12
 * @rst
 * Modify our vowel-counting program so that if counts the number of occurrences of the following two-character
 * sequences: ``ff``, ``fl`` and ``fi``.
 * @endrst
 */
void exercise_12(void);

/**
 * @brief Exercise 13
 * @rst
 * Each of the programs below contain a common programming error. Identify and correct each error.
 *
 *   - .. code-block:: cpp
 *     
 *         unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
 *         char chr = next_text();
 *         switch (chr)
 *         {
 *             case 'a':
 *                 aCnt++;
 *             case 'e':
 *                 eCnt++;
 *             default:
 *                 iouCnt++;
 *         }
 *   - .. code-block:: cpp
 *     
 *         unsigned index = some_value();
 *         switch (index)
 *         {
 *             case 1:
 *                 int ix = get_value();
 *                 ivec[ix] = index;
 *                 break;
 *             default:
 *                 ix = ivec.size() - 1;
 *                 ivec[ix] = index;
 *         }
 *   - .. code-block:: cpp
 *     
 *         unsigned eventCnt = 0, oddCnt = 0;
 *         int digit = get_num() % 10;
 *         switch (digit)
 *         {
 *             case 1, 3, 5, 7, 9:
 *                 oddCnt++;
 *                 break;
 *             case 2, 4, 6, 8, 10:
 *                 evenCnt++;
 *                 break;
 *         }
 *   - .. code-block:: cpp
 *     
 *         unsigned ival = 512, jval = 1024, kval = 4096;
 *         unsigned bufsize;
 *         unsigned swt = get_bufCnt();
 *         switch (swt)
 *         {
 *             case ival:
 *                 bufsize = ival * sizeof(int);
 *                 break;
 *             case jval:
 *                 bufsize = jval * sizeof(int);
 *                 break;
 *             case kval:
 *                 bufsize = kval * sizeof(int);
 *                 break;
 *         }
 * @endrst
 */
void exercise_13(void);

/**
 * @brief Exercise 14
 * @rst
 * Write a program to read strings from the standard input looking for duplicate words.
 * The program should find places in the input where one word is followed immediately by itself.
 * Keep track of the largest number of times a single repetition occurs and which word is repeated.
 * Print the maximum number of duplicates, or else print a message saying that no word was repeated.
 *
 * For example, if the input is:
 *
 *   - ``how now now now brown cow cow``
 * 
 * The output should indicate that the word now occurred three times.
 * @endrst
 */
void exercise_14(void);

/**
 * @brief Exercise 15
 * @rst
 * Explain each of the following loops. Correct any problems you detect.
 *
 *   - ``for (int ix = 0; ix != sz; ++ix) { ... } if (ix != sz)``
 *   - ``int ix; for (ix != sz; ++ix) { ... }``
 *   - ``for (int ix = 0; ix != sz; ++ix, ++sz) { ... }``
 * @endrst
 */
void exercise_15(void);

/**
 * @brief Exercise 16
 * @rst
 * The while loop is particularly good at executing while some condition holds; for example, when we need to read
 * values until end-of-file.
 * The for loop is generally thought of as a step loop: An index steps through a range of values in a collection.
 * Write an idiomatic use of each loop and then rewrite each using the other loop construct.
 * If you could use only one loop, which would you choose? Why?
 * @endrst
 */
void exercise_16(void);

/**
 * @brief Exercise 17
 * @rst
 * Given two vectors of ints, write a program to determine whether one vector is a prefix of the other. For
 * vectors of unequal length, compare the number of elements of the smaller vector.
 * For example, given the vectors containing 0, 1, 1 and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program
 * should return true.
 * @endrst
 */
void exercise_17(void);

/**
 * @brief Exercise 18
 * @rst
 * Explain each of the following loops. Correct any problems you detect.
 *
 *   - .. code-block:: cpp
 *     
 *         do
 *         {
 *             int v1, v2;
 *             cout << "Please enter two numbers to sum:" ;
 *             if (cin >> v1 >> v2)
 *                 cout << "Sum is: " << v1 + v2 << endl;
 *         } while (cin);
 *   - ``do { } while (int ival = get_response());``
 *   - ``do { int ival = get_response(); } while (ival);``
 * @endrst
 */
void exercise_18(void);

/**
 * @brief Exercise 19
 * @rst
 * Write a program that uses a do while loop to repetitively request two strings from the user and report which
 * string is less than the other.
 * @endrst
 */
void exercise_19(void);

/**
 * @brief Exercise 20
 * @rst
 * Write a program to read a sequence of strings from the standard input until either the same word occurs twice
 * in succession or all the words have been read.
 * Use a while loop to read the text one word at a time. Use the break statement to terminate the loop if a word
 * occurs twice in succession. Print the word if it occurs twice in succession, or else print a message saying
 * that no word was repeated.
 * @endrst
 */
void exercise_20(void);

/**
 * @brief Exercise 21
 * @rst
 * Revise the program from the exercise in 5.5.1 so that it looks only for duplicated words that start with an
 * uppercase letter.
 * @endrst
 */
void exercise_21(void);

/**
 * @brief Exercise 22
 * @rst
 * The following example in this section that jumped back to begin could be better written using a loop.
 * Rewrite the code to eliminate the goto.
 * 
 * .. code-block::
 *
 *     begin:
 *         int sz = get_size();
 *         if (sz <= 0)
 *         {
 *             goto begin;
 *         }
 * @endrst
 */
void exercise_22(void);

/**
 * @brief Exercise 23
 * @rst
 * Write a program that reads two integers from the standard input and prints the result of dividing the first
 * number by the second.
 * @endrst
 */
void exercise_23(void);

/**
 * @brief Exercise 24
 * @rst
 * Revise your program to throw an exception if the second number is zero. Test your program with a zero input
 * to see what happens on your system if you don't catch an exception.
 * @endrst
 */
void exercise_24(void);

/**
 * @brief Exercise 25
 * @rst
 * Revise your program from the previous exercise to use a try block to catch the exception. The catch clause
 * should print a message to the user and ask them to supply a new number and repeat the code inside the try.
 * @endrst
 */
void exercise_25(void);

}

#endif /* CPP_PRIMER_CHAPTER_5_HPP */

/******************************************************************************************************END OF FILE*****/
