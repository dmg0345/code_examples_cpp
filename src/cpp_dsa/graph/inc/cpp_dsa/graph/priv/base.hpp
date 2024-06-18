/**
 ***********************************************************************************************************************
 * @file        base.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef CPP_DSA_GRAPH_BASE_HPP
#define CPP_DSA_GRAPH_BASE_HPP

#include <cstddef>

namespace CppDSA::Graph::Base
{

/**
 * @brief Graph base class.
 * @tparam T Type of identifier for the vertices.
 */
template<typename T>
class GraphBase
{
public:
    /**
     * @brief Constructs a new graph.
     */
    GraphBase<T>() { }

    /**
     * @brief Deleted copy constructor.
     * @param[in] graph The graph to copy.
     */
    GraphBase<T>(const GraphBase<T> & graph) = delete;

    /**
     * @brief Deleted copy operator.
     * @param[in] graph The graph to copy.
     * @return The copied graph.
     */
    GraphBase<T> & operator=(const GraphBase<T> & graph) = delete;

    /**
     * @brief Deleted move constructor.
     * @param[in] graph The graph to move.
     */
    GraphBase<T>(GraphBase<T> && graph) noexcept = delete;

    /**
     * @brief Deleted move operator.
     * @param[in] graph The graph to move.
     * @return The moved graph.
     */
    GraphBase<T> & operator=(GraphBase<T> && graph) noexcept = delete;

    /**
     * @brief Destructor.
     */
    virtual ~GraphBase<T>() { }

    /**
     * @brief Adds a vertex of the specified identifier to the graph.
     * @param[in] id The identifier for the vertex.
     */
    virtual void add_vertex(const T & id) = 0;

    /**
     * @brief Removes a vertex from the graph.
     * @param[in] id The identifier of the vertex to remove.
     */
    virtual void remove_vertex(const T & id) = 0;

    /**
     * @brief Checks if a graph contains the specified vertex.
     * @param[in] id The identifier of the vertex.
     * @return @c true if the graph contains the specified vertex, @c false if otherwise.
     */
    virtual bool contains_vertex(const T & id) = 0;

    /**
     * @brief Adds an edge from one vertex to another vertex.
     * @param[in] id0 The identifier for the source vertex of the graph.
     * @param[in] id1 The identifier for the target vertex of the graph.
     */
    virtual void add_edge(const T & id0, const T & id1) = 0;

    /**
     * @brief Removes an edge from one vertex to another vertex.
     * @param[in] id0 The identifier for the source vertex of the graph.
     * @param[in] id1 The identifier for the target vertex of the graph.
     */
    virtual void remove_edge(const T & id0, const T & id1) = 0;

    /**
     * @brief Checks if a graph contains an edge from one vertex to another vertex.
     * @param[in] id0 The identifier for the source vertex of the graph.
     * @param[in] id1 The identifier for the target vertex of the graph.
     */
    virtual bool contains_edge(const T & id0, const T & id1) = 0;

    /**
     * @brief Obtains the number of vertex in the graph.
     * @return The number of vertex.
     */
    virtual size_t vertices() = 0;

    /**
     * @brief Obtains the number of edges in the graph.
     * @return The number of edges.
     */
    virtual size_t edges() = 0;

    /**
     * @brief Determines if a graph is empty.
     * @return @c true if the graph has no vertices, @c false otherwise.
     */
    virtual bool empty() = 0;
};

}

#endif /* CPP_DSA_GRAPH_BASE_HPP */

/******************************************************************************************************END OF FILE*****/
