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
    Doubly<const int> dcint;
    int tmp = 0U;

    // Append values.
    ASSERT_EQ(dcint.append(5U), 5U);
    ASSERT_EQ(dcint.append(6U), 6U);
    ASSERT_EQ(dcint.append(7U), 7U);
    ASSERT_EQ(dcint.append(8U), 8U);

    // Remove last values.
    dcint.remove_last(&tmp);
    ASSERT_EQ(tmp, 8U);
    dcint.remove_last(&tmp);
    ASSERT_EQ(tmp, 7U);
    dcint.remove_last(&tmp);
    ASSERT_EQ(tmp, 6U);
    dcint.remove_last(&tmp);
    ASSERT_EQ(tmp, 5U);

    // Prepend values.
    ASSERT_EQ(dcint.prepend(4U), 4U);
    ASSERT_EQ(dcint.prepend(3U), 3U);
    ASSERT_EQ(dcint.prepend(2U), 2U);
    ASSERT_EQ(dcint.prepend(1U), 1U);

    // Remove first values.
    dcint.remove_first(&tmp);
    ASSERT_EQ(tmp, 1U);
    dcint.remove_first(&tmp);
    ASSERT_EQ(tmp, 2U);
    dcint.remove_first(&tmp);
    ASSERT_EQ(tmp, 3U);
    dcint.remove_first(&tmp);
    ASSERT_EQ(tmp, 4U);

    // Insert values at index.
    ASSERT_EQ(dcint.insert(0U, 0U), 0U); // [0]: 0.
    ASSERT_EQ(dcint.insert(1U, 1U), 1U); // [0]: 0, [1]: 1.
    ASSERT_EQ(dcint.insert(2U, 4U), 4U); // [0]: 0, [1]: 1, [2]: 4.
    ASSERT_EQ(dcint.insert(3U, 5U), 5U); // [0]: 0, [1]: 1, [2]: 4, [3]: 5.
    ASSERT_EQ(dcint.insert(1U, 2U), 2U); // [0]: 0, [1]: 1, [2]: 2, [3]: 4, [4]: 5.
    ASSERT_EQ(dcint.insert(2U, 3U), 3U); // [0]: 0, [1]: 1, [2]: 2, [3]: 3, [4]: 4, [5]: 5.

    // Remove values at index.
    dcint.remove(1U, &tmp); // [0]: 0, [1]: 2, [2]: 3, [3]: 4, [4]: 5.
    ASSERT_EQ(tmp, 1U);
    dcint.remove(3U, &tmp); // [0]: 0, [1]: 2, [2]: 3, [3]: 5.
    ASSERT_EQ(tmp, 4U);
    dcint.remove(1U, &tmp); // [0]: 0, [1]: 3, [2]: 5.
    ASSERT_EQ(tmp, 2U);
    dcint.remove(2U, &tmp); // [0]: 0, [1]: 3.
    ASSERT_EQ(tmp, 5U);
    dcint.remove(0U, &tmp); // [0]: 3.
    ASSERT_EQ(tmp, 0U);
    dcint.remove(0U, &tmp);
    ASSERT_EQ(tmp, 3U);

    // Append values.
    ASSERT_EQ(dcint.append(5U), 5U);
    ASSERT_EQ(dcint.append(6U), 6U);
    ASSERT_EQ(dcint.append(7U), 7U);
    ASSERT_EQ(dcint.append(8U), 8U);
    ASSERT_EQ(dcint.append(9U), 9U);

    // Subscript operator to get values.
    ASSERT_EQ(dcint[0U], 5U);
    ASSERT_EQ(dcint[1U], 6U);
    ASSERT_EQ(dcint[2U], 7U);
    ASSERT_EQ(dcint[3U], 8U);
    ASSERT_EQ(dcint[4U], 9U);

    // Reverse operation.
    dcint.reverse();

    // Subscript operator to get values after reverse.
    ASSERT_EQ(dcint[0U], 9U);
    ASSERT_EQ(dcint[1U], 8U);
    ASSERT_EQ(dcint[2U], 7U);
    ASSERT_EQ(dcint[3U], 6U);
    ASSERT_EQ(dcint[4U], 5U);
}

/**
 * @brief Tests a doubly linked list of log.
 */
