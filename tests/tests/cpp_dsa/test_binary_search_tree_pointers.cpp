/**
 ***********************************************************************************************************************
 * @file        test_binary_search_tree_pointers.cpp
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
using CppDSA::BinaryTree::Pointers::BinarySearchTree;

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

/**
 * @brief Namespace for the tests of binary tree based on pointers.
 */
namespace Tests::CppDSA::BinarySearchTreePointers
{

/**
 * @brief Test suite, instantiated for every test.
 */
class BinarySearchTreePointersTest : public testing::Test
{
protected:
    /**
     * @brief Setup function, called after the constructor in every test.
     */
    void SetUp() override { }

    /**
     * @brief Teardown function, called before the destructor in every test.
     */
    void TearDown() override { }
};

/**
 * @brief Tests a binary tree of integers.
 */
TEST_F(BinarySearchTreePointersTest, Integer)
{
    BinarySearchTree<int> btsint;

    // Insert items in the tree.
    ASSERT_EQ(btsint.insert(21U), 21U);
    ASSERT_EQ(btsint.insert(14U), 14U);
    ASSERT_EQ(btsint.insert(11U), 11U);
    ASSERT_EQ(btsint.insert(5U), 5U);
    ASSERT_EQ(btsint.insert(12U), 12U);
    ASSERT_EQ(btsint.insert(18U), 18U);
    ASSERT_EQ(btsint.insert(15U), 15U);
    ASSERT_EQ(btsint.insert(19U), 19U);
    ASSERT_EQ(btsint.insert(28U), 28U);
    ASSERT_EQ(btsint.insert(25U), 25U);
    ASSERT_EQ(btsint.insert(23U), 23U);
    ASSERT_EQ(btsint.insert(27U), 27U);
    ASSERT_EQ(btsint.insert(32U), 32U);
    ASSERT_EQ(btsint.insert(30U), 30U);
    ASSERT_EQ(btsint.insert(37U), 37U);

    // Verify size and empty.
    ASSERT_EQ(btsint.size(), 15U);
    ASSERT_FALSE(btsint.empty());

    // Verify Depth First Search InOrder returns values sorted.
    size_t index = 0U;
    constexpr std::array<int, 15U> dfs_io_arr =
        {5U, 11U, 12U, 14U, 15U, 18U, 19U, 21U, 23U, 25U, 27U, 28U, 30U, 32U, 37U};
    auto verify_dfs_io = [&index, &dfs_io_arr](const int & item) -> bool
    {
        EXPECT_EQ(item, dfs_io_arr[index]); // NOLINT(cppcoreguidelines-pro-bounds-constant-array-index)
        index++;
        return true;
    };
    btsint.dfs(DepthFirstSearchType::in_order, verify_dfs_io);

    // Check if values exist.
    ASSERT_TRUE(btsint.contains(21U));
    ASSERT_TRUE(btsint.contains(12U));
    ASSERT_TRUE(btsint.contains(15U));
    ASSERT_TRUE(btsint.contains(19U));
    ASSERT_TRUE(btsint.contains(23U));
    ASSERT_TRUE(btsint.contains(30U));
    ASSERT_TRUE(btsint.contains(37U));

    // Remove all nodes in random order.
    btsint.remove(5U);
    btsint.remove(11U);
    btsint.remove(12U);
    btsint.remove(14U);
    btsint.remove(18U);
    btsint.remove(15U);
    btsint.remove(19U);
    btsint.remove(21U);
    btsint.remove(28U);
    btsint.remove(25U);
    btsint.remove(23U);
    btsint.remove(27U);
    btsint.remove(32U);
    btsint.remove(30U);
    btsint.remove(37U);

    // Check empty and size.
    ASSERT_EQ(btsint.size(), 0U);
    ASSERT_TRUE(btsint.empty());
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
