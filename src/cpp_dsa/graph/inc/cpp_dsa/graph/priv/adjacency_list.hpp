/**
 ***********************************************************************************************************************
 * @file        adjacency_list.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_GRAPH_ADJACENCY_LIST_HPP
#define CPP_DSA_GRAPH_ADJACENCY_LIST_HPP

#include "base.hpp"
#include <unordered_map>
#include <unordered_set>

namespace CppDSA::Graph::AdjacencyList
{

/**
 * @brief Graph class.
 * @tparam T Type of the identifier for the vertices.
 */
template<typename T>
class Graph : public Base::GraphBase<T>
{
public:
    /**
     * @brief Constructs a new graph.
     */
    Graph<T>() : Base::GraphBase<T>(), adj() { }

    Graph<T>(const Graph<T> & bt) = delete;
    Graph<T> & operator=(const Graph<T> & bt) = delete;
    Graph<T>(Graph<T> && bt) noexcept = delete;
    Graph<T> & operator=(Graph<T> && bt) noexcept = delete;
    ~Graph<T>() override = default;

    void add_vertex(const T & id) override
    {
        // Check if the vertex of identifier already exists.
        if (!contains_vertex(id))
        {
            adj[id] = std::unordered_set<T>();
        }
    }

    void remove_vertex(const T & id) override
    {
        // Check if the vertex of identifier exists.
        if (contains_vertex(id))
        {
            // Remove edges in other vertices, if any.
            for (const auto & v : adj[id])
            {
                adj[v].erase(id);
            }

            // Remove vertex.
            adj.erase(id);
        }
    }

    bool contains_vertex(const T & id) override { return adj.count(id) > 0U; }

    void add_edge(const T & id0, const T & id1) override
    {
        // Check that the edge doesn't exist already.
        if (!contains_edge(id0, id1))
        {
            // Add edge from 'id0' to 'id1'.
            adj[id0].insert(id1);
            // Add edge from 'id1' to 'id0'.
            adj[id1].insert(id0);
        }
    }

    void remove_edge(const T & id0, const T & id1) override
    {
        // Check that the edge exists.
        if (contains_edge(id0, id1))
        {
            // Remove edge from 'id0' to 'id1'.
            adj[id0].erase(id1);
            // Remove edge from 'id1' to 'id0'.
            adj[id1].erase(id0);
        }
    }

    bool contains_edge(const T & id0, const T & id1) override
    {
        // Check that both vertices exist, and that there is an edge to each other in both.
        return ((contains_vertex(id0)) && (contains_vertex(id1)) && (adj[id0].count(id1) > 0U) &&
                (adj[id1].count(id0) > 0U));
    }

    size_t vertices() override { return adj.size(); }

    size_t edges() override
    {
        // Loop all vertices and sum their edges.
        size_t count = 0U;
        for (const auto & v : adj)
        {
            count += v.second.size();
        };
        return count / 2U; // Divide by two since edges are bidirectional.
    };

    bool empty() override { return vertices() == 0U; }

protected:
    std::unordered_map<T, std::unordered_set<T>> adj; /**< The structure for the underlying adjacency list. */
};

}

#endif /* CPP_DSA_GRAPH_ADJACENCY_LIST_HPP */

/******************************************************************************************************END OF FILE*****/
