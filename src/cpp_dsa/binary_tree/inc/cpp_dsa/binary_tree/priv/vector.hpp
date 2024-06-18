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
#include <climits>

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
 * @tparam T Type of the data in the binary tree.
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

        // Create lambda to iterate all nodes until an invalid one is found that can be replaced.
        auto iterator = [&node_added, &data](Detail::Node<T> & node, const size_t &) -> bool
        {
            // Check for invalid node to fill with valid data.
            if (!node.valid)
            {
                // Fill data with new data.
                node.data = data;
                // Signal that node is now valid.
                node.valid = true;
                // Signal that node was added and exit.
                node_added = &node;
                return false;
            }
            // Continue looking for nodes.
            return true;
        };
        // Loop valid and invalid nodes.
        bfs_node(iterator, false);

        // If the node was still not added it means that there are no invalid nodes, thus build it inline in the vector.
        if (node_added == nullptr)
        {
            v.emplace_back(data);
            node_added = &v[v.size() - 1U];
        }

        return node_added->data;
    }

    void remove(const T & data) override
    {
        // On a first pass, find the node to delete and the bottom right most node.
        size_t ndel_i = INT_MAX;
        size_t nbrm_i = INT_MAX;
        auto fiterator = [&ndel_i, &nbrm_i, &data](Detail::Node<T> & node, const size_t & node_i) -> bool
        {
            // Find node to delete.
            ndel_i = (node.data == data) ? node_i : ndel_i;
            // Keep track bottom right most node so far.
            nbrm_i = node_i;
            // Keep looking for nodes till the end.
            return true;
        };
        // Traverse tree to find valid nodes.
        bfs_node(fiterator, true);

        // If no node to delete because of empty or no node with data given, then nothing to do.
        if (ndel_i == INT_MAX)
        {
            return;
        }

        // If the nodes are different, then swap their data.
        if (ndel_i != nbrm_i)
        {
            std::swap(*get_node(ndel_i), *get_node(nbrm_i));
        }

        // Destroy and invalidate node, now that it has been converted to a leaf without children.
        Detail::Node<T> * ndel = get_node(nbrm_i);
        ndel->data.~T();
        ndel->valid = false;
    }

    bool contains(const T & data) override
    {
        bool ret_val = false;

        // Create iterator for the traverse of the tree.
        auto iterator = [&ret_val, &data](Detail::Node<T> & node, const size_t &) -> bool
        {
            // Check if data matches for valid nodes.
            ret_val = (data == node.data);
            return !ret_val;
        };
        bfs_node(iterator, true);

        return ret_val;
    }

    bool empty() override { return (!v.empty()) ? !(get_node(0U)->valid) : true; }

    size_t size() override
    {
        size_t count = 0U;

        // Create iterator for the traverse of the tree.
        auto iterator = [&count](Detail::Node<T> &, const size_t & node_i) -> bool
        {
            count = node_i + 1U;
            return true;
        };
        // Perform traverse on valid nodes.
        bfs_node(iterator, true);

        return count;
    }

    void bfs(const Base::TraverseCallback<T> & callback) override
    {
        // Create iterator for the traverse of the tree.
        auto iterator = [&callback](Detail::Node<T> & node, const size_t &) -> bool { return callback(node.data); };
        // Perform traverse only on valid nodes.
        bfs_node(iterator, true);
    }

    void dfs(const Base::DepthFirstSearchType & type, const Base::TraverseCallback<T> & callback) override
    {
        // Create iterator for the traverse of the tree.
        auto iterator = [&callback](Detail::Node<T> & node, const size_t &) -> bool { return callback(node.data); };
        // Perform traverse only on valid nodes.
        dfs_node(type, iterator, true);
    }

