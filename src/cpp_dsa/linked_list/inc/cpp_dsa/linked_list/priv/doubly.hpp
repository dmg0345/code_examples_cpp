/**
 ***********************************************************************************************************************
 * @file        doubly.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_LINKED_LIST_DOUBLY_HPP
#define CPP_DSA_LINKED_LIST_DOUBLY_HPP

#include "base.hpp"
#include <utility>

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

namespace CppDSA::LinkedList::Doubly
{

namespace
{

/**
 * @brief Doubly linked list node class.
 * @tparam T Type of data in the node.
 */
template<typename T>
class Node : public Base::NodeBase<T>
{
public:
    /**
     * @brief Constructs a new node for a doubly linked list.
     * @param[in] data The data for the node.
     * @param[in] next The next node.
     * @param[in] prev The previous node.
     */
    Node(const T & data, Node<T> * const next, Node<T> * const prev) : Base::NodeBase<T>(data), next(next), prev(prev)
    { }

    Node<T> * next; /**< The next node in the list, or @c nullptr if last node. */
    Node<T> * prev; /**< The previous node in the list, or @c nullptr if last node. */
};

}

/**
 * @brief Doubly linked list class.
 * @tparam T Type of the data in the doubly linked list.
 */
template<typename T>
class Doubly : public Base::LinkedListBase<T>
{
public:
    /**
     * @brief Constructs a doubly linked list.
     */
    Doubly<T>() : Base::LinkedListBase<T>(), head(nullptr), tail(nullptr) { }

    Doubly<T>(const Doubly<T> & list) = delete;

    Doubly<T> & operator=(const Doubly<T> list) = delete;

    Doubly<T>(Doubly<T> && list) noexcept = delete;

    Doubly<T> & operator=(Doubly<T> && list) noexcept = delete;

    ~Doubly<T>()
    {
        // Loop all nodes, if any, and erase them.
        Node<T> * node = head;
        while (node != nullptr)
        {
            // Get next node.
            Node<T> * tmp = node->next;
            // Delete node.
            delete node;
            // Update node for next run.
            node = tmp;
        }
    }

    T & append(const T & data) override
    {
        // Create new node to append.
        Node<T> * node = new Node<T>(data, nullptr, nullptr);

        if (this->length == 0U)
        {
            // New node becomes head of single element linked list.
            head = node;
            // New node becomes tail of single element linked list.
            tail = node;
        }
        else
        {
            // Old tail points to new node.
            tail->next = node;
            // Previous to new node becomes the old tail.
            node->prev = tail;
            // New node becomes the tail.
            tail = node;
        }

        // Increase length after node appended.
        this->length++;

        return node->data;
    }

    void remove_last(typename std::remove_const<T>::type * const data) override
    {
        // Track node to remove.
        Node<T> * const node = tail;

        if (this->length == 0U)
        {
            // No nodes, thus no data in any node to return.
        }
        else if (this->length == 1U)
        {
            // No head as linked list becomes empty.
            head = nullptr;
            // No tail as linked list becomes empty.
            tail = nullptr;
        }
        else
        {
            // Get the node previous to the tail.
            Node<T> * curr_node = head;
            while (curr_node->next != tail)
            {
                curr_node = curr_node->next;
            }

            // Get the node previous to the tail.
            Node<T> * tmp = tail->prev;
            // No next node in new tail.
            tmp->next = nullptr;
            // No previous node on old tail.
            tail->prev = nullptr;
            // Node previous to the old tail becomes the new tail.
            tail = tmp;
        }

        // Check if there is a node to remove.
        if (node != nullptr)
        {
            // Handle output parameter if provided.
            if (data != nullptr)
            {
                *data = std::move(node->data);
            }

            // Delete node and decrease length.
            delete node;
            this->length--;
        }
    }

    T & prepend(const T & data) override
    {
        // Create node.
        Node<T> * node = new Node<T>(data, nullptr, nullptr);

        if (this->length == 0U)
        {
            // New node becomes the head of single element linked list.
            head = node;
            // New node becomes the tail of single element linked list.
            tail = node;
        }
        else
        {
            // The node previous to the old head becomes the new node.
            head->prev = node;
            // The old head becomes the next node to the new node.
            node->next = head;
            // The new node becomes the head.
            head = node;
        }

        // Increase length after node prepended.
        this->length++;

        return node->data;
    }

