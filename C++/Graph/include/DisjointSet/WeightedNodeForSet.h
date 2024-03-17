#ifndef WEIGHTED_NODE_FOR_SET_H
#define WEIGHTED_NODE_FOR_SET_H
#include "../Nodes/WeightedNode.h"
#include "DisjointSetImpl.h"

class WeightedNodeForSet : public WeightedNode {
public:
  WeightedNodeForSet() {}
  WeightedNodeForSet(const std::string &name) : WeightedNode(name) {}
  DisjointSetImpl *set {nullptr};
};
#endif // WEIGHTED_NODE_FOR_SET_H
