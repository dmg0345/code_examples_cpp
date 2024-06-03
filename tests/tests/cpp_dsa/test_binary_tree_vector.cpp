/**
 ***********************************************************************************************************************
 * @file        test_binary_tree_vector.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include "test_utils/test_utils.hpp"
#include "cpp_dsa/cpp_dsa.hpp"
#include <array>

using CppDSA::BinaryTree::Base::DepthFirstSearchType;
using CppDSA::BinaryTree::Vector::BinaryTree;
using Tests::Utils::Log;

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

/**
 * @brief Namespace for the tests of binary tree based on vector.
 */
namespace Tests::CppDSA::BinaryTreeVector
{

/**
 * @brief Test suite, instantiated for every test.
 */
class BinaryTreeVectorTest : public testing::Test
{
protected:
    /**
     * @brief Setup function, called after the constructor in every test.
     */
    void SetUp() override { Log::num_reset(); }

    /**
     * @brief Teardown function, called before the destructor in every test.
     */
    void TearDown() override { }
};

/**
 * @brief Tests a binary tree of integers.
 */
TEST_F(BinaryTreeVectorTest, Integer)
{
    BinaryTree<int> btint;

    // Insert items in the tree.
    ASSERT_EQ(btint.insert(0U), 0U);
    ASSERT_EQ(btint.insert(1U), 1U);
    ASSERT_EQ(btint.insert(2U), 2U);
    ASSERT_EQ(btint.insert(3U), 3U);
    ASSERT_EQ(btint.insert(4U), 4U);
    ASSERT_EQ(btint.insert(5U), 5U);
    ASSERT_EQ(btint.insert(6U), 6U);
    ASSERT_EQ(btint.insert(7U), 7U);
    ASSERT_EQ(btint.insert(8U), 8U);
    ASSERT_EQ(btint.insert(9U), 9U);
    ASSERT_EQ(btint.insert(10U), 10U);
    ASSERT_EQ(btint.insert(11U), 11U);
    ASSERT_EQ(btint.insert(12U), 12U);
    ASSERT_EQ(btint.insert(13U), 13U);
    ASSERT_EQ(btint.insert(14U), 14U);

    // Verify size and empty.
    ASSERT_EQ(btint.size(), 15U);
    ASSERT_EQ(btint.empty(), false);

    // Verify Breadth First Search.
    size_t index = 0U;
    constexpr std::array<int, 15U> bfs_arr = {0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U, 12U, 13U, 14U};
    auto verify_bfs = [&index, &bfs_arr](const int & item) -> bool
    {
        EXPECT_EQ(item, bfs_arr[index]); // NOLINT(cppcoreguidelines-pro-bounds-constant-array-index)
        index++;
        return true;
    };
    btint.bfs(verify_bfs);

    // Verify Depth First Search, PreOrder.
    index = 0U;
    constexpr std::array<int, 15U> dfs_pre_arr = {0U, 1U, 3U, 7U, 8U, 4U, 9U, 10U, 2U, 5U, 11U, 12U, 6U, 13U, 14U};
    auto verify_dfs_pre = [&index, &dfs_pre_arr](const int & item) -> bool
    {
        EXPECT_EQ(item, dfs_pre_arr[index]); // NOLINT(cppcoreguidelines-pro-bounds-constant-array-index)
        index++;
        return true;
    };
    btint.dfs(DepthFirstSearchType::pre_order, verify_dfs_pre);
    ASSERT_EQ(index, 15U);

    // Verify Depth First Search, InOrder.
    index = 0U;
    constexpr std::array<int, 15U> dfs_in_arr = {7U, 3U, 8U, 1U, 9U, 4U, 10U, 0U, 11U, 5U, 12U, 2U, 13U, 6U, 14U};
    auto verify_dfs_in = [&index, &dfs_in_arr](const int & item) -> bool
    {
        EXPECT_EQ(item, dfs_in_arr[index]); // NOLINT(cppcoreguidelines-pro-bounds-constant-array-index)
        index++;
        return true;
    };
    btint.dfs(DepthFirstSearchType::in_order, verify_dfs_in);
    ASSERT_EQ(index, 15U);

    // Verify Depth First Search, PostOrder.
    index = 0U;
    constexpr std::array<int, 15U> dfs_post_arr = {7U, 8U, 3U, 9U, 10U, 4U, 1U, 11U, 12U, 5U, 13U, 14U, 6U, 2U, 0U};
    auto verify_dfs_post = [&index, &dfs_post_arr](const int & item) -> bool
    {
        EXPECT_EQ(item, dfs_post_arr[index]); // NOLINT(cppcoreguidelines-pro-bounds-constant-array-index)
        index++;
        return true;
    };
    btint.dfs(DepthFirstSearchType::post_order, verify_dfs_post);
    ASSERT_EQ(index, 15U);

    // Check if values exist.
    ASSERT_TRUE(btint.contains(0U));
    ASSERT_TRUE(btint.contains(2U));
    ASSERT_TRUE(btint.contains(4U));
    ASSERT_TRUE(btint.contains(7U));
    ASSERT_TRUE(btint.contains(9U));
    ASSERT_TRUE(btint.contains(12U));
    ASSERT_TRUE(btint.contains(14U));
}

}

// NOLINTEND(cppcoreguidelines-owning-memory)

/**
 * @brief Test runner for this suite of tests.
 * @return The result of the test runner.
 */
int main(int argc, char ** argv)
{
    // Initialize GoogleTest and GoogleMock.
    Tests::Utils::GoogleTest::init(argc, argv);

    // Execute the test runner.
    return RUN_ALL_TESTS();
}

/******************************************************************************************************END OF FILE*****/
