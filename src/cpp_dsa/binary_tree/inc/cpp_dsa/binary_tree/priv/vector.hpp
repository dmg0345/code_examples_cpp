/**
 ***********************************************************************************************************************
 * @file        vector.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_BINARY_TREE_VECTOR_HPP
#define CPP_DSA_BINARY_TREE_VECTOR_HPP

#include "base.hpp"
#include <stack>
#include <vector>
#include <unordered_map>

namespace CppDSA::BinaryTree::Vector
{

namespace Detail
{

/**
 * @brief Binary tree node class.
 * @tparam T Type of data in the node.
 */
template<typename T>
class Node : public Base::NodeBase<T>
{
public:
    /**
     * @brief Constructs a new node.
     * @param[in] data The data for the node.
     * @param[in] valid @c true if the node is valid in the vector, @c false if otherwise.
     */
    Node<T>(const T & data) : Base::NodeBase<T>(data), valid(true) { }

    Node<T>(const Node<T> & node) = default;
    Node<T> & operator=(const Node<T> & node) = default;
    Node<T>(Node<T> && node) noexcept = default;
    Node<T> & operator=(Node<T> && node) noexcept = default;
    ~Node<T>() override = default;

    bool valid; /**< @c true if the node is valid, @c false if the node is invalid. */
};

}

/**
 * @brief Binary tree class.
 * @tparam T Type of the data in the stack.
 */
template<typename T>
class BinaryTree : public Base::BinaryTreeBase<T>
{
public:
    /**
     * @brief Constructs a new binary tree.
     */
    BinaryTree<T>() : Base::BinaryTreeBase<T>(), v() { }

    BinaryTree<T>(const BinaryTree<T> & bt) = delete;
    BinaryTree<T> & operator=(const BinaryTree<T> & bt) = delete;
    BinaryTree<T>(BinaryTree<T> && bt) noexcept = delete;
    BinaryTree<T> & operator=(BinaryTree<T> && bt) noexcept = delete;
    ~BinaryTree<T>() override = default;

    T & insert(const T & data) override
    {
        Detail::Node<T> * node_added = nullptr;

        // Create lambda to iterate all nodes until an invalid one is found.
        auto iterator = [&node_added, &data](Detail::Node<T> & node) -> bool
        {
            // If node is invalid, replace data and validate it again, afterwards stop the search.
            if (!node.valid)
            {
                node.data = data;
                node.valid = true;
                node_added = &node;
                return false;
            }
            // Continue looking for nodes.
            return true;
        };
        // Loop all nodes.
        bfs_node(iterator);

        // If the node was still not added it means that there are no invalid nodes, thus add it afterwards.
        if (node_added == nullptr)
        {
            v.emplace_back(data);
            node_added = &v[v.size() - 1U];
        }

        return node_added->data;
    }

    void remove(const T & data) override
    {
        // TODO.
        (void)data;
    }

    bool contains(const T & data) override
    {
        bool ret_val = false;
        // Create iterator for the traverse of the tree.
        auto iterator = [&ret_val, &data](Detail::Node<T> & node) -> bool
        {
            // Check if data matches for valid nodes.
            ret_val = ((node.valid) && (data == node.data));
            return !ret_val;
        };
        bfs_node(iterator);

        return ret_val;
    }

    bool empty() override { return size() == 0U; }

    size_t size() override
    {
        size_t count = 0U;
        // Create iterator for the traverse of the tree.
        auto iterator = [&count](Detail::Node<T> & node) -> bool
        {
            // Count valid nodes for the size.
            if (node.valid)
            {
                count++;
            }
            return true;
        };
        // Perform traverse.
        bfs_node(iterator);

        return count;
    }

    void bfs(const Base::TraverseCallback<T> & callback) override
    {
        // Create iterator for the traverse of the tree.
        auto iterator = [&callback](Detail::Node<T> & node) -> bool
        {
            // Return to user if node is valid, otherwise continue looking for nodes.
            if (node.valid)
            {
                return callback(node.data);
            }
            return true;
        };
        // Perform traverse.
        bfs_node(iterator);
    }

