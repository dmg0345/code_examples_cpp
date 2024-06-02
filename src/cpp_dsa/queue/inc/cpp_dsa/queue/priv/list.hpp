/**
 ***********************************************************************************************************************
 * @file        list.hpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_QUEUE_LIST_HPP
#define CPP_DSA_QUEUE_LIST_HPP

#include "base.hpp"
#include <list>
#include <utility>

namespace CppDSA::Queue::List
{

namespace
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
    Queue<T>() : Base::QueueBase<T>() { }

    Queue<T>(const Queue<T> & queue) = delete;
    Queue<T> & operator=(const Queue<T> queue) = delete;
    Queue<T>(Queue<T> && queue) noexcept = delete;
    Queue<T> & operator=(Queue<T> && queue) noexcept = delete;
    ~Queue() = default;

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
    std::list<Node<T>> l; /**< Underlying list for the queue. */
};

}

#endif /* CPP_DSA_QUEUE_LIST_HPP */

/******************************************************************************************************END OF FILE*****/