protected:
    /**
     * @brief Breath First Search for each valid / invalid node.
     * @param[in] callback Callback to execute on each node, return @c false to stop.
     * @param[in] valid If @c true, executes the callback on valid nodes only.
     */
    void bfs_node(const std::function<bool(Detail::Node<T> &, const size_t &)> & callback, const bool valid)
    {
        // Simply iterate all nodes by index.
        for (size_t index = 0U; index < v.size(); index++)
        {
            // Get the node at the specified index.
            Detail::Node<T> * node = get_node(index);

            // If only executing the callback on valid nodes, ensure the node is valid.
            if ((valid) && (!node->valid))
            {
                continue;
            }

            // Execute the callback.
            if (!callback(*node, index))
            {
                break;
            }
        }
    }

    /**
     * @brief Depth First Search for each node.
     * @param[in] type The type of depth first search to perform.
     * @param[in] callback Callback to execute on each node, return @c false to stop.
     * @param[in] valid If @c true, executes the callback on valid nodes only.
     */
    void dfs_node(const Base::DepthFirstSearchType & type,
                  const std::function<bool(Detail::Node<T> &, const size_t)> & callback,
                  const bool valid)
    {
        // If no nodes, then exit immediately.
        if (empty())
        {
            return;
        }

        // Stack and hash map auxiliary structures.
        std::stack<size_t> stack;
        std::unordered_map<size_t, bool> visited;

        // Shortcut to execute callback.
        auto run_cb = [&callback, &visited](Detail::Node<T> *& node, const size_t node_i) -> bool
        {
            // If the node has already been visited, do not execute callback.
            if (visited.count(node_i) > 0U)
            {
                return true;
            }
            // Call callback and store return value.
            const bool ret_val = callback(*node, node_i);
            // Mark node as visited.
            visited[node_i] = true;

            return ret_val;
        };

        // Add root node to queue and start the loop.
        stack.push(0U);
        while (!stack.empty())
        {
            // Get node from the stack.
            const size_t node_i = stack.top();
            Detail::Node<T> * node = get_node(node_i);

            // On PreOrder, execute the callback prior to handling left and right subtrees of the node.
            if (type == Base::DepthFirstSearchType::pre_order)
            {
                run_cb(node, node_i);
            }

            // Add left node to stack if it is valid and it was not already visited.
            const size_t left_i = get_left_node_index(node_i);
            Detail::Node<T> * left_n = get_node(left_i);
            const bool left_v = ((left_n != nullptr) && (((valid) && (left_n->valid)) || (!valid)));
            if ((left_v) && (visited.count(left_i) == 0U))
            {
                stack.push(left_i);
                continue;
            }

            // On InOrder, execute the callback after handling the left subtree of the node.
            if (type == Base::DepthFirstSearchType::in_order)
            {
                run_cb(node, node_i);
            }

            // Add right node to stack if it exists and it was not already visited.
            const size_t right_i = get_right_node_index(node_i);
            Detail::Node<T> * right_n = get_node(right_i);
            const bool right_v = ((right_n != nullptr) && (((valid) && (right_n->valid)) || (!valid)));
            if ((right_v) && (visited.count(right_i) == 0U))
            {
                stack.push(right_i);
                continue;
            }

            // On PostOrder, execute the callback after handling both left and right subtrees of the node.
            if (type == Base::DepthFirstSearchType::post_order)
            {
                run_cb(node, node_i);
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
     * @brief Determines if a node at the specified index is valid.
     * @param[in] index The index of the node.
     * @return @c true if valid, or @c false if it doesn't exist or invalid.
     */
    bool is_valid_node(const size_t index)
    {
        // Get the node.
        Detail::Node<T> * node = get_node(index);
        // If node doesn't exist or invalid, return false, otherwise true.
        return (node == nullptr) ? false : node->valid;
    }

    /**
     * @brief Obtains the index of the parent node given a left or right node index.
     * @param[in] index The index.
     * @return The index of the parent node, or @c INT_MAX if the index is the root node.
     */
    static constexpr size_t get_parent_node_index(const size_t index)
    {
        // If index of the root node, then return a fixed value.
        if (index == 0U)
        {
            return INT_MAX;
        }
        // Check if left or right node index to determine parent index.
        if (is_left_node_index(index))
        {
            return index / 2U;
        }
        return (index - 1U) / 2U;
    }

    /**
     * @brief Gets the index of the left node of a node.
     * @param[in] index The index.
     * @return The index left of a node.
     */
    static constexpr size_t get_left_node_index(const size_t index) { return ((index * 2U) + 1U); }

    /**
     * @brief Determines if the index given is for a left node.
     * @param[in] index The index.
     * @return @c true if the index is for a left node, @c false otherwise.
     */
    static constexpr bool is_left_node_index(const size_t index) { return ((index & 1U) == 1U); }

    /**
     * @brief Gets the index of the right node of a node.
     * @param[in] index The index.
     * @return The index right of a node.
     */
    static constexpr size_t get_right_node_index(const size_t index) { return ((index * 2U) + 2U); }

    /**
     * @brief Determines if the index given is for a right node.
     * @param[in] index The index.
     * @return @c true if the index is for a right node, @c false otherwise.
     */
    static constexpr bool is_right_node_index(const size_t index) { return !is_left_node_index(index); }

    std::vector<Detail::Node<T>> v; /**< The underlying vector. */
};

/**
 * @brief Binary tree class.
 * @tparam T Type of the data in the maximum heap.
 */
template<typename T>
class MaximumHeap : public BinaryTree<T>
{
public:
    /**
     * @brief Constructs a new maximum heap.
     */
    MaximumHeap<T>() : BinaryTree<T>() { }

    MaximumHeap<T>(const MaximumHeap<T> & bt) = delete;
    MaximumHeap<T> & operator=(const MaximumHeap<T> & bt) = delete;
    MaximumHeap<T>(MaximumHeap<T> && bt) noexcept = delete;
    MaximumHeap<T> & operator=(MaximumHeap<T> && bt) noexcept = delete;
    ~MaximumHeap<T>() override = default;

    /**
     * @brief The data of the new node to push into the maximum heap.
     * @param[in] data The data of the node to be added.
     * @return The data of the node added.
     */
    T & push(const T & data)
    {
        // Add the element to the bottom of the heap.
        BinaryTree<T>::v.emplace_back(data);

        // Move element added up in the tree as required.
        size_t node_index = BinaryTree<T>::v.size() - 1U;
        size_t parent_index = BinaryTree<T>::get_parent_node_index(node_index);
        while (parent_index != INT_MAX)
        {
            // Check if the new node needs to be swapped with its parent.
            if (BinaryTree<T>::v[node_index].data > BinaryTree<T>::v[parent_index].data)
            {
                // Perform of child node with parent node.
                std::swap(BinaryTree<T>::v[node_index], BinaryTree<T>::v[parent_index]);
                // Update indices of new node and its new parent, if any.
                node_index = parent_index;
                parent_index = BinaryTree<T>::get_parent_node_index(node_index);
            }
            // If no need to be swapped, then the node is already at the correct place.
            else
            {
                break;
            }
        }

        return BinaryTree<T>::v[node_index].data;
    }

    /**
     * @brief Removes the top node from the maximum heap.
     */
    void pop()
    {
        // Check if there is something to remove.
        size_t size = BinaryTree<T>::v.size();
        if (size == 0U)
        {
            return;
        }

        // If there is more than one element, then swap the root with the bottom element.
        if (size > 1U)
        {
            std::swap(BinaryTree<T>::v[0U], BinaryTree<T>::v[size - 1U]);
        }

        // Destroy the bottom element, now the root.
        BinaryTree<T>::v.pop_back();
        size--;

        // Check if the element now at the root needs to be rearranged.
        if (size > 1U)
        {
            size_t node_i = 0U;
            while (true)
            {
                // Get indices of left and right child nodes.
                const size_t lnode_i = BinaryTree<T>::get_left_node_index(node_i);
                const size_t rnode_i = BinaryTree<T>::get_right_node_index(node_i);

                // Get the largest node between the node and its children, if they exist.
                size_t lgnode_i = node_i;
                if ((lnode_i < size) && (BinaryTree<T>::v[lnode_i].data >= BinaryTree<T>::v[lgnode_i].data))
                {
                    lgnode_i = lnode_i;
                }
                if ((rnode_i < size) && (BinaryTree<T>::v[rnode_i].data >= BinaryTree<T>::v[lgnode_i].data))
                {
                    lgnode_i = rnode_i;
                }

                // If the largest node is the node already, then exit as node is in the right place.
                if (lgnode_i == node_i)
                {
                    break;
                }
                // Otherwise swap node with largest child and continue.
                std::swap(BinaryTree<T>::v[node_i], BinaryTree<T>::v[lgnode_i]);
                node_i = lgnode_i;
            }
        }
    }

    /**
     * @brief Retrieves the value of the top node in the maximum heap.
     * @return The value of the top node.
     */
    T & top() { return BinaryTree<T>::v[0U].data; }

protected:
    using BinaryTree<T>::insert;
    using BinaryTree<T>::remove;
};

}

#endif /* CPP_DSA_BINARY_TREE_VECTOR_HPP */

/******************************************************************************************************END OF FILE*****/
