/**
 ***********************************************************************************************************************
 * @file        base.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_HASH_TABLE_BASE_HPP
#define CPP_DSA_HASH_TABLE_BASE_HPP

#include <cstddef>

namespace CppDSA::HashTable::Base
{

/**
 * @brief Hash table base class.
 * @tparam T Type of the keys in the hash table.
 * @tparam U Type of the values in the hash table.
 */
template<typename T, typename U>
class HashTableBase
{
public:
    /**
     * @brief Constructs a new hash table.
     */
    HashTableBase<T, U>() { }

    /**
     * @brief Deleted copy constructor.
     * @param[in] ht The hash table to copy.
     */
    HashTableBase<T, U>(const HashTableBase<T, U> & ht) = delete;

    /**
     * @brief Deleted copy operator.
     * @param[in] ht The hash table to copy.
     * @return The copied hash table.
     */
    HashTableBase<T, U> & operator=(const HashTableBase<T, U> & ht) = delete;

    /**
     * @brief Deleted move constructor.
     * @param[in] ht The hash table to move.
     */
    HashTableBase<T, U>(HashTableBase<T, U> && ht) noexcept = delete;

    /**
     * @brief Deleted move operator.
     * @param[in] ht The hash table to move.
     * @return The moved hash table.
     */
    HashTableBase<T, U> & operator=(HashTableBase<T, U> && ht) noexcept = delete;

    /**
     * @brief Destructor.
     */
    virtual ~HashTableBase<T, U>() { }

    /**
     * @brief Sets a key-value pair in the hash table.
     * @param[in] key The key for the key-value pair.
     * @param[in] value The value for the key-value pair.
     * @return The value in the key-value pair.
     */
    virtual U & set(const T & key, const U & value) = 0;

    /**
     * @brief Gets a value from its key from the hash table.
     * @param[in] key The key for the key-value pair.
     * @return The value in the key-value pair.
     */
    virtual U & get(const T & key) = 0;

    /**
     * @brief Checks if the specified key exists in the hash table.
     * @param[in] key The key of the key-value pair.
     * @return @c true if the hash table contains @p key and @c false otherwise.
     */
    virtual bool contains(const T & key) = 0;

    /**
     * @brief Checks if the hash table is empty.
     * @return @c true if the hash table is empty and @c false otherwise.
     */
    virtual bool empty() = 0;

    /**
     * @brief Obtains the number of key-value pairs in the hash table.
     * @return The number of key-value pairs.
     */
    virtual size_t size() = 0;
};

}

#endif /* CPP_DSA_HASH_TABLE_BASE_HPP */

/******************************************************************************************************END OF FILE*****/
