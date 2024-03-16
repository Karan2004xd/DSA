#ifndef FLOYD_WARSHALL_IMPL_H
#define FLOYD_WARSHALL_IMPL_H
#include "../Nodes/WeightedNodesCommonOpr.h"

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
