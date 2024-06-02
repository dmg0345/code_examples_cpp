/**
 ***********************************************************************************************************************
 * @file        singly.hpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_LINKED_LIST_SINGLY_HPP
#define CPP_DSA_LINKED_LIST_SINGLY_HPP

#include "base.hpp"
#include <utility>

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

namespace CppDSA::LinkedList::Singly
{

namespace
{

/**
 * @brief Singly linked list node class.
 * @tparam T Type of data in the node.
 */
template<typename T>
class Node : public Base::NodeBase<T>
{
public:
    /**
     * @brief Constructs a new node for a singly linked list.
     * @param[in] data The data for the node.
     * @param[in] next The next node in the list.
     */
    Node(const T & data, Node<T> * const next) : Base::NodeBase<T>(data), next(next) { }

    Node<T> * next; /**< The next node in the list, or @c nullptr if last node. */
};

}

/**
 * @brief Singly linked list class.
 * @tparam T Type of the data in the singly linked list.
 */
template<typename T>
class Singly : public Base::LinkedListBase<T>
{
public:
    /**
     * @brief Constructs a singly linked list.
     */
    Singly<T>() : Base::LinkedListBase<T>(), head(nullptr), tail(nullptr) { }

    Singly<T>(const Singly<T> & list) = delete;

    Singly<T> & operator=(const Singly<T> list) = delete;

    Singly<T>(Singly<T> && list) noexcept = delete;

    Singly<T> & operator=(Singly<T> && list) noexcept = delete;

    ~Singly<T>()
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
        Node<T> * node = new Node<T>(data, nullptr);

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

            // The node previous to the tail does not point to any new node anymore.
            curr_node->next = nullptr;
            // The node previous to the tail becomes the new tail.
            tail = curr_node;
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
        Node<T> * node = new Node<T>(data, nullptr);

        if (this->length == 0U)
        {
            // New node becomes the head of single element linked list.
            head = node;
            // New node becomes the tail of single element linked list.
            tail = node;
        }
        else
        {
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
            // Keep track of the node next to the head.
            Node<T> * const tmp = head->next;
            // The head no longer points to any node.
            head->next = nullptr;
            // The next node to the previous head becomes the new head.
            head = tmp;
        }

        // Check if there is a node to remove.
        if (node != nullptr)
        {
            // Handle output parameter if provided.
            if (data != nullptr)
            {
                *data = std::move(node->data);
            }

            // Delete node and decrease length after node removed.
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

        // Create node to insert, since we are inserting in between head and tail, next is guaranteed to exist.
        Node<T> * node = new Node<T>(data, nullptr);

        // Find node at the specified index, new node will be inserted after this.
        Node<T> * curr_node = head;
        for (size_t i = 0U; i < index; i++)
        {
            curr_node = curr_node->next;
        }

        // The next node to the node at the specified index becomes the next node of the new node.
        node->next = curr_node->next;
        // The next node of the node at the specified index becomes the new node.
        curr_node->next = node;

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

        // Find node previous to the node to remove, note since we are removing in between
        // the head and the tail, the next node is guaranteed to exist.
        Node<T> * curr_node = head;
        for (size_t i = 0U; i < (index - 1U); i++)
        {
            curr_node = curr_node->next;
        }

        // Keep track of node to remove.
        Node<T> * tmp = curr_node->next;
        // The next node of the node previous to the node to remove becomes the next node to the node to remove.
        curr_node->next = tmp->next;
        // The next node of the node to remove does not exist.
        tmp->next = nullptr;

        // Handle output parameter.
        if (data != nullptr)
        {
            *data = std::move(tmp->data);
        }

        // Decrease length after node removed.
        delete tmp;
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
        Node<T> * prev = nullptr;
        Node<T> * curr = head;
        Node<T> * next = nullptr;
        for (size_t i = 0; i < this->length; i++)
        {
            // Update next node for the next run.
            next = curr->next;

            // Next node of the current pointer is reversed and points to the previous node.
            curr->next = prev;

            // Update for next run.
            prev = curr;
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

#endif /* CPP_DSA_LINKED_LIST_SINGLY_HPP */

/******************************************************************************************************END OF FILE*****/
