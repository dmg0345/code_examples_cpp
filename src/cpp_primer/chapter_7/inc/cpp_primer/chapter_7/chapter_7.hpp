/**
 ***********************************************************************************************************************
 * @file        chapter_7.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_PRIMER_CHAPTER_7_HPP
#define CPP_PRIMER_CHAPTER_7_HPP

/**
 * @brief Namespace for chapter #7.
 */
namespace CppPrimer::Chapter7
{

/**
 * @brief Exercise 1
 * @rst
 * Write your own version of the transacion-processing program below using you own ``Sales_data`` class.
 * 
 * .. code-block:: cpp
 *
 *     #include <iostream>
 *     #include "Sales_item.h"
 *     
 *     int main()
 *     {
 *         Sales_item total;
 *         if (std::cin >> total)
 *         {
 *             Sales_item trans;
 *             while (std::cin >> trans)
 *             {
 *                 if (total.isbn() == trans.isbn())
 *                 {
 *                     total += trans;
 *                 }
 *                 else
 *                 {
 *                     std::cout << total << std::endl;
 *                     total = trans;
 *                 }
 *             }
 *             std::cout << total < std::endl;
 *         }
 *         else
 *         {
 *             std::cerr << "No data?!" << std::endl;
 *             return -1;
 *         }
 *         return 0;
 *     }
 * @endrst
 */
void exercise_1(void);

/**
 * @brief Exercise 3
 * @rst
 * Revise your program from exercise 7.1 to use these members.
 * @endrst
 */
void exercise_3(void);

/**
 * @brief Exercise 5
 * @rst
 * Provide operations in your ``Person`` class to return the name and address.
 * Should these functions be ``const``? Explain you choice.
 * @endrst
 */
void exercise_5(void);

/**
 * @brief Exercise 7
 * @rst
 * Rewrite the transaction-processing program you wrote for the exercise 7.3 to use the new ``add``, ``read``
 * and ``print`` functionality.
 * @endrst
 */
void exercise_7(void);

/**
 * @brief Exercise 8
 * @rst
 * Add operations to read and print ``Person`` objects to your ``Person`` class.
 * @endrst
 */
void exercise_8(void);

/**
 * @brief Exercise 10
 * @rst
 * What does the condition in the following if statement do?
 *
 * .. code-block:: cpp
 *
 *     if (read(read(cin, data1), data2))
 * @endrst
 */
void exercise_10(void);

/**
 * @brief Exercise 16
 * @rst
 * What, if any, are the constraints on where and how often an access specifier may appear inside a class definition?
 * What kinds of members should be defined after a public specifier? What kinds should be private?
 * @endrst
 */
void exercise_16(void);

/**
 * @brief Exercise 17
 * @rst
 * What, if any, are the differences between using ``class`` or ``struct``?
 * @endrst
 */
void exercise_17(void);

/**
 * @brief Exercise 18
 * @rst
 * What is encapsulation? Why is it useful?
 * @endrst
 */
void exercise_18(void);

/**
 * @brief Exercise 20
 * @rst
 * When are friends useful? Discuss the pros and cons of using friends.
 * @endrst
 */
void exercise_20(void);

/**
 * @brief Exercise 25
 * @rst
 * Can ``Screen`` safely rely on the default versions of copy and assignment? If so, why? If not, why not?
 * @endrst
 */
void exercise_25(void);

/**
 * @brief Exercise 27
 * @rst
 * Add the ``move``, ``set``, and ``display`` operations to your version of ``Screen``.
 * Test your class by executing the following code:
 *
 * .. code-block:: cpp
 *
 *     Screen myScreen(5, 5, 'X');
 *     myScreen.move(4, 0).set('#').display(cout);
 *     cout << "\n";
 *     myScreen.display(cout);
 *     cout << "\n";
 * @endrst
 */
void exercise_27(void);

/**
 * @brief Exercise 28
 * @rst
 * What would happen in the previous exercise if the return type of ``move``, ``set``, and ``display`` was
 * ``Screen`` rather than ``Screen&``?
 * @endrst
 */
void exercise_28(void);

/**
 * @brief Exercise 29
 * @rst
 * Revise your ``Screen`` class so that ``move``, ``set``, and ``display`` return ``Screen`` and check your
 * prediction from the previous exercise.
 * @endrst
 */
void exercise_29(void);

/**
 * @brief Exercise 30
 * @rst
 * It is legal but redundant to refer to members through the this pointer. Discuss the pros and cons of
 * explicitly using the this pointer to access members.
 * @endrst
 */
void exercise_30(void);

/**
 * @brief Exercise 32
 * @rst
 * Define your own versions of ``Screen`` and ``Window_mgr`` in which clear is a member of
 * ``Window_mgr`` and a friend of ``Screen``.
 * @endrst
 */
void exercise_32(void);

/**
 * @brief Exercise 33
 * @rst
 * Given the following class:
 *
 * .. code-block:: cpp
 *
 *     class Screen
 *     {
 *         public:
 *             typedef std::string::size_type pos;
 *             pos Screen::size() const;
 *         private:
 *             pos height = 0, width = 0;
 *     }
 *
 * What would happen if we gave ``Screen`` a size member defined as follows? Fix any problems you identify:
 *
 * .. code-block:: cpp
 *
 *     pos Screen::size() const
 *     {
 *         return height * width;
 *     }
 * @endrst
 */
void exercise_33(void);

/**
 * @brief Exercise 34
 * @rst
 * What would happen if we put the ``typedef`` of ``pos`` in the ``Screen`` class definition below at the
 * last line in the class?
 *
 * .. code-block:: cpp
 *
 *     class Screen
 *     {
 *         public:
 *             typedef std::string::size_type pos;
 *             void dummy_fcn(pos height) { cursor = width * height; }
 *         private:
 *             pos cursor = 0;
 *             pos height = 0, width = 0;
 *     }
 * @endrst
 */
void exercise_34(void);

/**
 * @brief Exercise 35
 * @rst
 * Explain the following code, indicating which definition of ``Type`` or ``initVal`` is used for each
 * use of these names. Say how you would fix any errors.
 *
 * .. code-block:: cpp
 *
 *     typedef string Type;
 *     Type initVal();
 *     class Exercise
 *     {
 *         public:
 *             typedef double Type;
 *             Type setVal(Type);
 *             Type initVal();
 *         private:
 *             int val;
 *     }
 * 
 *     Type Exercise::setVal(Type parm)
 *     {
 *         val = parm + initVal();
 *         return val;
 *     }
 * @endrst
 */
void exercise_35(void);

/**
 * @brief Exercise 36
 * @rst
 * The following initializer is in error. Identify and fix the problem.
 *
 * .. code-block:: cpp
 *
 *     struct X
 *     {
 *         X(int i, int j) : base(i), rem(base % j) { }
 *         int rem, base;
 *     }
 * @endrst
 */
void exercise_36(void);

/**
 * @brief Exercise 37
 * @rst
 * Using the version of ``Sales_data`` below:
 *
 * .. code-block:: cpp
 *
 *     class Sales_data
 *     {
 *         public:
 *             Sales_data(void) = default;
 *             Sales_data(std::string s = "") : bookNo(s) { }
 *             Sales_data(std::string s, unsigned cnt, double rev) : bookNo(s), units_sold(cnt), revenue(rev * cnt) { }
 *             Sales_data(std::istream &is) { read(is, *this); }
 *         private:
 *             std::string bookNo;
 *             unsigned cnt;
 *             double revenue;
 *     };
 *
 *
 * Determine which constructor is used to initialize each of the following variables and list the values of
 * the data members in each object:
 *
 * .. code-block:: cpp
 *
 *     Sales_data first_item(cin);
 *     int main()
 *     {
 *         Sales_data next;
 *         Sales_data last("9-999-99999-9");
 *     }
 * @endrst
 */
void exercise_37(void);

/**
 * @brief Exercise 38
 * @rst
 * We might want to supply ``cin`` as a default argument to the constructor that takes an ``istream&``. Write the
 * constructor declaration that uses ``cin`` as a default argument.
 * @endrst
 */
void exercise_38(void);

/**
 * @brief Exercise 39
 * @rst
 * Would it be legal for both the constructor that takes a string and the one that takes an ``istream&`` to have
 * default arguments? If not, why not?
 * @endrst
 */
void exercise_39(void);

/**
 * @brief Exercise 40
 * @rst
 * Determine what data is needed for the following class: ``Vehicle``, provide an appropiate set of constructors.
 * @endrst
 */
void exercise_40(void);

/**
 * @brief Exercise 54
 * @rst
 * Should the members of ``Debug`` that begin with ``set_`` be declared as ``constexpr``? If not, why not?
 * See the debug class below:
 *
 * .. code-block:: cpp
 *
 *     class Debug
 *     {
 *         public:
 *             constexpr Debug(bool b = true) : hw(b), io(b), other(b) { }
 *             constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) { }
 *             constexpr bool any() { return hw || io || other; }
 *             void set_io(bool b) { io = b; }
 *             void set_hw(bool b) { hw = b; }
 *             void set_other(bool b) { hw = b; }
 *         private:
 *             bool hw, io, other;
 *     };
 * @endrst
 */
void exercise_54(void);

/**
 * @brief Exercise 55
 * @rst
 * Is the ``Data`` class below a literal class?
 *
 * .. code-block:: cpp
 *
 *     struct Data
 *     {
 *         int ival;
 *         string s;
 *     };
 *
 * If not, why not? If so, explain why it is literal.
 * @endrst
 */
void exercise_55(void);

/**
 * @brief Exercise 56
 * @rst
 * What is a static class member? What are the advantages of static members? How do they differ from ordinary members.
 * @endrst
 */
void exercise_56(void);

/**
 * @brief Exercise 57
 * @rst
 * Write your own version of the ``Account`` class.
 * @endrst
 */
void exercise_57(void);

/**
 * @brief Exercise 58
 * @rst
 * Which, if any, of the following static data member declarations and definitions are errors? Explain why.
 *
 * .. code-block:: cpp
 *
 *     // example.h
 *     class Example
 *     {
 *         public:
 *             static double rate = 6.5;
 *             static const int vecSize = 20;
 *             static vector<double> vec(vecSize);
 *     };
 * 
 *     // example.c
 *     #include "example.h"
 *     double Example::rate;
 *     vector<double> Example::vec;
 * @endrst
 */
void exercise_58(void);

}

#endif /* CPP_PRIMER_CHAPTER_7_HPP */

/******************************************************************************************************END OF FILE*****/
