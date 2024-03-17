#ifndef WEIGHTED_NODE_H
#define WEIGHTED_NODE_H

#include <cstdlib>
#include <ostream>
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

  WeightedNode() {}

  WeightedNode(const std::string &name, int index) {
    this->name = name;
    this->index = index;
    this->distance = INT_MAX;
  }

  WeightedNode(const std::string &name) {
    this->name = name;
    this->distance = INT_MAX;
  }

  friend std::ostream &operator<<(std::ostream &os, const WeightedNode &obj) {
    os << "Name : " << obj.name << ", Distance : " << obj.distance << ", Parent : ";
    if (obj.parent == nullptr) {
      os << "null";
    } else {
      os << obj.parent->name;
    }
    return os;
  }
};
#endif // WEIGHTED_NODE_H
