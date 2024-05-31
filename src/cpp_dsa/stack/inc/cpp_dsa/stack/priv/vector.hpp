/**
 ***********************************************************************************************************************
 * @file        vector.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_STACK_VECTOR_HPP
#define CPP_DSA_STACK_VECTOR_HPP

#include "base.hpp"
#include <vector>
#include <utility>

namespace CppDSA::Stack::Vector
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
     * @param[in] capacity Reserve capacity in the underlying vector.
     */
    Stack<T>(const size_t capacity = 0) : Base::StackBase<T>()
    {
        if (capacity > 0)
        {
            v.reserve(capacity);
        }
    }

    T & push(const T & data) override
    {
        // Push element to the end of the vector.
        v.emplace_back(data);
        // Return data just added.
        return v.back().data;
    }

    void pop(typename std::remove_const<T>::type * data) override
    {
        // Check if there is at least one node.
        if (!empty())
        {
            // Handle output parameter.
            if (data != nullptr)
            {
                *data = std::move(v.back().data);
            }
            // Remove last element.
            v.pop_back();
        }
    }

    T & top() override { return v.back().data; }

    bool empty() override { return v.empty(); }

    size_t size() override { return v.size(); }

private:
    std::vector<Node<T>> v; /**< Underlying vector for the stack. */
};

}

#endif /* CPP_DSA_STACK_VECTOR_HPP */

/******************************************************************************************************END OF FILE*****/
