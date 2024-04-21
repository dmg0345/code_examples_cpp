/**
 ***********************************************************************************************************************
 * @file        chapter_3.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_PRIMER_CHAPTER_3_HPP
#define CPP_PRIMER_CHAPTER_3_HPP

/**
 * @brief Namespace for chapter #3.
 */
namespace CppPrimer::Chapter3
{

/**
 * @brief Exercise 1
 * @rst
 * Rewrite the exercises 1.9, 1.10, 1.11 with appropriate using declarations.
 * @endrst
 */
void exercise_1(void);

/**
 * @brief Exercise 2
 * @rst
 * Write a program to read the standard input a line at a time. Modify your program to read a word at a time.
 * @endrst
 */
void exercise_2(void);

/**
 * @brief Exercise 4
 * @rst
 * Write a program to read two strings and report whether the strings are equal.
 * If not, report which of the two is larger. Now, change the program to report whether the strings have the
 * same length, and if not, report which is longer.
 * @endrst
 */
void exercise_4(void);

/**
 * @brief Exercise 5
 * @rst
 * Write a program to read strings from the standard input, concatenating what is read into one large string.
 * Print the concatenated string. Next, change the program to separate adjacent input strings by a space.
 * @endrst
 */
void exercise_5(void);

/**
 * @brief Exercise 6
 * @rst
 * Use a range for to change all the characters in a string to ``X``.
 * @endrst
 */
void exercise_6(void);

/**
 * @brief Exercise 7
 * @rst
 * What would happen if you define the loop control variable in the previous exercise as type ``char``?
 * Predict the results and then change your program to use a ``char`` to see if you were right.
 * @endrst
 */
void exercise_7(void);

/**
 * @brief Exercise 8
 * @rst
 * Rewrite the program in the first exercise, first using a ``while`` and again using a traditional ``for`` loop.
 * Which of the three approaches do you prefer and why?
 * @endrst
 */
void exercise_8(void);

/**
 * @brief Exercise 9
 * @rst
 * What does the following program do? Is it valid? If not, why not?
 *
 * .. code-block:: cpp
 *
 *     string s;
 *     cout << s[0] << endl;
 * @endrst
 */
void exercise_9(void);

/**
 * @brief Exercise 10
 * @rst
 * Write a program that reads a string of characters including punctuation and writes what was read but with
 * the punctuation removed.
 * @endrst
 */
void exercise_10(void);

/**
 * @brief Exercise 11
 * @rst
 * Is the following range for legal? If so, what is the type of ``c``?
 *
 * .. code-block:: cpp
 *
 *     const string c = "Keep out!";
 *     for (auto &c : s) {  }
 * @endrst
 */
void exercise_11(void);

/**
 * @brief Exercise 12
 * @rst
 * Which, if any, of the following vector definitions are in error? For those that are legal, explain what
 * the definition does. For those that are not legal, explain why they are illegal.
 *
 *   - ``vector<vector<int>> ivec;``
 *   - ``vector<string> svec = ivec;``
 *   - ``vector<string> svec(10, "null");``
 * @endrst
 */
void exercise_12(void);

/**
 * @brief Exercise 13
 * @rst
 * How many elements are there in each of the following vectors? What are the values of the elements?
 *
 *   - ``vector<int> v1;``
 *   - ``vector<int> v2(10);``
 *   - ``vector<int> v3(10, 42);``
 *   - ``vector<int> v4{10};``
 *   - ``vector<int> v5{10, 42};``
 *   - ``vector<string> v6{10};``
 *   - ``vector<string> v7{10, "hi"};``
 * @endrst
 */
void exercise_13(void);

/**
 * @brief Exercise 14
 * @rst
 * Write a program to read a sequence of integers from ``cin`` and store those values in a vector.
 * @endrst
 */
void exercise_14(void);

/**
 * @brief Exercise 15
 * @rst
 * Repeat the previous program but read strings this time.
 * @endrst
 */
void exercise_15(void);

/**
 * @brief Exercise 17
 * @rst
 * Read a sequence of words from ``cin`` and store the values a vector. After you've read all the words, process
 * the vector and change each word to uppercase. Print the transformed elements, eight words to a line.
 * @endrst
 */
void exercise_17(void);

/**
 * @brief Exercise 18
 * @rst
 * Is the following program legal? If not, how might you fix it?
 * 
 * .. code-block:: cpp
 *
 *     vector<int> ivec;
 *     ivec[0] = 42;
 * @endrst
 */
void exercise_18(void);

/**
 * @brief Exercise 19
 * @rst
 * List three ways to define a vector and give it ten elements, each with the value 42.
 * Indicate whether there is a preferred way to do so and why.
 * @endrst
 */
void exercise_19(void);

/**
 * @brief Exercise 20
 * @rst
 * Read a set of integers into a vector. Print the sum of each pair of adjacent elements. Change your program so
 * that it prints the sum of the first and last elements, followed by the sum of the second and second-to-last,
 * and so on.
 * @endrst
 */
void exercise_20(void);

/**
 * @brief Exercise 21
 * @rst
 * Redo exercise 3.16 with iterators.
 * @endrst
 */
void exercise_21(void);

/**
 * @brief Exercise 22
 * @rst
 * Revise the loop that printed the first paragraph in text to instead change the elements in text that correspond
 * to the first paragraph to all uppercase. After you've updated text, print its contents.
 *
 * .. code-block:: cpp
 *
 *     // Print each line in text up to the first blank line.
 *     for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it)
 *         cout << *it << endl;
 * @endrst
 */
void exercise_22(void);

/**
 * @brief Exercise 23
 * @rst
 * Write a program to create a vector with ten ``int`` elements. Using an iterator, assign each element a value
 * that is twice the current value. Test your program by printing the vector.
 * @endrst
 */
void exercise_23(void);

/**
 * @brief Exercise 24
 * @rst
 * Redo exercise 3.20 using iterators.
 * @endrst
 */
void exercise_24(void);

/**
 * @brief Exercise 25
 * @rst
 * Rewrite the following program using iterators instead of subscripts.
 *
 * .. code-block:: cpp
 *
 *     vector<unsigned> scores(11, 0);
 *     unsigned grade;
 *     while (cin >> grade)
 *     {
 *         if (grade <= 100)
 *         {
 *             ++scores[grade/10];
 *         }
 *     }
 * @endrst
 */
void exercise_25(void);

/**
 * @brief Exercise 26
 * @rst
 * In the binary search program below, why did we write ``mid = beg + (end - beg) / 2;`` instead
 * of ``mid = (beg + end) / 2;``.
 *
 * .. code-block:: cpp
 *
 *     auto beg = text.begin(), end = text.end();
 *     auto mid = text.begin() + (end - beg) / 2;
 *     while (mid != end && *mid != sought)
 *     {
 *         if (sought < *mid)
 *         {
 *             end = mid;
 *         }
 *         else
 *         {
 *             beg = mid + 1;
 *         }
 *         mid = beg + (end - beg) / 2;
 *     }
 * @endrst
 */
void exercise_26(void);

/**
 * @brief Exercise 27
 * @rst
 * Assuming ``txt_size`` is a function that takes no arguments and returns an ``int`` value,
 * which of the following definitions are illegal? Explain why.
 *
 *   - ``unsigned buf_size = 1024; int ia[buf_size];``
 *   - ``int ia[4 * 7 - 14];``
 *   - ``int ia[txt_size()];``
 *   - ``char st[11] = "fundamental";``
 * @endrst
 */
void exercise_27(void);

/**
 * @brief Exercise 28
 * @rst
 * What are the values in the following arrays?
 *
 * .. code-block:: cpp
 *
 *     string sa[10];
 *     int ia[10];
 *     int main()
 *     {
 *         string sa2[10];
 *         int ia2[10];
 *     }
 * @endrst
 */
void exercise_28(void);

/**
 * @brief Exercise 29
 * @rst
 * List some of the drawbacks of using an array instead of a vector.
 * @endrst
 */
void exercise_29(void);

/**
 * @brief Exercise 31
 * @rst
 * Write a program to define an array of ten ints. Give each element the same value as its position in the array.
 * @endrst
 */
void exercise_31(void);

/**
 * @brief Exercise 32
 * @rst
 * Copy the array you defined in the previous exercise into another array. Rewrite your program to use vectors.
 * @endrst
 */
void exercise_32(void);

/**
 * @brief Exercise 33
 * @rst
 * What would happen if we did not initialize the scores array in this program:
 *
 * .. code-block::
 *
 *     unsigned int scores[11] = {};
 *     unsigned grade;
 *     while (cin >> grade)
 *     {
 *         if (grade <= 100)
 *         {
 *             ++scores[grade/10];
 *         }
 *     }
 * @endrst
 */
void exercise_33(void);

/**
 * @brief Exercise 34
 * @rst
 * Given that ``p1`` and ``p2`` point to elements in the same array, what does the following code do?
 * Are there values of ``p1`` or ``p2`` that make this code illegal?
 *
 * .. code-block::
 *
 *     p1 += p2 - p1;
 * @endrst
 */
void exercise_34(void);

/**
 * @brief Exercise 35
 * @rst
 * Using pointers, write a program to set the elements in an array to zero.
 * @endrst
 */
void exercise_35(void);

/**
 * @brief Exercise 36
 * @rst
 * Write a program to compare two arrays for equality. Write a similar program to compare two vectors.
 * @endrst
 */
void exercise_36(void);

/**
 * @brief Exercise 37
 * @rst
 * What does the following program do?
 *
 * .. code-block:: cpp
 * 
 *     const char ca[] = {'h', 'e', 'l', 'l', 'o'};
 *     const char *cp = ca;
 *     while (*cp)
 *     {
 *         cout << *cp << endl;
 *         ++cp;
 *     }
 * @endrst
 */
void exercise_37(void);

/**
 * @brief Exercise 38
 * @rst
 * In this section, we noted that it was not only illegal but meaningless to try to add two pointers.
 * Why would adding two pointers be meaningless?
 * @endrst
 */
void exercise_38(void);

/**
 * @brief Exercise 39
 * @rst
 * Write a program to compare two strings. Now write a program to compare the values of two C-style character strings.
 * @endrst
 */
void exercise_39(void);

/**
 * @brief Exercise 40
 * @rst
 * Write a program to define two character arrays initialized from string literals. Now define a third character
 * array to hold the concatenation of the two arrays. Use ``strcpy`` and ``strcat`` to
 * copy the two arrays into the third.
 * @endrst
 */
void exercise_40(void);

/**
 * @brief Exercise 41
 * @rst
 * Write a program to initialize a vector from an array of ints.
 * @endrst
 */
void exercise_41(void);

/**
 * @brief Exercise 42
 * @rst
 * Write a program to copy a vector of ints into an array of ints.
 * @endrst
 */
void exercise_42(void);

/**
 * @brief Exercise 43
 * @rst
 * Write three different versions of a program to print the elements of ``ia``.
 * One version should use a range ``for`` to manage the iteration, the other two should use an ordinary ``for`` loop
 * in one case using subscripts and in the other using pointers.
 * In all three programs write all the types directly. That is, do not use a type alias, ``auto``, or ``decltype`` to
 * simplify the code.
 * @endrst
 */
void exercise_43(void);

/**
 * @brief Exercise 44
 * @rst
 * Rewrite the programs from the previous exercises using a type alias for the type of the loop control variables.
 * @endrst
 */
void exercise_44(void);

/**
 * @brief Exercise 45
 * @rst
 * Rewrite the programs again, this time using ``auto``.
 * @endrst
 */
void exercise_45(void);

}

#endif /* CPP_PRIMER_CHAPTER_3_HPP */

/******************************************************************************************************END OF FILE*****/
