/**
 ***********************************************************************************************************************
 * @file        test_stack_vector.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include "test_utils/test_utils.hpp"
#include "cpp_dsa/cpp_dsa.hpp"

using CppDSA::HashTable::LinkedList::HashTable;

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

/**
 * @brief Namespace for the tests of hash table based on linked list implementation.
 */
namespace Tests::CppDSA::HashTableLinkedList
{

/**
 * @brief Test suite, instantiated for every test.
 */
class HashTableLinkedList : public testing::Test
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
 * @brief Tests a hash table of strings as keys and integers as values.
 */
TEST_F(HashTableLinkedList, StringInteger)
{
    HashTable<std::string, int> ht;

    // Set values.
    ASSERT_EQ(ht.set("A", 0U), 0U);
    ASSERT_EQ(ht.set("B", 1U), 1U);
    ASSERT_EQ(ht.set("C", 2U), 2U);
    ASSERT_EQ(ht.set("D", 3U), 3U);
    ASSERT_EQ(ht.set("E", 4U), 4U);
    ASSERT_EQ(ht.set("F", 5U), 5U);

    // Check sizes.
    ASSERT_EQ(ht.size(), 6U);
    ASSERT_FALSE(ht.empty());

    // Get values.
    ASSERT_EQ(ht.get("F"), 5U);
    ASSERT_EQ(ht.get("E"), 4U);
    ASSERT_EQ(ht.get("D"), 3U);
    ASSERT_EQ(ht.get("C"), 2U);
    ASSERT_EQ(ht.get("B"), 1U);
    ASSERT_EQ(ht.get("A"), 0U);
    ASSERT_EQ(ht.get("Default"), 0U);

    // Check values exist.
    ASSERT_TRUE(ht.contains("F"));
    ASSERT_TRUE(ht.contains("E"));
    ASSERT_TRUE(ht.contains("D"));
    ASSERT_TRUE(ht.contains("C"));
    ASSERT_TRUE(ht.contains("B"));
    ASSERT_TRUE(ht.contains("A"));
    ASSERT_TRUE(ht.contains("Default"));

    // Check sizes.
    ASSERT_EQ(ht.size(), 7U);
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
