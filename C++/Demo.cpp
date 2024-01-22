#include "Graph/include/BasicImplementation/AdjacencyMatrix.h"

int main() {
    AdjacencyMatrix graph;
    graph.add_element("A", 0);
    graph.add_element("B", 1);
    graph.add_element("C", 2);
    graph.add_element("D", 3);
    graph.add_element("E", 4);

    graph.undirected_edge(0, 1);
    graph.undirected_edge(0, 2);
    graph.undirected_edge(0, 3);
    graph.undirected_edge(1, 4);
    graph.undirected_edge(2, 3);
    graph.undirected_edge(3, 4);

    graph.dispaly_graph();
    return 0;
}
