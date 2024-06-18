/**
 ***********************************************************************************************************************
 * @file        test_graph_adjacency_list.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include "test_utils/test_utils.hpp"
#include "cpp_dsa/cpp_dsa.hpp"
#include <string>

using CppDSA::Graph::AdjacencyList::Graph;

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

/**
 * @brief Namespace for the tests of graph based on adjacency list implementation.
 */
namespace Tests::CppDSA::GraphAdjacencyList
{

/**
 * @brief Test suite, instantiated for every test.
 */
class GraphAdjacencyListTest : public testing::Test
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
 * @brief Tests a graph with strings as identifiers.
 */
TEST_F(GraphAdjacencyListTest, Strings)
{
    Graph<std::string> gstr;

    // Add vertices.
    gstr.add_vertex("A");
    ASSERT_TRUE(gstr.contains_vertex("A"));
    gstr.add_vertex("B");
    ASSERT_TRUE(gstr.contains_vertex("B"));
    gstr.add_vertex("C");
    ASSERT_TRUE(gstr.contains_vertex("C"));
    gstr.add_vertex("D");
    ASSERT_TRUE(gstr.contains_vertex("D"));
    gstr.add_vertex("E");
    ASSERT_TRUE(gstr.contains_vertex("E"));

    // Add edges.
    gstr.add_edge("A", "B");
    ASSERT_TRUE(gstr.contains_edge("A", "B"));
    ASSERT_TRUE(gstr.contains_edge("B", "A"));
    gstr.add_edge("B", "C");
    ASSERT_TRUE(gstr.contains_edge("B", "C"));
    ASSERT_TRUE(gstr.contains_edge("C", "B"));
    gstr.add_edge("C", "D");
    ASSERT_TRUE(gstr.contains_edge("C", "D"));
    ASSERT_TRUE(gstr.contains_edge("D", "C"));
    gstr.add_edge("D", "E");
    ASSERT_TRUE(gstr.contains_edge("D", "E"));
    ASSERT_TRUE(gstr.contains_edge("E", "D"));
    gstr.add_edge("E", "A");
    ASSERT_TRUE(gstr.contains_edge("E", "A"));
    ASSERT_TRUE(gstr.contains_edge("A", "E"));

    // Check sizes and empty.
    ASSERT_EQ(gstr.edges(), 5U);
    ASSERT_EQ(gstr.vertices(), 5U);
    ASSERT_FALSE(gstr.empty());

    // Remove some edges.
    gstr.remove_edge("D", "E");
    ASSERT_FALSE(gstr.contains_edge("D", "E"));
    ASSERT_FALSE(gstr.contains_edge("E", "D"));
    gstr.remove_edge("D", "C");
    ASSERT_FALSE(gstr.contains_edge("D", "C"));
    ASSERT_FALSE(gstr.contains_edge("C", "D"));

    // Remove vertices.
    gstr.remove_vertex("A");
    ASSERT_FALSE(gstr.contains_edge("A", "E"));
    ASSERT_FALSE(gstr.contains_edge("E", "A"));
    ASSERT_FALSE(gstr.contains_edge("A", "B"));
    ASSERT_FALSE(gstr.contains_edge("B", "A"));
    ASSERT_FALSE(gstr.contains_vertex("A"));
    gstr.remove_vertex("B");
    ASSERT_FALSE(gstr.contains_edge("B", "A"));
    ASSERT_FALSE(gstr.contains_edge("A", "B"));
    ASSERT_FALSE(gstr.contains_edge("B", "C"));
    ASSERT_FALSE(gstr.contains_edge("C", "B"));
    ASSERT_FALSE(gstr.contains_vertex("B"));
    gstr.remove_vertex("C");
    ASSERT_FALSE(gstr.contains_edge("B", "C"));
    ASSERT_FALSE(gstr.contains_edge("C", "B"));
    ASSERT_FALSE(gstr.contains_edge("C", "D"));
    ASSERT_FALSE(gstr.contains_edge("D", "C"));
    ASSERT_FALSE(gstr.contains_vertex("C"));
    gstr.remove_vertex("D");
    ASSERT_FALSE(gstr.contains_edge("C", "D"));
    ASSERT_FALSE(gstr.contains_edge("D", "C"));
    ASSERT_FALSE(gstr.contains_edge("D", "E"));
    ASSERT_FALSE(gstr.contains_edge("E", "D"));
    ASSERT_FALSE(gstr.contains_vertex("D"));
    gstr.remove_vertex("E");
    ASSERT_FALSE(gstr.contains_edge("E", "D"));
    ASSERT_FALSE(gstr.contains_edge("D", "E"));
    ASSERT_FALSE(gstr.contains_edge("A", "E"));
    ASSERT_FALSE(gstr.contains_edge("E", "A"));
    ASSERT_FALSE(gstr.contains_vertex("E"));

    // Check sizes and empty.
    ASSERT_EQ(gstr.edges(), 0U);
    ASSERT_EQ(gstr.vertices(), 0U);
    ASSERT_TRUE(gstr.empty());
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
