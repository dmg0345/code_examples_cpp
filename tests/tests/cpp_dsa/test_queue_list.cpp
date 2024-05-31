/**
 ***********************************************************************************************************************
 * @file        test_queue_list.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include "test_utils/test_utils.hpp"
#include "cpp_dsa/cpp_dsa.hpp"

using CppDSA::Queue::List::Queue;
using Tests::Utils::Log;

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

/**
 * @brief Namespace for the tests of queue based on linked list implementation.
 */
namespace Tests::CppDSA::QueueVector
{

/**
 * @brief Test suite, instantiated for every test.
 */
class QueueLinkedListTest : public testing::Test
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
 * @brief Tests a queue of integers.
 */
TEST_F(QueueLinkedListTest, Integer)
{
    Queue<int> qint;
    int tmp = 0U;

    // Enqueue values to the queue.
    ASSERT_EQ(qint.enqueue(0U), 0U);
    ASSERT_EQ(qint.enqueue(1U), 1U);
    ASSERT_EQ(qint.enqueue(2U), 2U);
    ASSERT_EQ(qint.enqueue(3U), 3U);
    ASSERT_EQ(qint.enqueue(4U), 4U);

    // Check empty and size.
    ASSERT_EQ(qint.empty(), false);
    ASSERT_EQ(qint.size(), 5U);

    // Check values and dequeue them.
    ASSERT_EQ(qint.front(), 4U);
    ASSERT_EQ(qint.back(), 0U);
    qint.dequeue(&tmp);
    ASSERT_EQ(tmp, 0U);
    ASSERT_EQ(qint.front(), 4U);
    ASSERT_EQ(qint.back(), 1U);
    qint.dequeue(&tmp);
    ASSERT_EQ(tmp, 1U);
    ASSERT_EQ(qint.front(), 4U);
    ASSERT_EQ(qint.back(), 2U);
    qint.dequeue(&tmp);
    ASSERT_EQ(tmp, 2U);
    ASSERT_EQ(qint.front(), 4U);
    ASSERT_EQ(qint.back(), 3U);
    qint.dequeue(&tmp);
    ASSERT_EQ(tmp, 3U);
    ASSERT_EQ(qint.front(), 4U);
    ASSERT_EQ(qint.back(), 4U);
    qint.dequeue(&tmp);
    ASSERT_EQ(tmp, 4U);

    // Check empty and size.
    ASSERT_EQ(qint.empty(), true);
    ASSERT_EQ(qint.size(), 0U);
}

/**
 * @brief Tests a queue of constant integers.
 */
TEST_F(QueueLinkedListTest, ConstantInteger)
{
    Queue<const int> qcint;
    int tmp = 0U;

    // Enqueue values to the queue.
    ASSERT_EQ(qcint.enqueue(0U), 0U);
    ASSERT_EQ(qcint.enqueue(1U), 1U);
    ASSERT_EQ(qcint.enqueue(2U), 2U);
    ASSERT_EQ(qcint.enqueue(3U), 3U);
    ASSERT_EQ(qcint.enqueue(4U), 4U);

    // Check empty and size.
    ASSERT_EQ(qcint.empty(), false);
    ASSERT_EQ(qcint.size(), 5U);

    // Check values and dequeue them.
    ASSERT_EQ(qcint.front(), 4U);
    ASSERT_EQ(qcint.back(), 0U);
    qcint.dequeue(&tmp);
    ASSERT_EQ(tmp, 0U);
    ASSERT_EQ(qcint.front(), 4U);
    ASSERT_EQ(qcint.back(), 1U);
    qcint.dequeue(&tmp);
    ASSERT_EQ(tmp, 1U);
    ASSERT_EQ(qcint.front(), 4U);
    ASSERT_EQ(qcint.back(), 2U);
    qcint.dequeue(&tmp);
    ASSERT_EQ(tmp, 2U);
    ASSERT_EQ(qcint.front(), 4U);
    ASSERT_EQ(qcint.back(), 3U);
    qcint.dequeue(&tmp);
    ASSERT_EQ(tmp, 3U);
    ASSERT_EQ(qcint.front(), 4U);
    ASSERT_EQ(qcint.back(), 4U);
    qcint.dequeue(&tmp);
    ASSERT_EQ(tmp, 4U);

    // Check empty and size.
    ASSERT_EQ(qcint.empty(), true);
    ASSERT_EQ(qcint.size(), 0U);
}

/**
 * @brief Tests a queue of logs.
 */
TEST_F(QueueLinkedListTest, Log)
{
    Queue<Log> qlog;
    Log tmp;

    // Enqueue values to the queue.
    ASSERT_EQ(qlog.enqueue(Log()).num(), 2U);
    ASSERT_EQ(qlog.enqueue(Log()).num(), 4U);
    ASSERT_EQ(qlog.enqueue(Log()).num(), 6U);
    ASSERT_EQ(qlog.enqueue(Log()).num(), 8U);
    ASSERT_EQ(qlog.enqueue(Log()).num(), 10U);

    // Check empty and size.
    ASSERT_EQ(qlog.empty(), false);
    ASSERT_EQ(qlog.size(), 5U);

    // Check values and dequeue them.
    ASSERT_EQ(qlog.front().num(), 10U);
    ASSERT_EQ(qlog.back().num(), 2U);
    qlog.dequeue(&tmp);
    ASSERT_EQ(tmp.num(), 2U);
    ASSERT_EQ(qlog.front().num(), 10U);
    ASSERT_EQ(qlog.back().num(), 4U);
    qlog.dequeue(&tmp);
    ASSERT_EQ(tmp.num(), 4U);
    ASSERT_EQ(qlog.front().num(), 10U);
    ASSERT_EQ(qlog.back().num(), 6U);
    qlog.dequeue(&tmp);
    ASSERT_EQ(tmp.num(), 6U);
    ASSERT_EQ(qlog.front().num(), 10U);
    ASSERT_EQ(qlog.back().num(), 8U);
    qlog.dequeue(&tmp);
    ASSERT_EQ(tmp.num(), 8U);
    ASSERT_EQ(qlog.front().num(), 10U);
    ASSERT_EQ(qlog.back().num(), 10U);
    qlog.dequeue(&tmp);
    ASSERT_EQ(tmp.num(), 10U);

    // Check empty and size.
    ASSERT_EQ(qlog.empty(), true);
    ASSERT_EQ(qlog.size(), 0U);
}

/**
 * @brief Tests a queue of constant logs.
 */
TEST_F(QueueLinkedListTest, ConstantLog)
{
    Queue<const Log> qclog;
    Log tmp;

    // Enqueue values to the queue.
    ASSERT_EQ(qclog.enqueue(Log()).num(), 2U);
    ASSERT_EQ(qclog.enqueue(Log()).num(), 4U);
    ASSERT_EQ(qclog.enqueue(Log()).num(), 6U);
    ASSERT_EQ(qclog.enqueue(Log()).num(), 8U);
    ASSERT_EQ(qclog.enqueue(Log()).num(), 10U);

    // Check empty and size.
    ASSERT_EQ(qclog.empty(), false);
    ASSERT_EQ(qclog.size(), 5U);

    // Check values and dequeue them, note copy constructor is used when retrieving for const.
    ASSERT_EQ(qclog.front().num(), 10U);
    ASSERT_EQ(qclog.back().num(), 2U);
    qclog.dequeue(&tmp);
    ASSERT_EQ(tmp.num(), 11U);
    ASSERT_EQ(qclog.front().num(), 10U);
    ASSERT_EQ(qclog.back().num(), 4U);
    qclog.dequeue(&tmp);
    ASSERT_EQ(tmp.num(), 12U);
    ASSERT_EQ(qclog.front().num(), 10U);
    ASSERT_EQ(qclog.back().num(), 6U);
    qclog.dequeue(&tmp);
    ASSERT_EQ(tmp.num(), 13U);
    ASSERT_EQ(qclog.front().num(), 10U);
    ASSERT_EQ(qclog.back().num(), 8U);
    qclog.dequeue(&tmp);
    ASSERT_EQ(tmp.num(), 14U);
    ASSERT_EQ(qclog.front().num(), 10U);
    ASSERT_EQ(qclog.back().num(), 10U);
    qclog.dequeue(&tmp);
    ASSERT_EQ(tmp.num(), 15U);

    // Check empty and size.
    ASSERT_EQ(qclog.empty(), true);
    ASSERT_EQ(qclog.size(), 0U);
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
