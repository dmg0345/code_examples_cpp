/**
 ***********************************************************************************************************************
 * @file        list.hpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_STACK_LIST_HPP
#define CPP_DSA_STACK_LIST_HPP

#include "base.hpp"
#include <list>
#include <utility>

namespace CppDSA::Stack::List
{

namespace
{

/**
 * @brief Stack node class.
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
 * @brief Stack class.
 * @tparam T Type of the data in the stack.
 */
template<typename T>
class Stack : public Base::StackBase<T>
{
public:
    /**
     * @brief Constructs a new stack.
     */
    Stack<T>() : Base::StackBase<T>() { }

    T & push(const T & data) override
    {
        // Prepend element to list.
        l.emplace_front(data);
        // Return data just added.
        return l.front().data;
    }

    void pop(typename std::remove_const<T>::type * data) override
    {
        // Check if there is at least one node.
        if (!empty())
        {
            // Handle output parameter.
            if (data != nullptr)
            {
                *data = std::move(l.front().data);
            }
            // Remove last element.
            l.pop_front();
        }
    }

    T & top() override { return l.front().data; }

    bool empty() override { return l.empty(); }

    size_t size() override { return l.size(); }

private:
    std::list<Node<T>> l; /**< Underlying list for the stack. */
};

}

#endif /* CPP_DSA_STACK_LIST_HPP */

/******************************************************************************************************END OF FILE*****/
