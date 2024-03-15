#ifndef BFS_AND_DFS_USING_MATRIX_H_
#define BFS_AND_DFS_USING_MATRIX_H_
#include "../BasicImplementation/AdjacencyMatrix.h"
#include <queue>
#include <stack>

// Test Cases 

    /* BfsAndDfsUsingMatrix graph; */
    /* graph.add_element("A", 0); */
    /* graph.add_element("B", 1); */
    /* graph.add_element("C", 2); */
    /* graph.add_element("D", 3); */
    /* graph.add_element("E", 4); */

    /* graph.undirected_edge(0, 1); */
    /* graph.undirected_edge(0, 2); */
    /* graph.undirected_edge(0, 3); */
    /* graph.undirected_edge(1, 4); */
    /* graph.undirected_edge(2, 3); */
    /* graph.undirected_edge(3, 4); */

    /* graph.display_graph(); */
    
    /* // Use only one of them at a time or use a seperate object for each */
    /* graph.dfs(); // Output : A D E C B */
    /* /1* graph.bfs(); // Output : A B C D E *1/ */

class BfsAndDfsUsingMatrix : public AdjacencyMatrix {
public:
  static std::vector<GraphNode *> get_neighbours(GraphNode *node, int **graph, std::vector<GraphNode *> node_list);
  void dfs();
  void bfs();
};
#endif // BFS_AND_DFS_USING_MATRIX_H_
