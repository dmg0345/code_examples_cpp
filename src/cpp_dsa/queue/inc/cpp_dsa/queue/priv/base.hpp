/**
 ***********************************************************************************************************************
 * @file        base.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_QUEUE_BASE_HPP
#define CPP_DSA_QUEUE_BASE_HPP

#include <type_traits>
#include <cstddef>

namespace CppDSA::Queue::Base
{

/**
 * @brief Queue node base class.
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
 * @brief Queue base class.
 * @tparam T Type of the data in the queue.
 */
template<typename T>
class QueueBase
{
public:
    /**
     * @brief Constructs a new queue.
     */
    QueueBase<T>() { }

    /**
     * @brief Deleted copy constructor.
     * @param[in] queue The queue to copy.
     */
    QueueBase<T>(const QueueBase<T> & queue) = delete;

    /**
     * @brief Deleted copy operator.
     * @param[in] queue The queue to copy.
     * @return The copied queue.
     */
    QueueBase<T> & operator=(const QueueBase<T> & queue) = delete;

    /**
     * @brief Deleted move constructor.
     * @param[in] queue The queue to move.
     */
    QueueBase<T>(QueueBase<T> && queue) noexcept = delete;

    /**
     * @brief Deleted move operator.
     * @param[in] queue The queue to move.
     * @return The moved queue.
     */
    QueueBase<T> & operator=(QueueBase<T> && queue) noexcept = delete;

    /**
     * @brief Destructor.
     */
    virtual ~QueueBase<T>() { }

    /**
     * @brief Enqueues a node in the queue.
     * @param[in] data The data for the node.
     * @return The data in the node queued.
     */
    virtual T & enqueue(const T & data) = 0;

    /**
     * @brief Dequeues a node from the queue.
     * @param[out] data The data in the node dequeued, can be @c nullptr to ignore.
     */
    virtual void dequeue(typename std::remove_const<T>::type * data) = 0;

    /**
     * @brief Gets the node at the front of the queue.
     * @return The data in the node.
     */
    virtual T & front() = 0;

    /**
     * @brief Gets the node at the back of the queue.
     * @return The data in the node.
     */
    virtual T & back() = 0;

    /**
     * @brief Checks if the queue is empty.
     * @return @c true if the queue is empty and @c false otherwise.
     */
    virtual bool empty() = 0;

    /**
     * @brief Obtains the number of elements in the queue.
     * @return The number of elements in the queue.
     */
    virtual size_t size() = 0;
};

}

#endif /* CPP_DSA_QUEUE_BASE_HPP */

/******************************************************************************************************END OF FILE*****/
