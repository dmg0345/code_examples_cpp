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
 * @tparam T Type of the data in the binary tree.
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
        // On a first pass, find the node to delete and the bottom right most node.
        Detail::Node<T> * ndel = nullptr;
        Detail::Node<T> * nbrm = nullptr;
        auto fiterator = [&ndel, &nbrm, &data](Detail::Node<T> & node) -> bool
        {
            // Find node to delete.
            if (ndel == nullptr)
            {
                ndel = (node.data == data) ? &node : nullptr;
            }
            // Keep track bottom right most node so far.
            nbrm = &node;
            // Keep looking for nodes till the end.
            return true;
        };
        // Traverse tree to find nodes.
        bfs_node(fiterator);

        // If no node to delete because of empty or no node with data given, then nothing to do.
        if (ndel == nullptr)
        {
            return;
        }

        // On a second pass, find the parent link to the node to delete and bottom right most node.
        Detail::Node<T> ** ndel_par_link = nullptr;
        Detail::Node<T> ** nbrm_par_link = nullptr;
        auto siterator = [&ndel_par_link, &nbrm_par_link, &ndel, &nbrm](Detail::Node<T> & node) -> bool
        {
            // Find parent link for deleted node.
            if (node.left == ndel)
            {
                ndel_par_link = &node.left;
            }
            else if (node.right == ndel)
            {
                ndel_par_link = &node.right;
            }
            // Find parent link for right most node.
            if (node.left == nbrm)
            {
                nbrm_par_link = &node.left;
            }
            else if (node.right == nbrm)
            {
                nbrm_par_link = &node.right;
            }
            // Keep looking till all nodes found.
            return ((ndel_par_link == nullptr) || (nbrm_par_link == nullptr));
        };
        // Traverse tree to find parents of the nodes.
        bfs_node(siterator);

        // Handle children of the nodes //

        // Swap left and right nodes of the bottom right most node and the node to delete.
        if (nbrm != ndel)
        {
            std::swap(nbrm->left, ndel->left);
            std::swap(nbrm->right, ndel->right);

            // Ensure no self loops, this can occur when nodes are related as parent - child.
            nbrm->left = (nbrm->left == nbrm) ? nullptr : nbrm->left;
            nbrm->right = (nbrm->right == nbrm) ? nullptr : nbrm->right;
        }

        // Handle parents of the nodes //

        // If the node to delete has no parent, then the root is being deleted.
        if (ndel_par_link == nullptr)
        {
            // If bottom right most node has no parent, then it is also the root and tree become empty.
            if (nbrm_par_link == nullptr)
            {
                root = nullptr;
            }
            else
            {
                // Update root to bottom right most node.
                root = nbrm;
                // Update parent link of previous bottom right most node to no node.
                *nbrm_par_link = nullptr;
            }
        }
        // If there is a parent to the node to delete, then there is also a parent to the bottom right most node.
        else
        {
            // Update parent link of deleted node to bottom right most node.
            *ndel_par_link = nbrm;
            // Update parent link of previous bottom right most node to no node.
            *nbrm_par_link = nullptr;
        }

        // Delete node, now that it has been converted to a leaf node without left or right nodes.
        delete ndel;
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

        // Queue auxiliary structure.
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

/**
 * @brief Binary search tree.
 * @tparam T Type of data in the binary search tree.
 */
template<typename T>
class BinarySearchTree : public BinaryTree<T>
{
public:
    /**
     * @brief Constructs a new binary search tree.
     */
    BinarySearchTree<T>() : BinaryTree<T>() { }

    BinarySearchTree<T>(const BinarySearchTree<T> & bt) = delete;
    BinarySearchTree<T> & operator=(const BinarySearchTree<T> & bt) = delete;
    BinarySearchTree<T>(BinarySearchTree<T> && bt) noexcept = delete;
    BinarySearchTree<T> & operator=(BinarySearchTree<T> && bt) noexcept = delete;
    ~BinarySearchTree<T>() override = default;

