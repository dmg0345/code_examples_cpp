/**
 ***********************************************************************************************************************
 * @file        hash_table.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_HASH_TABLE_HPP
#define CPP_DSA_HASH_TABLE_HPP

#include "priv/linked_list.hpp"

/**
 * @brief C++ hash table namespace
 * @rst
 * Implements a hash table based on a linked list.
 * @endrst
 */
namespace CppDSA::HashTable
{ }

/**
 * @brief C++ hash table base namespace
 * @rst
 * Base and common items for hash tables.
 * @endrst
 */
namespace CppDSA::HashTable::Base
{ }

/**
 * @brief C++ hash table linked list namespace
 * @rst
 * Hash table with `std::forward_list` implementation.
 * @endrst
 */
namespace CppDSA::HashTable::LinkedList
{ }

#endif /* CPP_DSA_HASH_TABLE_HPP */

/******************************************************************************************************END OF FILE*****/
