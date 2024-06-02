/**
 ***********************************************************************************************************************
 * @file        base.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_STACK_BASE_HPP
#define CPP_DSA_STACK_BASE_HPP

#include <type_traits>
#include <cstddef>

namespace CppDSA::Stack::Base
{

/**
 * @brief Stack node base class.
 * @tparam T Type of data in the node.
 */
template<typename T>
class NodeBase
{
public:
    /**
     * @brief Constructs a new node.
     * @param[in] data The data for the node.
     */
    NodeBase<T>(const T & data) : data(data) { }

    /**
     * @brief Default copy constructor.
     * @param[in] node The node to copy.
     */
    NodeBase<T>(const NodeBase<T> & node) = default;

    /**
     * @brief Default copy operator.
     * @param[in] node The node to copy.
     * @return The copied node.
     */
    NodeBase<T> & operator=(const NodeBase<T> & node) = default;

    /**
     * @brief Default move constructor.
     * @param[in] node The node to move.
     */
    NodeBase<T>(NodeBase<T> && node) noexcept = default;

    /**
     * @brief Default move operator.
     * @param[in] node The node to move.
     * @return The moved node.
     */
    NodeBase<T> & operator=(NodeBase<T> && node) noexcept = default;

    /**
     * @brief Destructor.
     */
    virtual ~NodeBase<T>() { }

    T data; /**< The data in the node. */
};

/**
 * @brief Stack base class.
 * @tparam T Type of the data in the stack.
 */
template<typename T>
class StackBase
{
public:
    /**
     * @brief Constructs a new stack.
     */
    StackBase<T>() { }

    /**
     * @brief Deleted copy constructor.
     * @param[in] stack The stack to copy.
     */
    StackBase<T>(const StackBase<T> & stack) = delete;

    /**
     * @brief Deleted copy operator.
     * @param[in] stack The stack to copy.
     * @return The copied stack.
     */
    StackBase<T> & operator=(const StackBase<T> & stack) = delete;

    /**
     * @brief Deleted move constructor.
     * @param[in] stack The stack to move.
     */
    StackBase<T>(StackBase<T> && stack) noexcept = delete;

    /**
     * @brief Deleted move operator.
     * @param[in] stack The stack to move.
     * @return The moved stack.
     */
    StackBase<T> & operator=(StackBase<T> && stack) noexcept = delete;

    /**
     * @brief Destructor.
     */
    virtual ~StackBase<T>() { }

    /**
     * @brief Pushes a new node to the top of the stack.
     * @param[in] data The data for the node.
     * @return The data in the node pushed.
     */
    virtual T & push(const T & data) = 0;

    /**
     * @brief Pops the node in the top of the stack.
     * @param[out] data The data in the node popped, can be @c nullptr to ignore.
     */
    virtual void pop(typename std::remove_const<T>::type * data) = 0;

    /**
     * @brief Retrieves the data in the node in the top of the stack.
     * @return The data in the node.
     */
    virtual T & top() = 0;

    /**
     * @brief Checks if the stack is empty.
     * @return @c true if the stack is empty and @c false otherwise.
     */
    virtual bool empty() = 0;

    /**
     * @brief Obtains the number of nodes in the stack.
     * @return The number of nodes.
     */
    virtual size_t size() = 0;
};

}

#endif /* CPP_DSA_STACK_BASE_HPP */

/******************************************************************************************************END OF FILE*****/