    void dfs(const Base::DepthFirstSearchType & type, const Base::TraverseCallback<T> & callback) override
    {
        // Create iterator for the traverse of the tree.
        auto iterator = [&callback](Detail::Node<T> & node) -> bool
        {
            // Return to user if node is valid, otherwise continue looking for nodes.
            if (node.valid)
            {
                return callback(node.data);
            }
            return true;
        };
        // Perform traverse.
        dfs_node(type, iterator);
    }

protected:
    /**
     * @brief Breath First Search for each valid / invalid node.
     * @param[in] callback Callback to execute on each node, return @c false to stop.
     */
    void bfs_node(const std::function<bool(Detail::Node<T> &)> & callback)
    {
        // Simply iterate all nodes by index.
        for (size_t index = 0U; index < v.size(); index++)
        {
            if (!callback(*get_node(index)))
            {
                break;
            }
        }
    }

    /**
     * @brief Depth First Search for each node.
     * @param[in] type The type of depth first search to perform.
     * @param[in] callback Callback to execute on each node, return @c false to stop.
     */
    void dfs_node(const Base::DepthFirstSearchType & type, const std::function<bool(Detail::Node<T> &)> & callback)
    {
        // If no nodes, then exit immediately.
        if (empty())
        {
            return;
        }

        // Stack and hash map auxiliary structures.
        std::stack<size_t> stack;
        std::unordered_map<Detail::Node<T> *, bool> visited;

        // Shortcut to execute callback.
        auto run_cb = [&callback, &visited](Detail::Node<T> *& n) -> bool
        {
            // If the node has already been visited, do not execute callback.
            if (visited.count(n) > 0U)
            {
                return true;
            }
            // Call callback and store return value.
            const bool ret_val = callback(*n);
            // Mark node as visited.
            visited[n] = true; // NOLINT(cppcoreguidelines-pro-bounds-pointer-arithmetic)

            return ret_val;
        };

        // Add root node to queue and start the loop.
        stack.push(0U);
        while (!stack.empty())
        {
            // Get node from the stack.
            const size_t index = stack.top();
            Detail::Node<T> * node = get_node(index);

            // On PreOrder, execute the callback prior to handling left and right subtrees of the node.
            if (type == Base::DepthFirstSearchType::pre_order)
            {
                run_cb(node);
            }

            // Add left node to stack if it exists and it was not already visited.
            const size_t left_index = get_left_node_index(index);
            Detail::Node<T> * left_node = get_node(left_index);
            if ((left_node != nullptr) && (left_node->valid) && (visited.count(left_node) == 0U))
            {
                stack.push(left_index);
                continue;
            }

            // On InOrder, execute the callback after handling the left subtree of the node.
            if (type == Base::DepthFirstSearchType::in_order)
            {
                run_cb(node);
            }

            // Add right node to stack if it exists and it was not already visited.
            const size_t right_index = get_right_node_index(index);
            Detail::Node<T> * right_node = get_node(right_index);
            if ((right_node != nullptr) && (right_node->valid) && (visited.count(right_node) == 0U))
            {
                stack.push(right_index);
                continue;
            }

            // On PostOrder, execute the callback after handling both left and right subtrees of the node.
            if (type == Base::DepthFirstSearchType::post_order)
            {
                run_cb(node);
            }

            // Remove node from the stack, it's left and right subtrees have already been handled.
            stack.pop();
        }
    }

    /**
     * @brief Retrieves the valid/invalid node at the specified index if it exists.
     * @param[in] index The index of the node, the @c root node is at index 0.
     * @return The node, or @c nullptr for no node at index.
     */
    Detail::Node<T> * get_node(const size_t index) { return (index >= v.size()) ? nullptr : &v[index]; }

    /**
     * @brief Gets the index of the left node of a node.
     * @param[in] index The index.
     * @return The index left of a node.
     */
    constexpr size_t get_left_node_index(const size_t index) { return ((index * 2U) + 1U); }

    /**
     * @brief Gets the index of the right node of a node.
     * @param[in] index The index.
     * @return The index right of a node.
     */
    constexpr size_t get_right_node_index(const size_t index) { return ((index * 2U) + 2U); }

    std::vector<Detail::Node<T>> v; /**< The underlying vector. */
};

}

#endif /* CPP_DSA_BINARY_TREE_VECTOR_HPP */

/******************************************************************************************************END OF FILE*****/