    void remove_first(typename std::remove_const<T>::type * const data) override
    {
        // Track node to remove.
        Node<T> * const node = head;

        if (this->length == 0U)
        {
            // No nodes, thus no data in any node to return.
        }
        else if (this->length == 1U)
        {
            // No head as linked list becomes empty.
            head = nullptr;
            // No tail as linked list becomes empty.
            tail = nullptr;
        }
        else
        {
            // Keep track of node next to head.
            Node<T> * const tmp = head->next;
            // No node next to old head.
            head->next = nullptr;
            // No node previous previous to new head.
            tmp->prev = nullptr;
            // The node next to the old head becomes the new head.
            head = tmp;
        }

        // Check if there i` a node to remove.
        if (node != nullptr)
        {
            // Handle output parameter if provided.
            if (data != nullptr)
            {
                *data = std::move(node->data);
            }

            // Delete node and decrease length.
            delete node;
            this->length--;
        }
    }

    T & insert(const size_t index, const T & data) override
    {
        // If index is zero, then equal to prepending.
        if (index == 0U)
        {
            return prepend(data);
        }
        // If index is equal or greater than maximum, then equal to appending.
        const size_t max_index = (this->length > 0U) ? (this->length - 1U) : (0U);
        if (index >= max_index)
        {
            return append(data);
        }

        // Create node to insert, since we are inserting in between head and tail, next and previous
        // nodes are guaranteed to exist.
        Node<T> * node = new Node<T>(data, nullptr, nullptr);

        // Find node at the specified index, new node will be inserted after this.
        Node<T> * curr_node = head;
        for (size_t i = 0U; i < index; i++)
        {
            curr_node = curr_node->next;
        }

        // The node next to the new node is the next node to the node at the specified index.
        node->next = curr_node->next;
        // The node previous to the new node is the node at the specified index.
        node->prev = curr_node;
        // The next to the node at the specified index is the new node.
        curr_node->next = node;
        // The previous node next to the new node is the new node.
        node->next->prev = node;

        // Increase length after insert.
        this->length++;

        return node->data;
    }

    void remove(const size_t index, typename std::remove_const<T>::type * const data) override
    {
        // If index at zero, then equal to removing first.
        if (index == 0U)
        {
            return remove_first(data);
        }
        // If index is greater or equal to maximum index, then equal to removing last.
        const size_t max_index = (this->length > 0U) ? (this->length - 1U) : (0U);
        if (index >= max_index)
        {
            return remove_last(data);
        }

        // Find node to remove, note since we are removing in between
        // the head and the tail, the next and previous nodes are guaranteed to exist.
        Node<T> * curr_node = head;
        for (size_t i = 0U; i < index; i++)
        {
            curr_node = curr_node->next;
        }

        // Node next to previous node is the node next to the node to remove.
        curr_node->prev->next = curr_node->next;
        // Node previous to next node is the node previous to the node to remove.
        curr_node->next->prev = curr_node->prev;
        // The next and previous nodes of node to remove do not exist.
        curr_node->next = nullptr;
        curr_node->prev = nullptr;

        // Handle output parameter.
        if (data != nullptr)
        {
            *data = std::move(curr_node->data);
        }

        // Decrease length after node removed.
        delete curr_node;
        this->length--;
    }

    T & operator[](const size_t index) override
    {
        // Find the node at the specified index.
        Node<T> * node = head;
        for (size_t i = 0U; i < index; i++)
        {
            node = node->next;
        }

        return node->data;
    }

    void reverse() override
    {
        // If no nodes or one node, then do nothing.
        if (this->length <= 1U)
        {
            return;
        }

        // Keep track of the previous node, current node and next node, and loop till the end.
        Node<T> * curr = head;
        Node<T> * next = nullptr;
        for (size_t i = 0; i < this->length; i++)
        {
            // Get next node for next run.
            next = curr->next;
            // Swap next for previous node.
            std::swap(curr->next, curr->prev);
            // Update current node for next run.
            curr = next;
        }
        // Swap head and tail nodes.
        std::swap(head, tail);
    }

private:
    Node<T> * head; /**< Pointer to beginning of the linked list. */
    Node<T> * tail; /**< Pointer to end of the linked list. */
};

}

// NOLINTEND(cppcoreguidelines-owning-memory)

#endif /* CPP_DSA_LINKED_LIST_DOUBLY_HPP */

/******************************************************************************************************END OF FILE*****/
