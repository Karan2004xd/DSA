#ifndef ADJACENCY_MATRIX_H_
#define ADJACENCY_MATRIX_H_

#include "GraphNode.h"
#include <iostream>
#include <sstream>

// Test Cases

/* AdjacencyMatrix graph; */
/* graph.add_edge("A", 0); */
/* graph.add_edge("B", 1); */
/* graph.add_edge("C", 2); */
/* graph.add_edge("D", 3); */
/* graph.add_edge("E", 4); */

/* graph.undirected_edge(0, 1); */
/* graph.undirected_edge(0, 2); */
/* graph.undirected_edge(0, 3); */
/* graph.undirected_edge(1, 4); */
/* graph.undirected_edge(2, 3); */
/* graph.undirected_edge(3, 4); */

/* graph.display_graph(); */

class AdjacencyMatrix {
public:
  AdjacencyMatrix();

  void add_edge(std::string name, int index);
  void undirected_edge(int i, int j);
  void directed_edge(int i, int j);

  void display_graph() const;
  std::vector<GraphNode *> get_node_list() { return this->node_list; };
  int **get_graph() { return this->graph; }

  ~AdjacencyMatrix();
private:
  std::vector<GraphNode *> node_list;
  int **graph {nullptr};
};
#endif // ADJACNECY_MATRIX_H_
