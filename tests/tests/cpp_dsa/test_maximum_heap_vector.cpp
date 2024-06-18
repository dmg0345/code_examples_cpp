/**
 ***********************************************************************************************************************
 * @file        test_maximum_heap_vector.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include "test_utils/test_utils.hpp"
#include "cpp_dsa/cpp_dsa.hpp"
#include <array>

using CppDSA::BinaryTree::Vector::MaximumHeap;

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

/**
 * @brief Namespace for the tests of a maximum heap based on vector.
 */
namespace Tests::CppDSA::MaximumHeapVector
{

/**
 * @brief Test suite, instantiated for every test.
 */
class MaximumHeapVectorTest : public testing::Test
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
 * @brief Tests a maximum heap of integers.
 */
TEST_F(MaximumHeapVectorTest, Integer)
{
    MaximumHeap<int> mhint;

    // Insert items in the maximum heap.
    ASSERT_EQ(mhint.push(2U), 2U);
    ASSERT_EQ(mhint.push(1U), 1U);
    ASSERT_EQ(mhint.push(0U), 0U);
    ASSERT_EQ(mhint.push(3U), 3U);
    ASSERT_EQ(mhint.push(4U), 4U);
    ASSERT_EQ(mhint.push(-1), -1);
    ASSERT_EQ(mhint.push(-2), -2);

    // Verify size and empty.
    ASSERT_EQ(mhint.size(), 7U);
    ASSERT_FALSE(mhint.empty());

    // Verify top value and remove it until empty.
    ASSERT_EQ(mhint.top(), 4U);
    mhint.pop();
    ASSERT_EQ(mhint.top(), 3U);
    mhint.pop();
    ASSERT_EQ(mhint.top(), 2U);
    mhint.pop();
    ASSERT_EQ(mhint.top(), 1U);
    mhint.pop();
    ASSERT_EQ(mhint.top(), 0U);
    mhint.pop();
    ASSERT_EQ(mhint.top(), -1);
    mhint.pop();
    ASSERT_EQ(mhint.top(), -2);
    mhint.pop();

    // Check empty and size.
    ASSERT_EQ(mhint.size(), 0U);
    ASSERT_TRUE(mhint.empty());
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
