/**
 ***********************************************************************************************************************
 * @file        test_stack_list.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include "test_utils/test_utils.hpp"
#include "cpp_dsa/cpp_dsa.hpp"

using CppDSA::Stack::List::Stack;
using Tests::Utils::Log;

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

/**
 * @brief Namespace for the tests of stack based on linked list implementation.
 */
namespace Tests::CppDSA::StackLinkedList
{

/**
 * @brief Test suite, instantiated for every test.
 */
class StackLinkedListTest : public testing::Test
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
 * @brief Tests a stack of integers.
 */
TEST_F(StackLinkedListTest, Integer)
{
    Stack<int> sint;
    int tmp = 0U;

    // Push values to the stack.
    ASSERT_EQ(sint.push(0U), 0U);
    ASSERT_EQ(sint.push(1U), 1U);
    ASSERT_EQ(sint.push(2U), 2U);
    ASSERT_EQ(sint.push(3U), 3U);
    ASSERT_EQ(sint.push(4U), 4U);

    // Check empty and size.
    ASSERT_EQ(sint.empty(), false);
    ASSERT_EQ(sint.size(), 5U);

    // Check values and pop them.
    ASSERT_EQ(sint.top(), 4U);
    sint.pop(&tmp);
    ASSERT_EQ(tmp, 4U);
    ASSERT_EQ(sint.top(), 3U);
    sint.pop(&tmp);
    ASSERT_EQ(tmp, 3U);
    ASSERT_EQ(sint.top(), 2U);
    sint.pop(&tmp);
    ASSERT_EQ(tmp, 2U);
    ASSERT_EQ(sint.top(), 1U);
    sint.pop(&tmp);
    ASSERT_EQ(tmp, 1U);
    ASSERT_EQ(sint.top(), 0U);
    sint.pop(&tmp);
    ASSERT_EQ(tmp, 0U);

    // Check empty and size.
    ASSERT_EQ(sint.empty(), true);
    ASSERT_EQ(sint.size(), 0U);
}

/**
 * @brief Tests a stack of constant integers.
 */
TEST_F(StackLinkedListTest, ConstantInteger)
{
    Stack<const int> scint;
    int tmp = 0U;

    // Push values to the stack.
    ASSERT_EQ(scint.push(0U), 0U);
    ASSERT_EQ(scint.push(1U), 1U);
    ASSERT_EQ(scint.push(2U), 2U);
    ASSERT_EQ(scint.push(3U), 3U);
    ASSERT_EQ(scint.push(4U), 4U);

    // Check empty and size.
    ASSERT_EQ(scint.empty(), false);
    ASSERT_EQ(scint.size(), 5U);

    // Check values and pop them.
    ASSERT_EQ(scint.top(), 4U);
    scint.pop(&tmp);
    ASSERT_EQ(tmp, 4U);
    ASSERT_EQ(scint.top(), 3U);
    scint.pop(&tmp);
    ASSERT_EQ(tmp, 3U);
    ASSERT_EQ(scint.top(), 2U);
    scint.pop(&tmp);
    ASSERT_EQ(tmp, 2U);
    ASSERT_EQ(scint.top(), 1U);
    scint.pop(&tmp);
    ASSERT_EQ(tmp, 1U);
    ASSERT_EQ(scint.top(), 0U);
    scint.pop(&tmp);
    ASSERT_EQ(tmp, 0U);

    // Check empty and size.
    ASSERT_EQ(scint.empty(), true);
    ASSERT_EQ(scint.size(), 0U);
}

/**
 * @brief Tests a stack of logs.
 */
TEST_F(StackLinkedListTest, Log)
{
    Stack<Log> slog;
    Log tmp;

    // Push values to the stack.
    ASSERT_EQ(slog.push(Log()).num(), 2U);
    ASSERT_EQ(slog.push(Log()).num(), 4U);
    ASSERT_EQ(slog.push(Log()).num(), 6U);
    ASSERT_EQ(slog.push(Log()).num(), 8U);
    ASSERT_EQ(slog.push(Log()).num(), 10U);

    // Check empty and size.
    ASSERT_EQ(slog.empty(), false);
    ASSERT_EQ(slog.size(), 5U);

    // Check values and pop them.
    ASSERT_EQ(slog.top().num(), 10U);
    slog.pop(&tmp);
    ASSERT_EQ(tmp.num(), 10U);
    ASSERT_EQ(slog.top().num(), 8U);
    slog.pop(&tmp);
    ASSERT_EQ(tmp.num(), 8U);
    ASSERT_EQ(slog.top().num(), 6U);
    slog.pop(&tmp);
    ASSERT_EQ(tmp.num(), 6U);
    ASSERT_EQ(slog.top().num(), 4U);
    slog.pop(&tmp);
    ASSERT_EQ(tmp.num(), 4U);
    ASSERT_EQ(slog.top().num(), 2U);
    slog.pop(&tmp);
    ASSERT_EQ(tmp.num(), 2U);

    // Check empty and size.
    ASSERT_EQ(slog.empty(), true);
    ASSERT_EQ(slog.size(), 0U);
}

/**
 * @brief Tests a stack of constant logs.
 */
TEST_F(StackLinkedListTest, ConstantLog)
{
    Stack<const Log> sclog;
    Log tmp;

    // Push values to the stack.
    ASSERT_EQ(sclog.push(Log()).num(), 2U);
    ASSERT_EQ(sclog.push(Log()).num(), 4U);
    ASSERT_EQ(sclog.push(Log()).num(), 6U);
    ASSERT_EQ(sclog.push(Log()).num(), 8U);
    ASSERT_EQ(sclog.push(Log()).num(), 10U);

    // Check empty and size.
    ASSERT_EQ(sclog.empty(), false);
    ASSERT_EQ(sclog.size(), 5U);

    // Check values and pop them, note copy constructor is used on pop.
    ASSERT_EQ(sclog.top().num(), 10U);
    sclog.pop(&tmp);
    ASSERT_EQ(tmp.num(), 11U);
    ASSERT_EQ(sclog.top().num(), 8U);
    sclog.pop(&tmp);
    ASSERT_EQ(tmp.num(), 12U);
    ASSERT_EQ(sclog.top().num(), 6U);
    sclog.pop(&tmp);
    ASSERT_EQ(tmp.num(), 13U);
    ASSERT_EQ(sclog.top().num(), 4U);
    sclog.pop(&tmp);
    ASSERT_EQ(tmp.num(), 14U);
    ASSERT_EQ(sclog.top().num(), 2U);
    sclog.pop(&tmp);
    ASSERT_EQ(tmp.num(), 15U);

    // Check empty and size.
    ASSERT_EQ(sclog.empty(), true);
    ASSERT_EQ(sclog.size(), 0U);
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