    T & insert(const T & data) override
    {
        // Create node.
        Detail::Node<T> * new_node = new Detail::Node<T>(data, nullptr, nullptr);

        // If empty, then assign root node.
        if (BinaryTree<T>::empty())
        {
            BinaryTree<T>::root = new_node;
        }
        else
        {
            // Insert in order in the tree, with less than or equal to root in the left subtree.
            Detail::Node<T> * node = BinaryTree<T>::root;
            while (true)
            {
                // If less or equal than the data.
                if (new_node->data <= node->data)
                {
                    if (node->left == nullptr)
                    {
                        node->left = new_node;
                        break;
                    }
                    node = node->left;
                }
                // If greater than the data, then add right.
                else
                {
                    if (node->right == nullptr)
                    {
                        node->right = new_node;
                        break;
                    }
                    node = node->right;
                }
            }
        }

        return new_node->data;
    }

    void remove(const T & data) override
    {
        // If the tree is empty return immediately.
        if (BinaryTree<T>::empty())
        {
            return;
        }

        // Find node to delete and its link to the parent.
        Detail::Node<T> * node = BinaryTree<T>::root;
        Detail::Node<T> ** par_link = nullptr;
        while (node != nullptr)
        {
            // Check if node found.
            if (node->data == data)
            {
                break;
            }

            // Move to left or right node.
            if (data < node->data)
            {
                par_link = &node->left;
                node = node->left;
            }
            else
            {
                par_link = &node->right;
                node = node->right;
            }
        }

        // If there is nothing to remove, return.
        if (node == nullptr)
        {
            return;
        }

        // Handle a leaf node being removed.
        if ((node->left == nullptr) && (node->right == nullptr))
        {
            // If there is no parent link, then it is the root node being removed.
            if (par_link == nullptr)
            {
                BinaryTree<T>::root = nullptr;
            }
            // Otherwise, remove the link from the parent to the node.
            else
            {
                *par_link = nullptr;
            }
        }
        // Handle a node that has a left child node and a right child node.
        else if ((node->left != nullptr) && (node->right != nullptr))
        {
            // Get minimum value in the right child of the node, that is, the bottom left most node.
            Detail::Node<T> ** blm_par_link = &node->right;
            Detail::Node<T> * blm_node = node->right;
            while (blm_node->left != nullptr)
            {
                blm_par_link = &blm_node->left;
                blm_node = blm_node->left;
            }

            // If there is no parent link, then the root is being removed.
            if (par_link == nullptr)
            {
                BinaryTree<T>::root = blm_node;
            }
            else
            {
                *par_link = blm_node;
            }

            // Bottom left most node will have no left children, assign children if any of the node to delete.
            blm_node->left = node->left;
            // Bottom left most node can have right children, which are assigned to the parent link.
            *blm_par_link = blm_node->right;
            // Bottom left most node right children become those of the node to delete.
            blm_node->right = node->right;
        }
        // Handle a note that has a left child node or a right child node.
        else
        {
            // Get child node.
            Detail::Node<T> * child_node = (node->left == nullptr) ? node->right : node->left;

            // If there is no parent link, then the root is being removed.
            if (par_link == nullptr)
            {
                BinaryTree<T>::root = child_node;
            }
            // Otherwise, make the parent link of the node to remove point to child node.
            else
            {
                *par_link = child_node;
            }
        }

        // Delete node.
        delete node;
    }

    bool contains(const T & data) override
    {
        Detail::Node<T> * node = BinaryTree<T>::root;

        while (node != nullptr)
        {
            // If node found, then return true.
            if (node->data == data)
            {
                return true;
            }

            // Switch to left or right node next.
            if (data < node->data)
            {
                node = node->left;
            }
            else
            {
                node = node->right;
            }
        }

        return false;
    }
};

}

// NOLINTEND(cppcoreguidelines-owning-memory)

#endif /* CPP_DSA_BINARY_TREE_POINTERS_HPP */

/******************************************************************************************************END OF FILE*****/