TEST_F(DoublyTest, Log)
{
    Doubly<Log> dlog;
    Log tmp{};

    // Append values.
    ASSERT_EQ(dlog.append(Log()).num(), 2U);
    ASSERT_EQ(dlog.append(Log()).num(), 4U);
    ASSERT_EQ(dlog.append(Log()).num(), 6U);
    ASSERT_EQ(dlog.append(Log()).num(), 8U);

    // Remove last values.
    dlog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 8U);
    dlog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 6U);
    dlog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 4U);
    dlog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 2U);

    // Prepend values.
    ASSERT_EQ(dlog.prepend(Log()).num(), 10U);
    ASSERT_EQ(dlog.prepend(Log()).num(), 12U);
    ASSERT_EQ(dlog.prepend(Log()).num(), 14U);
    ASSERT_EQ(dlog.prepend(Log()).num(), 16U);

    // Remove first values.
    dlog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 16U);
    dlog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 14U);
    dlog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 12U);
    dlog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 10U);

    // Insert values at index.
    ASSERT_EQ(dlog.insert(0U, Log()).num(), 18U); // [0]: 18.
    ASSERT_EQ(dlog.insert(1U, Log()).num(), 20U); // [0]: 18, [1]: 20.
    ASSERT_EQ(dlog.insert(2U, Log()).num(), 22U); // [0]: 18, [1]: 20, [2]: 22.
    ASSERT_EQ(dlog.insert(3U, Log()).num(), 24U); // [0]: 18, [1]: 20, [2]: 22, [3]: 24.
    ASSERT_EQ(dlog.insert(1U, Log()).num(), 26U); // [0]: 18, [1]: 20, [2]: 26, [3]: 22, [4]: 24.
    ASSERT_EQ(dlog.insert(2U, Log()).num(), 28U); // [0]: 18, [1]: 20, [2]: 26, [3]: 28, [4]: 22, [5]: 24.

    // Remove values at index.
    dlog.remove(1U, &tmp); // [0]: 18, [1]: 26, [2]: 28, [3]: 22, [4]: 24.
    ASSERT_EQ(tmp.num(), 20U);
    dlog.remove(3U, &tmp); // [0]: 18, [1]: 26, [2]: 28, [4]: 24.
    ASSERT_EQ(tmp.num(), 22U);
    dlog.remove(1U, &tmp); // [0]: 18, [1]: 28, [2]: 24.
    ASSERT_EQ(tmp.num(), 26U);
    dlog.remove(2U, &tmp); // [0]: 18, [1]: 28.
    ASSERT_EQ(tmp.num(), 24U);
    dlog.remove(0U, &tmp); // [0]: 18.
    ASSERT_EQ(tmp.num(), 18U);
    dlog.remove(0U, &tmp);
    ASSERT_EQ(tmp.num(), 28U);

    // Append values.
    ASSERT_EQ(dlog.append(Log()).num(), 30U);
    ASSERT_EQ(dlog.append(Log()).num(), 32U);
    ASSERT_EQ(dlog.append(Log()).num(), 34U);
    ASSERT_EQ(dlog.append(Log()).num(), 36U);
    ASSERT_EQ(dlog.append(Log()).num(), 38U);

    // Subscript operator to set values.
    dlog[0U] = Log();
    dlog[1U] = Log();
    dlog[2U] = Log();
    dlog[3U] = Log();
    dlog[4U] = Log();

    // Subscript operator to get values.
    ASSERT_EQ(dlog[0U].num(), 39U);
    ASSERT_EQ(dlog[1U].num(), 40U);
    ASSERT_EQ(dlog[2U].num(), 41U);
    ASSERT_EQ(dlog[3U].num(), 42U);
    ASSERT_EQ(dlog[4U].num(), 43U);

    // Reverse operation.
    dlog.reverse();

    // Subscript operator to get values after reverse.
    ASSERT_EQ(dlog[0U].num(), 43U);
    ASSERT_EQ(dlog[1U].num(), 42U);
    ASSERT_EQ(dlog[2U].num(), 41U);
    ASSERT_EQ(dlog[3U].num(), 40U);
    ASSERT_EQ(dlog[4U].num(), 39U);
}

/**
 * @brief Tests a doubly linked list of constant logs.
 */
