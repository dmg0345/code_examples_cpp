/**
 ***********************************************************************************************************************
 * @file        test_doubly_linked_list.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include "test_utils/test_utils.hpp"
#include "cpp_dsa/cpp_dsa.hpp"

using CppDSA::LinkedList::Doubly::Doubly;
using Tests::Utils::Log;

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

/**
 * @brief Namespace for the tests of doubly linked list.
 */
namespace Tests::CppDSA::DoublyLinkedList
{

/**
 * @brief Test suite, instantiated for every test.
 */
class DoublyTest : public testing::Test
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
 * @brief Tests a doubly linked list of integers.
 */
TEST_F(DoublyTest, Integer)
{
    Doubly<int> dint;
    int tmp = 0U;

    // Append values.
    ASSERT_EQ(dint.append(5U), 5U);
    ASSERT_EQ(dint.append(6U), 6U);
    ASSERT_EQ(dint.append(7U), 7U);
    ASSERT_EQ(dint.append(8U), 8U);

    // // Remove last values.
    dint.remove_last(&tmp);
    ASSERT_EQ(tmp, 8U);
    dint.remove_last(&tmp);
    ASSERT_EQ(tmp, 7U);
    dint.remove_last(&tmp);
    ASSERT_EQ(tmp, 6U);
    dint.remove_last(&tmp);
    ASSERT_EQ(tmp, 5U);

    // Prepend values.
    ASSERT_EQ(dint.prepend(4U), 4U);
    ASSERT_EQ(dint.prepend(3U), 3U);
    ASSERT_EQ(dint.prepend(2U), 2U);
    ASSERT_EQ(dint.prepend(1U), 1U);

    // Remove first values.
    dint.remove_first(&tmp);
    ASSERT_EQ(tmp, 1U);
    dint.remove_first(&tmp);
    ASSERT_EQ(tmp, 2U);
    dint.remove_first(&tmp);
    ASSERT_EQ(tmp, 3U);
    dint.remove_first(&tmp);
    ASSERT_EQ(tmp, 4U);

    // Insert values at index.
    ASSERT_EQ(dint.insert(0U, 0U), 0U); // [0]: 0.
    ASSERT_EQ(dint.insert(1U, 1U), 1U); // [0]: 0, [1]: 1.
    ASSERT_EQ(dint.insert(2U, 4U), 4U); // [0]: 0, [1]: 1, [2]: 4.
    ASSERT_EQ(dint.insert(3U, 5U), 5U); // [0]: 0, [1]: 1, [2]: 4, [3]: 5.
    ASSERT_EQ(dint.insert(1U, 2U), 2U); // [0]: 0, [1]: 1, [2]: 2, [3]: 4, [4]: 5.
    ASSERT_EQ(dint.insert(2U, 3U), 3U); // [0]: 0, [1]: 1, [2]: 2, [3]: 3, [4]: 4, [5]: 5.

    // Remove values at index.
    dint.remove(1U, &tmp); // [0]: 0, [1]: 2, [2]: 3, [3]: 4, [4]: 5.
    ASSERT_EQ(tmp, 1U);
    dint.remove(3U, &tmp); // [0]: 0, [1]: 2, [2]: 3, [3]: 5.
    ASSERT_EQ(tmp, 4U);
    dint.remove(1U, &tmp); // [0]: 0, [1]: 3, [2]: 5.
    ASSERT_EQ(tmp, 2U);
    dint.remove(2U, &tmp); // [0]: 0, [1]: 3.
    ASSERT_EQ(tmp, 5U);
    dint.remove(0U, &tmp); // [0]: 3.
    ASSERT_EQ(tmp, 0U);
    dint.remove(0U, &tmp);
    ASSERT_EQ(tmp, 3U);

    // Append values.
    ASSERT_EQ(dint.append(5U), 5U);
    ASSERT_EQ(dint.append(6U), 6U);
    ASSERT_EQ(dint.append(7U), 7U);
    ASSERT_EQ(dint.append(8U), 8U);
    ASSERT_EQ(dint.append(9U), 9U);

    // Subscript operator to set values.
    dint[0U] = 50U;
    dint[1U] = 60U;
    dint[2U] = 70U;
    dint[3U] = 80U;
    dint[4U] = 90U;

    // Subscript operator to get values.
    ASSERT_EQ(dint[0U], 50U);
    ASSERT_EQ(dint[1U], 60U);
    ASSERT_EQ(dint[2U], 70U);
    ASSERT_EQ(dint[3U], 80U);
    ASSERT_EQ(dint[4U], 90U);

    // Reverse operation.
    dint.reverse();

    // Subscript operator to get values after reverse.
    ASSERT_EQ(dint[0U], 90U);
    ASSERT_EQ(dint[1U], 80U);
    ASSERT_EQ(dint[2U], 70U);
    ASSERT_EQ(dint[3U], 60U);
    ASSERT_EQ(dint[4U], 50U);
}

/**
 * @brief Tests a doubly linked list of constant integers.
 */
TEST_F(DoublyTest, ConstantInteger)
{
    Doubly<const int> scint;
    int tmp = 0U;

    // Append values.
    ASSERT_EQ(scint.append(5U), 5U);
    ASSERT_EQ(scint.append(6U), 6U);
    ASSERT_EQ(scint.append(7U), 7U);
    ASSERT_EQ(scint.append(8U), 8U);

    // Remove last values.
    scint.remove_last(&tmp);
    ASSERT_EQ(tmp, 8U);
    scint.remove_last(&tmp);
    ASSERT_EQ(tmp, 7U);
    scint.remove_last(&tmp);
    ASSERT_EQ(tmp, 6U);
    scint.remove_last(&tmp);
    ASSERT_EQ(tmp, 5U);

    // Prepend values.
    ASSERT_EQ(scint.prepend(4U), 4U);
    ASSERT_EQ(scint.prepend(3U), 3U);
    ASSERT_EQ(scint.prepend(2U), 2U);
    ASSERT_EQ(scint.prepend(1U), 1U);

    // Remove first values.
    scint.remove_first(&tmp);
    ASSERT_EQ(tmp, 1U);
    scint.remove_first(&tmp);
    ASSERT_EQ(tmp, 2U);
    scint.remove_first(&tmp);
    ASSERT_EQ(tmp, 3U);
    scint.remove_first(&tmp);
    ASSERT_EQ(tmp, 4U);

    // Insert values at index.
    ASSERT_EQ(scint.insert(0U, 0U), 0U); // [0]: 0.
    ASSERT_EQ(scint.insert(1U, 1U), 1U); // [0]: 0, [1]: 1.
    ASSERT_EQ(scint.insert(2U, 4U), 4U); // [0]: 0, [1]: 1, [2]: 4.
    ASSERT_EQ(scint.insert(3U, 5U), 5U); // [0]: 0, [1]: 1, [2]: 4, [3]: 5.
    ASSERT_EQ(scint.insert(1U, 2U), 2U); // [0]: 0, [1]: 1, [2]: 2, [3]: 4, [4]: 5.
    ASSERT_EQ(scint.insert(2U, 3U), 3U); // [0]: 0, [1]: 1, [2]: 2, [3]: 3, [4]: 4, [5]: 5.

    // Remove values at index.
    scint.remove(1U, &tmp); // [0]: 0, [1]: 2, [2]: 3, [3]: 4, [4]: 5.
    ASSERT_EQ(tmp, 1U);
    scint.remove(3U, &tmp); // [0]: 0, [1]: 2, [2]: 3, [3]: 5.
    ASSERT_EQ(tmp, 4U);
    scint.remove(1U, &tmp); // [0]: 0, [1]: 3, [2]: 5.
    ASSERT_EQ(tmp, 2U);
    scint.remove(2U, &tmp); // [0]: 0, [1]: 3.
    ASSERT_EQ(tmp, 5U);
    scint.remove(0U, &tmp); // [0]: 3.
    ASSERT_EQ(tmp, 0U);
    scint.remove(0U, &tmp);
    ASSERT_EQ(tmp, 3U);

    // Append values.
    ASSERT_EQ(scint.append(5U), 5U);
    ASSERT_EQ(scint.append(6U), 6U);
    ASSERT_EQ(scint.append(7U), 7U);
    ASSERT_EQ(scint.append(8U), 8U);
    ASSERT_EQ(scint.append(9U), 9U);

    // Subscript operator to get values.
    ASSERT_EQ(scint[0U], 5U);
    ASSERT_EQ(scint[1U], 6U);
    ASSERT_EQ(scint[2U], 7U);
    ASSERT_EQ(scint[3U], 8U);
    ASSERT_EQ(scint[4U], 9U);

    // Reverse operation.
    scint.reverse();

    // Subscript operator to get values after reverse.
    ASSERT_EQ(scint[0U], 9U);
    ASSERT_EQ(scint[1U], 8U);
    ASSERT_EQ(scint[2U], 7U);
    ASSERT_EQ(scint[3U], 6U);
    ASSERT_EQ(scint[4U], 5U);
}

/**
 * @brief Tests a doubly linked list of log.
 */
TEST_F(DoublyTest, Log)
{
    Doubly<Log> slog;
    Log tmp{};

    // Append values.
    ASSERT_EQ(slog.append(Log()).num(), 2U);
    ASSERT_EQ(slog.append(Log()).num(), 4U);
    ASSERT_EQ(slog.append(Log()).num(), 6U);
    ASSERT_EQ(slog.append(Log()).num(), 8U);

    // Remove last values.
    slog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 8U);
    slog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 6U);
    slog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 4U);
    slog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 2U);

    // Prepend values.
    ASSERT_EQ(slog.prepend(Log()).num(), 10U);
    ASSERT_EQ(slog.prepend(Log()).num(), 12U);
    ASSERT_EQ(slog.prepend(Log()).num(), 14U);
    ASSERT_EQ(slog.prepend(Log()).num(), 16U);

    // Remove first values.
    slog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 16U);
    slog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 14U);
    slog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 12U);
    slog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 10U);

    // Insert values at index.
    ASSERT_EQ(slog.insert(0U, Log()).num(), 18U); // [0]: 18.
    ASSERT_EQ(slog.insert(1U, Log()).num(), 20U); // [0]: 18, [1]: 20.
    ASSERT_EQ(slog.insert(2U, Log()).num(), 22U); // [0]: 18, [1]: 20, [2]: 22.
    ASSERT_EQ(slog.insert(3U, Log()).num(), 24U); // [0]: 18, [1]: 20, [2]: 22, [3]: 24.
    ASSERT_EQ(slog.insert(1U, Log()).num(), 26U); // [0]: 18, [1]: 20, [2]: 26, [3]: 22, [4]: 24.
    ASSERT_EQ(slog.insert(2U, Log()).num(), 28U); // [0]: 18, [1]: 20, [2]: 26, [3]: 28, [4]: 22, [5]: 24.

    // Remove values at index.
    slog.remove(1U, &tmp); // [0]: 18, [1]: 26, [2]: 28, [3]: 22, [4]: 24.
    ASSERT_EQ(tmp.num(), 20U);
    slog.remove(3U, &tmp); // [0]: 18, [1]: 26, [2]: 28, [4]: 24.
    ASSERT_EQ(tmp.num(), 22U);
    slog.remove(1U, &tmp); // [0]: 18, [1]: 28, [2]: 24.
    ASSERT_EQ(tmp.num(), 26U);
    slog.remove(2U, &tmp); // [0]: 18, [1]: 28.
    ASSERT_EQ(tmp.num(), 24U);
    slog.remove(0U, &tmp); // [0]: 18.
    ASSERT_EQ(tmp.num(), 18U);
    slog.remove(0U, &tmp);
    ASSERT_EQ(tmp.num(), 28U);

    // Append values.
    ASSERT_EQ(slog.append(Log()).num(), 30U);
    ASSERT_EQ(slog.append(Log()).num(), 32U);
    ASSERT_EQ(slog.append(Log()).num(), 34U);
    ASSERT_EQ(slog.append(Log()).num(), 36U);
    ASSERT_EQ(slog.append(Log()).num(), 38U);

    // Subscript operator to set values.
    slog[0U] = Log();
    slog[1U] = Log();
    slog[2U] = Log();
    slog[3U] = Log();
    slog[4U] = Log();

    // Subscript operator to get values.
    ASSERT_EQ(slog[0U].num(), 39U);
    ASSERT_EQ(slog[1U].num(), 40U);
    ASSERT_EQ(slog[2U].num(), 41U);
    ASSERT_EQ(slog[3U].num(), 42U);
    ASSERT_EQ(slog[4U].num(), 43U);

    // Reverse operation.
    slog.reverse();

    // Subscript operator to get values after reverse.
    ASSERT_EQ(slog[0U].num(), 43U);
    ASSERT_EQ(slog[1U].num(), 42U);
    ASSERT_EQ(slog[2U].num(), 41U);
    ASSERT_EQ(slog[3U].num(), 40U);
    ASSERT_EQ(slog[4U].num(), 39U);
}

