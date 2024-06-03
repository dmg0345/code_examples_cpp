/**
 ***********************************************************************************************************************
 * @file        list.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_STACK_LIST_HPP
#define CPP_DSA_STACK_LIST_HPP

#include "base.hpp"
#include <list>
#include <utility>

namespace CppDSA::Stack::List
{

namespace Detail
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

    Node<T>(const Node<T> & node) = default;
    Node<T> & operator=(const Node<T> & node) = default;
    Node<T>(Node<T> && node) noexcept = default;
    Node<T> & operator=(Node<T> && node) noexcept = default;
    ~Node<T>() override = default;
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
    Stack<T>() : Base::StackBase<T>(), l() { }

    Stack<T>(const Stack<T> & stack) = delete;
    Stack<T> & operator=(const Stack<T> & stack) = delete;
    Stack<T>(Stack<T> && stack) noexcept = delete;
    Stack<T> & operator=(Stack<T> && stack) noexcept = delete;
    ~Stack<T>() override = default;

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
    std::list<Detail::Node<T>> l; /**< Underlying list for the stack. */
};

}

#endif /* CPP_DSA_STACK_LIST_HPP */

/******************************************************************************************************END OF FILE*****/
