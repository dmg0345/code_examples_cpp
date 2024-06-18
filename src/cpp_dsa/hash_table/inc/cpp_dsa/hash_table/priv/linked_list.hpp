/**
 ***********************************************************************************************************************
 * @file        linked_list.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_HASH_TABLE_LINKED_LIST_HPP
#define CPP_DSA_HASH_TABLE_LINKED_LIST_HPP

#include "base.hpp"
#include <array>
#include <forward_list>

namespace CppDSA::HashTable::LinkedList
{

namespace Detail
{

/**
 * @brief Node for each linked list containing the key value pairs.
 * @tparam T The type of the key for the node.
 * @tparam U The type of the value for the node.
 */
template<typename T, typename U>
class Node
{
public:
    /**
     * @brief Constructs a new node.
     * @param[in] key The key for the node.
     * @param[in] value The value for the node.
     */
    Node<T, U>(const T & key, const U & value) : key(key), value(value) { }

    /**
     * @brief Default copy constructor.
     * @param[in] node The node to copy.
     */
    Node<T, U>(const Node<T, U> & node) = default;

    /**
     * @brief Default copy operator.
     * @param[in] node The node to copy.
     * @return The copied node.
     */
    Node<T, U> & operator=(const Node<T, U> & node) = default;

    /**
     * @brief Default move constructor.
     * @param[in] node The node to move.
     */
    Node<T, U>(Node<T, U> && node) noexcept = default;

    /**
     * @brief Default move operator.
     * @param[in] node The node to move.
     * @return The moved node.
     */
    Node<T, U> & operator=(Node<T, U> && node) noexcept = default;

    /**
     * @brief Destructor.
     */
    virtual ~Node<T, U>() { }

    T key; /**< The key for the node. */
    U value; /**< The value in the node. */
};

}

/**
 * @brief Hash table class based on linked lists.
 * @tparam T Type of the keys in the hash table.
 * @tparam U Type of the values in the hash table.
 * @tparam N Size of the underlying array that contains a linked list in each slot.
 */
template<typename T, typename U, size_t N = 3>
class HashTable : public Base::HashTableBase<T, U>
{
public:
    /**
     * @brief Constructs a new binary tree.
     */
    HashTable<T, U, N>() : Base::HashTableBase<T, U>(), t() { }

    HashTable<T, U, N>(const HashTable<T, U, N> & bt) = delete;
    HashTable<T, U, N> & operator=(const HashTable<T, U, N> & bt) = delete;
    HashTable<T, U, N>(HashTable<T, U, N> && bt) noexcept = delete;
    HashTable<T, U, N> & operator=(HashTable<T, U, N> && bt) noexcept = delete;
    ~HashTable<T, U, N>() override = default;

    U & set(const T & key, const U & value) override
    {
        // Get the linked list.
        std::forward_list<Detail::Node<T, U>> & ll = t[hash(key)];

        // Find the node in the linked list with the key.
        Detail::Node<T, U> * node = nullptr;
        for (auto & n : ll)
        {
            if (n.key == key)
            {
                node = &n;
                break;
            }
        }

        // Add key-value pair if not found in linked list.
        if (node == nullptr)
        {
            ll.emplace_front(key, value);
            node = &ll.front();
        }
        // Otherwise set the value.
        else
        {
            node->value = value;
        }

        return node->value;
    }

    U & get(const T & key) override
    {
        // Get the linked list.
        std::forward_list<Detail::Node<T, U>> & ll = t[hash(key)];

        // Find the node in the linked list with the key.
        Detail::Node<T, U> * node = nullptr;
        for (auto & n : ll)
        {
            if (n.key == key)
            {
                node = &n;
                break;
            }
        }

        // Add key-value pair with default value if not found in linked list.
        if (node == nullptr)
        {
            ll.emplace_front(key, U());
            node = &ll.front();
        }

        return node->value;
    }

    bool contains(const T & key) override
    {
        // Get the linked list.
        std::forward_list<Detail::Node<T, U>> & ll = t[hash(key)];

        // Find the node in the linked list with the key.
        for (const auto & n : ll)
        {
            if (n.key == key)
            {
                return true;
            }
        }

        return false;
    }

    bool empty() override { return size() == 0U; }

    size_t size() override
    {
        size_t count = 0U;

        // Iterate all linked lists in the array.
        for (size_t i = 0U; i < N; i++)
        {
            const std::forward_list<Detail::Node<T, U>> & ll = t[i];
            count += static_cast<size_t>(distance(ll.begin(), ll.end()));
        }

        return count;
    }

protected:
    /**
     * @brief Calculates an index to the array for a key.
     * @param[in] key The key to calculate the hash on.
     * @return The index to the array.
     */
    size_t hash(const T & key)
    {
        size_t count = 0;
        for (const auto & c : key)
        {
            count += static_cast<const size_t>(c);
        }
        return count % N;
    }

    std::array<std::forward_list<Detail::Node<T, U>>, N> t; /**< Underlying structure for the hash table. */
};

}

#endif /* CPP_DSA_HASH_TABLE_LINKED_LIST_HPP */

/******************************************************************************************************END OF FILE*****/
