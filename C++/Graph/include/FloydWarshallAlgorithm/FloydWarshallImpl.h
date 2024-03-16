#ifndef FLOYD_WARSHALL_IMPL_H
#define FLOYD_WARSHALL_IMPL_H
#include "../Nodes/WeightedNodesCommonOpr.h"

/* FloydWarshallImpl graph; */
/* graph.add_vertices("A", 0); */
/* graph.add_vertices("B", 1); */
/* graph.add_vertices("C", 2); */
/* graph.add_vertices("D", 3); */

/* graph.add_weighted_directed_edge(0, 3, 1); */
/* graph.add_weighted_directed_edge(0, 1, 8); */
/* graph.add_weighted_directed_edge(1, 2, 1); */
/* graph.add_weighted_directed_edge(2, 0, 4); */
/* graph.add_weighted_directed_edge(3, 1, 2); */
/* graph.add_weighted_directed_edge(3, 2, 9); */

/* graph.floyd_warshall(); */

// Output

/* Printing the distance list for node A: 0 3 4 1 */
/* Printing the distance list for node B: 5 0 1 6 */
/* Printing the distance list for node C: 4 7 0 5 */
/* Printing the distance list for node D: 7 2 3 0 */

class FloydWarshallImpl : public WeightedNodesCommonOpr {
private:
  bool contains_key(const std::unordered_map<WeightedNode *, int> &map,
                    const WeightedNode *key_to_check);

  int **vertices {nullptr};
  void set_vertices();

  std::vector<WeightedNode *> node_list;
public:
  void floyd_warshall();
  ~FloydWarshallImpl();
};
#endif // FLOYD_WARSHALL_IMPL_H
