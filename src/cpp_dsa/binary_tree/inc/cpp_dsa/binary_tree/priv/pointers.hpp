/**
 ***********************************************************************************************************************
 * @file        pointers.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_BINARY_TREE_POINTERS_HPP
#define CPP_DSA_BINARY_TREE_POINTERS_HPP

#include "base.hpp"
#include <queue>
#include <stack>
#include <unordered_map>

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

namespace CppDSA::BinaryTree::Pointers
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
     * @param[in] left The left child node, or @c nullptr if no node.
     * @param[in] right The right child node, or @c nullptr if no node.
     */
    Node<T>(const T & data, Node<T> * const left, Node<T> * const right) :
        Base::NodeBase<T>(data), left(left), right(right)
    { }

    Node<T>(const Node<T> & node) = default;
    Node<T> & operator=(const Node<T> & node) = default;
    Node<T>(Node<T> && node) noexcept = default;
    Node<T> & operator=(Node<T> && node) noexcept = default;
    ~Node<T>() override = default;

    Node<T> * left; /**< The left child node, or @c nullptr if no node. */
    Node<T> * right; /**< The right child node, or @c nullptr if no node. */
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
    BinaryTree<T>() : Base::BinaryTreeBase<T>(), root(nullptr) { }

    BinaryTree<T>(const BinaryTree<T> & bt) = delete;
    BinaryTree<T> & operator=(const BinaryTree<T> & bt) = delete;
    BinaryTree<T>(BinaryTree<T> && bt) noexcept = delete;
    BinaryTree<T> & operator=(BinaryTree<T> && bt) noexcept = delete;

    ~BinaryTree<T>() override
    {
        // Create a deallocator for each node.
        auto deallocator = [](Detail::Node<T> & node) -> bool
        {
            delete &node;
            return true;
        };
        // Traverse tree and deallocate nodes.
        bfs_node(deallocator);
    }

    T & insert(const T & data) override
    {
        // Create node.
        Detail::Node<T> * new_node = new Detail::Node<T>(data, nullptr, nullptr);

        // If empty, then assign root node.
        if (empty())
        {
            root = new_node;
        }
        else
        {
            // Inserter for each node.
            auto inserter = [&new_node](Detail::Node<T> & node) -> bool
            {
                // If the node can be inserted to the left, insert it.
                if (node.left == nullptr)
                {
                    node.left = new_node;
                    return false;
                }
                // If the node can be inserted to the right, insert it.
                if (node.right == nullptr)
                {
                    node.right = new_node;
                    return false;
                }
                // The node can't be inserted, continue with the next node.
                return true;
            };
            // Traverse and insert node.
            bfs_node(inserter);
        }

        return new_node->data;
    }

    void remove(const T & data) override
    {
        // TODO.
        (void)data;
    }

    bool contains(const T & data) override
    {
        bool ret_val = false;

        // Create lambda to check each node.
        auto check = [&data, &ret_val](Detail::Node<T> & node) -> bool
        {
            ret_val = node.data == data;
            return !ret_val;
        };
        // Traverse tree.
        bfs_node(check);

        return ret_val;
    }

    bool empty() override { return root == nullptr; }

    size_t size() override
    {
        size_t count = 0;

        // Create counter lambda to count the number of nodes.
        auto counter = [&count](Detail::Node<T> &) -> bool
        {
            count++;
            return true;
        };
        // Traverse the tree and count.
        bfs_node(counter);

        return count;
    }

    void bfs(const Base::TraverseCallback<T> & callback) override
    {
        // Create lambda iterator.
        auto iterator = [&callback](Detail::Node<T> & node) -> bool { return callback(node.data); };
        // Traverse tree.
        bfs_node(iterator);
    }

    void dfs(const Base::DepthFirstSearchType & type, const Base::TraverseCallback<T> & callback) override
    {
        // Create lambda iterator.
        auto iterator = [&callback](Detail::Node<T> & node) -> bool { return callback(node.data); };
        // Traverse tree.
        dfs_node(type, iterator);
    }

protected:
    /**
     * @brief Breath First Search for each node.
     * @param[in] callback Callback to execute on each node, return @c false to stop.
     */
    void bfs_node(const std::function<bool(Detail::Node<T> &)> & callback)
    {
        // If no nodes, then exit immediately.
        if (root == nullptr)
        {
            return;
        }

        // Queue auxiliary structures.
        std::queue<Detail::Node<T> *> queue;

        // Add root node to queue and start the loop.
        queue.push(root);
        while (!queue.empty())
        {
            // Get node from the queue and remove it.
            Detail::Node<T> * node = queue.front();
            queue.pop();

            // Add left node to queue if it exist.
            if (node->left != nullptr)
            {
                queue.push(node->left);
            }
            // Add right node to queue if it exists.
            if (node->right != nullptr)
            {
                queue.push(node->right);
            }

            // Execute callback on the node.
            if (!callback(*node))
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
        if (root == nullptr)
        {
            return;
        }

        // Stack and hash map auxiliary structures.
        std::stack<Detail::Node<T> *> stack;
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
        stack.push(root);
        while (!stack.empty())
        {
            // Get node from the stack.
            Detail::Node<T> * node = stack.top();

            // On PreOrder, execute the callback prior to handling left and right subtrees of the node.
            if (type == Base::DepthFirstSearchType::pre_order)
            {
                run_cb(node);
            }

            // Add left node to stack if it exists and it was not already visited.
            if ((node->left != nullptr) && (visited.count(node->left) == 0))
            {
                stack.push(node->left);
                continue;
            }

            // On InOrder, execute the callback after handling the left subtree of the node.
            if (type == Base::DepthFirstSearchType::in_order)
            {
                run_cb(node);
            }

            // Add right node to stack if it exists and it was not already visited.
            if ((node->right != nullptr) && (visited.count(node->right) == 0))
            {
                stack.push(node->right);
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

    Detail::Node<T> * root; /**< The root node of the binary tree. */
};

}

// NOLINTEND(cppcoreguidelines-owning-memory)

#endif /* CPP_DSA_BINARY_TREE_POINTERS_HPP */

/******************************************************************************************************END OF FILE*****/
