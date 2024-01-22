#include "Graph/include/Traversal/BfsAndDfsUsingList.h"

int main() {
    BfsAndDfsUsingList graph;
    graph.add_edge("A", 0);
    graph.add_edge("B", 1);
    graph.add_edge("C", 2);
    graph.add_edge("D", 3);
    graph.add_edge("E", 4);

    graph.undirected_edge(0, 1);
    graph.undirected_edge(0, 2);
    graph.undirected_edge(0, 3);
    graph.undirected_edge(1, 4);
    graph.undirected_edge(2, 3);
    graph.undirected_edge(3, 4);

    graph.display_graph();
    
    // Use only one of them at a time or use a seperate object for each
    /* graph.dfs(); */
    graph.bfs();
    return 0;
}
