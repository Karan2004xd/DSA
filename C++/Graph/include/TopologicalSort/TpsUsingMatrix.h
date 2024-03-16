#ifndef TPS_USING_MATRIX_H
#define TPS_USING_MATRIX_H
#include "../BasicImplementation/AdjacencyMatrix.h"
#include <stack>

/* TpsUsingMatrix graph; */

/* graph.add_edge("A", 0); */
/* graph.add_edge("B", 1); */
/* graph.add_edge("C", 2); */
/* graph.add_edge("D", 3); */
/* graph.add_edge("E", 4); */
/* graph.add_edge("F", 5); */
/* graph.add_edge("G", 6); */
/* graph.add_edge("H", 7); */

/* graph.directed_edge(0, 2); */
/* graph.directed_edge(2, 4); */
/* graph.directed_edge(4, 7); */
/* graph.directed_edge(4, 5); */
/* graph.directed_edge(5, 6); */
/* graph.directed_edge(1, 2); */
/* graph.directed_edge(1, 3); */
/* graph.directed_edge(3, 5); */

/* graph.display_graph(); */

/* graph.tps(); */

// Output : B D A C E H F G

class TpsUsingMatrix : public AdjacencyMatrix {
private:
  void tpsHelper(GraphNode *node, std::stack<GraphNode *> &stack);
public:
  TpsUsingMatrix();
  void tps();
};
#endif // TPS_USING_MATRIX_H

