/**
 ***********************************************************************************************************************
 * @file        list.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_QUEUE_LIST_HPP
#define CPP_DSA_QUEUE_LIST_HPP

#include "base.hpp"
#include <list>
#include <utility>

namespace CppDSA::Queue::List
{

namespace Detail
{

/**
 * @brief Queue node class.
 * @tparam T Type of data in the node.
 */
template<typename T>
class Node : public Base::NodeBase<T>
{
public:
    using Base::NodeBase<T>::NodeBase;

    Node<T>(const Node<T> & node) = default;
    Node<T> & operator=(const Node<T> & node) = default;
    Node<T>(Node<T> && node) noexcept = default;
    Node<T> & operator=(Node<T> && node) noexcept = default;
    ~Node<T>() override = default;
};

}

/**
 * @brief Queue class.
 * @tparam T Type of the data in the queue.
 */
template<typename T>
class Queue : public Base::QueueBase<T>
{
public:
    /**
     * @brief Constructs a new queue.
     */
    Queue<T>() : Base::QueueBase<T>(), l() { }

    Queue<T>(const Queue<T> & queue) = delete;
    Queue<T> & operator=(const Queue<T> & queue) = delete;
    Queue<T>(Queue<T> && queue) noexcept = delete;
    Queue<T> & operator=(Queue<T> && queue) noexcept = delete;
    ~Queue<T>() override = default;

    T & enqueue(const T & data) override
    {
        // Emplace the node at the tail of the linked list.
        l.emplace_front(data);
        // Return data of the new node.
        return front();
    }

    void dequeue(typename std::remove_const<T>::type * data) override
    {
        // Check if queue is empty before popping.
        if (!empty())
        {
            // Handle output parameter.
            if (data != nullptr)
            {
                *data = std::move(back());
            }

            // Remove node at the tail of the list.
            l.pop_back();
        }
    }

    T & front() override { return l.front().data; }

    T & back() override { return l.back().data; }

    bool empty() override { return l.empty(); }

    size_t size() override { return l.size(); }

private:
    std::list<Detail::Node<T>> l; /**< Underlying list for the queue. */
};

}

#endif /* CPP_DSA_QUEUE_LIST_HPP */

/******************************************************************************************************END OF FILE*****/
