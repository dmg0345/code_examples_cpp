/**
 ***********************************************************************************************************************
 * @file        base.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_BINARY_TREE_BASE_HPP
#define CPP_DSA_BINARY_TREE_BASE_HPP

#include <cstddef>
#include <functional>

namespace CppDSA::BinaryTree::Base
{

/**
 * @brief Binary tree node base class.
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
 * @brief Callback used for traversing the binary tree.
 * @tparam T The type of data in the node.
 * @param[in] data The data of the node found.
 * @return @c true to continue traversing the tree and @c false to stop.
 */
template<typename T>
using TraverseCallback = std::function<bool(const T & data)>;

/**
 * @brief Types of depth first search for traversing the binary tree.
 */
enum class DepthFirstSearchType : size_t
{
    pre_order, /**< Executes the callback prior to handling left and right child nodes. */
    in_order, /**< Executes the callback after handling left child node and prior to right child node. */
    post_order /**< Executes the callback after handling left and right child nodes. */
};

/**
 * @brief Binary tree base class.
 * @tparam T Type of the data in the binary tree.
 */
template<typename T>
class BinaryTreeBase
{
public:
    /**
     * @brief Constructs a new binary tree.
     */
    BinaryTreeBase<T>() { }

    /**
     * @brief Deleted copy constructor.
     * @param[in] bt The binary tree to copy.
     */
    BinaryTreeBase<T>(const BinaryTreeBase<T> & bt) = delete;

    /**
     * @brief Deleted copy operator.
     * @param[in] bt The binary tree to copy.
     * @return The copied binary tree.
     */
    BinaryTreeBase<T> & operator=(const BinaryTreeBase<T> & bt) = delete;

    /**
     * @brief Deleted move constructor.
     * @param[in] bt The binary tree to move.
     */
    BinaryTreeBase<T>(BinaryTreeBase<T> && bt) noexcept = delete;

    /**
     * @brief Deleted move operator.
     * @param[in] bt The binary tree to move.
     * @return The moved binary tree.
     */
    BinaryTreeBase<T> & operator=(BinaryTreeBase<T> && bt) noexcept = delete;

    /**
     * @brief Destructor.
     */
    virtual ~BinaryTreeBase<T>() { }

    /**
     * @brief Inserts a node in the binary tree.
     * @param[in] data The data for the node.
     * @return The data in the node inserted.
     */
    virtual T & insert(const T & data) = 0;

    /**
     * @brief Removes a node with the specified data from the binary tree.
     * @param[in] data The data of the node to remove.
     */
    virtual void remove(const T & data) = 0;

    /**
     * @brief Checks if the specified data exists in the binary tree.
     * @param[in] data The data of the node to check for.
     * @return @c true if the binary tree contains @p data and @c false otherwise.
     */
    virtual bool contains(const T & data) = 0;

    /**
     * @brief Checks if the binary tree is empty.
     * @return @c true if the binary tree is empty and @c false otherwise.
     */
    virtual bool empty() = 0;

    /**
     * @brief Obtains the number of nodes in the binary tree.
     * @return The number of nodes.
     */
    virtual size_t size() = 0;

    /**
     * @brief Traverses the tree using breadth first search.
     * @param[in] callback The callback to execute with the data of the node found.
     */
    virtual void bfs(const TraverseCallback<T> & callback) = 0;

    /**
     * @brief Traverses the tree using depth first search of the specified type.
     * @param[in] type The type of depth first search to perform.
     * @param[in] callback The callback to execute with the data of the node found.
     */
    virtual void dfs(const DepthFirstSearchType & type, const TraverseCallback<T> & callback) = 0;
};

}

#endif /* CPP_DSA_BINARY_TREE_BASE_HPP */

/******************************************************************************************************END OF FILE*****/
