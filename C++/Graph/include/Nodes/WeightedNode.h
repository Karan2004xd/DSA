#ifndef WEIGHTED_NODE_H
#define WEIGHTED_NODE_H

#include <cstdlib>
#include <unordered_map>
#include <string>
#include <vector>
#include <climits>

class WeightedNode {
public:
  std::string name;
  int distance, index;
  bool is_visited {false};

  std::unordered_map<WeightedNode *, int> weight_map;
  std::vector<WeightedNode *> neighbours;

  WeightedNode *parent {nullptr};

  WeightedNode(const std::string &name, int index) {
    this->name = name;
    this->index = index;
    this->distance = INT_MAX;
  }
};
#endif // WEIGHTED_NODE_H
