/**
 ***********************************************************************************************************************
 * @file        stack.hpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_STACK_HPP
#define CPP_DSA_STACK_HPP

#include "priv/vector.hpp"
#include "priv/list.hpp"

/**
 * @brief C++ stack namespace
 * @rst
 * Implements a stack based on `std::vector` and a stack based on `std::list`.
 * @endrst
 */
namespace CppDSA::Stack
{ }

/**
 * @brief C++ stack base namespace
 * @rst
 * Base and common items for stacks.
 * @endrst
 */
namespace CppDSA::Stack::Base
{ }

/**
 * @brief C++ stack vector namespace
 * @rst
 * Stack with `std::vector` implementation.
 * @endrst
 */
namespace CppDSA::Stack::Vector
{ }

/**
 * @brief C++ stack linked list namespace
 * @rst
 * Stack with `std::list` implementation.
 * @endrst
 */
namespace CppDSA::Stack::List
{ }

#endif /* CPP_DSA_STACK_HPP */

/******************************************************************************************************END OF FILE*****/
