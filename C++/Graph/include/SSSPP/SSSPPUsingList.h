#ifndef SSSPP_USING_LIST
#define SSSPP_USING_LIST
#include "../../include/BasicImplementation/AdjacencyList.h"

/* SSSPPUsingList graph; */

/* graph.add_edge("A", 0); */
/* graph.add_edge("B", 1); */
/* graph.add_edge("C", 2); */
/* graph.add_edge("D", 3); */
/* graph.add_edge("E", 4); */
/* graph.add_edge("F", 5); */
/* graph.add_edge("G", 6); */

/* graph.undirected_edge(0, 1); */
/* graph.undirected_edge(0, 2); */
/* graph.undirected_edge(1, 3); */
/* graph.undirected_edge(1, 6); */
/* graph.undirected_edge(2, 3); */
/* graph.undirected_edge(2, 4); */
/* graph.undirected_edge(3, 5); */
/* graph.undirected_edge(4, 5); */
/* graph.undirected_edge(5, 6); */

/* graph.bfs_for_SSSPP(); */

class SSSPPUsingList : public AdjacencyList {
private:
  void print_path(GraphNode *node);
  void bfs_for_SSSPP_helper(GraphNode *root);
public:
  void bfs_for_SSSPP();
};
#endif // SSSPP_USING_LIST
