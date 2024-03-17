#ifndef KRUSKAL_AND_PRIMS_IMPL_H
#define KRUSKAL_AND_PRIMS_IMPL_H

#include <vector>
#include <string>
#include <algorithm>
#include <queue>

/* KruskalAndPrimsImpl graph; */
/* graph.add_node("A"); */
/* graph.add_node("B"); */
/* graph.add_node("C"); */
/* graph.add_node("D"); */
/* graph.add_node("E"); */

/* graph.add_weighted_undirected_edge(0, 1, 5); */
/* graph.add_weighted_undirected_edge(0, 2, 13); */
/* graph.add_weighted_undirected_edge(0, 4, 15); */
/* graph.add_weighted_undirected_edge(1, 2, 10); */
/* graph.add_weighted_undirected_edge(1, 3, 8); */
/* graph.add_weighted_undirected_edge(2, 3, 6); */
/* graph.add_weighted_undirected_edge(2, 4, 20); */

/* graph.prims_impl(4); */
// Or graph.kruskal_impl();

// Output
// In both cases it will yield 34 as minimum cost of spamming tree in this test case

class UndirectedEdge;
class DisjointSetImpl;
class WeightedNodeForSet;
class WeightedNode;

class KruskalAndPrimsImpl {
private:
  std::vector<WeightedNodeForSet *> node_list;
  std::vector<UndirectedEdge *> edge_list;

  DisjointSetImpl *set {nullptr};
  void prims_impl_helper(WeightedNode *root);
public:
  void add_node(const std::string &name);
  void add_weighted_undirected_edge(int first_index, int second_index, int weight);

  void kruskal_impl();
  void prims_impl(int index);
};
#endif // KRUSKAL_AND_PRIMS_IMPL_H
