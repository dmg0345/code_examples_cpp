/**
 ***********************************************************************************************************************
 * @file        linked_list.hpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
