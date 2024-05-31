/**
 ***********************************************************************************************************************
 * @file        stack.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
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
