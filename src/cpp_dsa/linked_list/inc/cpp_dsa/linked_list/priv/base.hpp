/**
 ***********************************************************************************************************************
 * @file        base.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_LINKED_LIST_BASE_HPP
#define CPP_DSA_LINKED_LIST_BASE_HPP

#include <type_traits>
#include <cstddef>

namespace CppDSA::LinkedList::Base
{

/**
 * @brief Linked list node base class.
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
    NodeBase(const T & data) : data(data) { }

    T data; /**< The data in the node. */
};

/**
 * @brief Linked list base class.
 * @tparam T Type of the data in the linked list.
 */
template<typename T>
class LinkedListBase
{
public:
    /**
     * @brief Constructs a new linked list.
     */
    LinkedListBase<T>() : length(0U) { }

    /**
     * @brief Deleted copy constructor.
     * @param[in] list The linked list to copy.
     */
    LinkedListBase<T>(const LinkedListBase<T> & list) = delete;

    /**
     * @brief Deleted copy operator.
     * @param[in] list The linked list to copy.
     * @return The copied linked list.
     */
    LinkedListBase<T> & operator=(const LinkedListBase<T> list) = delete;

    /**
     * @brief Deleted move constructor.
     * @param[in] list The linked list to move.
     */
    LinkedListBase<T>(LinkedListBase<T> && list) noexcept = delete;

    /**
     * @brief Deleted move operator.
     * @param[in] list The linked list to move.
     * @return The moved linked list.
     */
    LinkedListBase<T> & operator=(LinkedListBase<T> && list) noexcept = delete;

    /**
     * @brief Destructor.
     */
    virtual ~LinkedListBase() { }

    /**
     * @brief Creates a new node with the data specified and appends it to the end of the list.
     * @param[in] data The data for the node.
     * @return The data in the node appended.
     */
    virtual T & append(const T & data) = 0;

    /**
     * @brief Removes the last node in the list.
     * @param[out] data The data in the last node. Can be set to @c nullptr to ignore.
     */
    virtual void remove_last(typename std::remove_const<T>::type * const data) = 0;

    /**
     * @brief Creates a new node and prepends it to the beginning of the list.
     * @param[in] data The data for the node.
     * @return The data in the node prepended.
     */
    virtual T & prepend(const T & data) = 0;

    /**
     * @brief Removes the first node in the list.
     * @param[out] data The data in the first node. Can be set to @c nullptr to ignore.
     */
    virtual void remove_first(typename std::remove_const<T>::type * const data) = 0;

    /**
     * @brief Creates a new node and inserts it after the node at the specified index.
     * @param[in] index The index of the node after which the new node will be inserted.
     * @param[in] data The data for the node.
     * @return The data in the node inserted.
     */
    virtual T & insert(const size_t index, const T & data) = 0;

    /**
     * @brief Removes the node at the specified index.
     * @param[in] index The index of the node to remove.
     * @param[in] data The data in the node removed. Can be set to @c nullptr to ignore.
     */
    virtual void remove(const size_t index, typename std::remove_const<T>::type * const data) = 0;

    /**
     * @brief Subscript operator for get and set operations.
     * @param[in] index The index of the node.
     * @return The data of the node at the index specified.
     */
    virtual T & operator[](const size_t index) = 0;

    /**
     * @brief Reverses the linked list.
     */
    virtual void reverse() = 0;

protected:
    size_t length; /**< Number of nodes in the list. */
};
}

#endif /* CPP_DSA_LINKED_LIST_BASE_HPP */

/******************************************************************************************************END OF FILE*****/
