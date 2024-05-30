/**
 ***********************************************************************************************************************
 * @file        linked_list.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_LINKED_LIST_HPP
#define CPP_DSA_LINKED_LIST_HPP

#include "priv/singly.hpp"
#include "priv/doubly.hpp"

/**
 * @brief C++ Linked Lists namespace
 * @rst
 * Implements a custom singly linked list and doubly linked list.
 * @endrst
 */
namespace CppDSA::LinkedList
{ }

/**
 * @brief C++ Linked Lists Base namespace
 * @rst
 * Base and common items for linked lists.
 * @endrst
 */
namespace CppDSA::LinkedList::Base
{ }

/**
 * @brief C++ Linked Lists Singly namespace
 * @rst
 * Singly linked list implementation, comparable to `std::forward_list`.
 * @endrst
 */
namespace CppDSA::LinkedList::Singly
{ }

/**
 * @brief C++ Linked Lists Doubly namespace
 * @rst
 * Doubly linked list implementation, comparable to `std::list`.
 * @endrst
 */
namespace CppDSA::LinkedList::Doubly
{ }

#endif /* CPP_DSA_LINKED_LIST_HPP */

/******************************************************************************************************END OF FILE*****/