/**
 * @brief Tests a doubly linked list of constant logs.
 */
TEST_F(DoublyTest, ConstantLog)
{
    Doubly<const Log> sclog;
    Log tmp{};

    // Append values.
    ASSERT_EQ(sclog.append(Log()).num(), 2U);
    ASSERT_EQ(sclog.append(Log()).num(), 4U);
    ASSERT_EQ(sclog.append(Log()).num(), 6U);
    ASSERT_EQ(sclog.append(Log()).num(), 8U);

    // Remove last values, note these use the copy operator as they can't be moved.
    sclog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 9U);
    sclog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 10U);
    sclog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 11U);
    sclog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 12U);

    // Prepend values.
    ASSERT_EQ(sclog.prepend(Log()).num(), 14U);
    ASSERT_EQ(sclog.prepend(Log()).num(), 16U);
    ASSERT_EQ(sclog.prepend(Log()).num(), 18U);
    ASSERT_EQ(sclog.prepend(Log()).num(), 20U);

    // Remove first values.
    sclog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 21U);
    sclog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 22U);
    sclog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 23U);
    sclog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 24U);

    // Insert values at index.
    ASSERT_EQ(sclog.insert(0U, Log()).num(), 26U); // [0]: 26.
    ASSERT_EQ(sclog.insert(1U, Log()).num(), 28U); // [0]: 26, [1]: 28.
    ASSERT_EQ(sclog.insert(2U, Log()).num(), 30U); // [0]: 26, [1]: 28, [2]: 30.
    ASSERT_EQ(sclog.insert(3U, Log()).num(), 32U); // [0]: 26, [1]: 28, [2]: 30, [3]: 32.
    ASSERT_EQ(sclog.insert(1U, Log()).num(), 34U); // [0]: 26, [1]: 28, [2]: 34, [3]: 30, [4]: 32.
    ASSERT_EQ(sclog.insert(2U, Log()).num(), 36U); // [0]: 26, [1]: 28, [2]: 34, [3]: 36, [4]: 30, [5]: 32.

    // Remove values at index, note these use the copy operator as they can't be moved.
    sclog.remove(1U, &tmp); // [0]: 26, [1]: 34, [2]: 36, [3]: 30, [4]: 32.
    ASSERT_EQ(tmp.num(), 37U);
    sclog.remove(3U, &tmp); // [0]: 26, [1]: 34, [2]: 36, [3]: 32.
    ASSERT_EQ(tmp.num(), 38U);
    sclog.remove(1U, &tmp); // [0]: 26, [1]: 36, [2]: 32.
    ASSERT_EQ(tmp.num(), 39U);
    sclog.remove(2U, &tmp); // [0]: 26, [1]: 36.
    ASSERT_EQ(tmp.num(), 40U);
    sclog.remove(0U, &tmp); // [0]: 36.
    ASSERT_EQ(tmp.num(), 41U);
    sclog.remove(0U, &tmp);
    ASSERT_EQ(tmp.num(), 42U);

    // Append values.
    ASSERT_EQ(sclog.append(Log()).num(), 44U);
    ASSERT_EQ(sclog.append(Log()).num(), 46U);
    ASSERT_EQ(sclog.append(Log()).num(), 48U);
    ASSERT_EQ(sclog.append(Log()).num(), 50U);
    ASSERT_EQ(sclog.append(Log()).num(), 52U);

    // Subscript operator to get values.
    ASSERT_EQ(sclog[0U].num(), 44U);
    ASSERT_EQ(sclog[1U].num(), 46U);
    ASSERT_EQ(sclog[2U].num(), 48U);
    ASSERT_EQ(sclog[3U].num(), 50U);
    ASSERT_EQ(sclog[4U].num(), 52U);

    // Reverse operation.
    sclog.reverse();

    // Subscript operator to get values after reverse.
    ASSERT_EQ(sclog[0U].num(), 52U);
    ASSERT_EQ(sclog[1U].num(), 50U);
    ASSERT_EQ(sclog[2U].num(), 48U);
    ASSERT_EQ(sclog[3U].num(), 46U);
    ASSERT_EQ(sclog[4U].num(), 44U);
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