TEST_F(DoublyTest, ConstantLog)
{
    Doubly<const Log> dclog;
    Log tmp{};

    // Append values.
    ASSERT_EQ(dclog.append(Log()).num(), 2U);
    ASSERT_EQ(dclog.append(Log()).num(), 4U);
    ASSERT_EQ(dclog.append(Log()).num(), 6U);
    ASSERT_EQ(dclog.append(Log()).num(), 8U);

    // Remove last values, note these use the copy operator as they can't be moved.
    dclog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 9U);
    dclog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 10U);
    dclog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 11U);
    dclog.remove_last(&tmp);
    ASSERT_EQ(tmp.num(), 12U);

    // Prepend values.
    ASSERT_EQ(dclog.prepend(Log()).num(), 14U);
    ASSERT_EQ(dclog.prepend(Log()).num(), 16U);
    ASSERT_EQ(dclog.prepend(Log()).num(), 18U);
    ASSERT_EQ(dclog.prepend(Log()).num(), 20U);

    // Remove first values.
    dclog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 21U);
    dclog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 22U);
    dclog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 23U);
    dclog.remove_first(&tmp);
    ASSERT_EQ(tmp.num(), 24U);

    // Insert values at index.
    ASSERT_EQ(dclog.insert(0U, Log()).num(), 26U); // [0]: 26.
    ASSERT_EQ(dclog.insert(1U, Log()).num(), 28U); // [0]: 26, [1]: 28.
    ASSERT_EQ(dclog.insert(2U, Log()).num(), 30U); // [0]: 26, [1]: 28, [2]: 30.
    ASSERT_EQ(dclog.insert(3U, Log()).num(), 32U); // [0]: 26, [1]: 28, [2]: 30, [3]: 32.
    ASSERT_EQ(dclog.insert(1U, Log()).num(), 34U); // [0]: 26, [1]: 28, [2]: 34, [3]: 30, [4]: 32.
    ASSERT_EQ(dclog.insert(2U, Log()).num(), 36U); // [0]: 26, [1]: 28, [2]: 34, [3]: 36, [4]: 30, [5]: 32.

    // Remove values at index, note these use the copy operator as they can't be moved.
    dclog.remove(1U, &tmp); // [0]: 26, [1]: 34, [2]: 36, [3]: 30, [4]: 32.
    ASSERT_EQ(tmp.num(), 37U);
    dclog.remove(3U, &tmp); // [0]: 26, [1]: 34, [2]: 36, [3]: 32.
    ASSERT_EQ(tmp.num(), 38U);
    dclog.remove(1U, &tmp); // [0]: 26, [1]: 36, [2]: 32.
    ASSERT_EQ(tmp.num(), 39U);
    dclog.remove(2U, &tmp); // [0]: 26, [1]: 36.
    ASSERT_EQ(tmp.num(), 40U);
    dclog.remove(0U, &tmp); // [0]: 36.
    ASSERT_EQ(tmp.num(), 41U);
    dclog.remove(0U, &tmp);
    ASSERT_EQ(tmp.num(), 42U);

    // Append values.
    ASSERT_EQ(dclog.append(Log()).num(), 44U);
    ASSERT_EQ(dclog.append(Log()).num(), 46U);
    ASSERT_EQ(dclog.append(Log()).num(), 48U);
    ASSERT_EQ(dclog.append(Log()).num(), 50U);
    ASSERT_EQ(dclog.append(Log()).num(), 52U);

    // Subscript operator to get values.
    ASSERT_EQ(dclog[0U].num(), 44U);
    ASSERT_EQ(dclog[1U].num(), 46U);
    ASSERT_EQ(dclog[2U].num(), 48U);
    ASSERT_EQ(dclog[3U].num(), 50U);
    ASSERT_EQ(dclog[4U].num(), 52U);

    // Reverse operation.
    dclog.reverse();

    // Subscript operator to get values after reverse.
    ASSERT_EQ(dclog[0U].num(), 52U);
    ASSERT_EQ(dclog[1U].num(), 50U);
    ASSERT_EQ(dclog[2U].num(), 48U);
    ASSERT_EQ(dclog[3U].num(), 46U);
    ASSERT_EQ(dclog[4U].num(), 44U);
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
