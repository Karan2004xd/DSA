#include "../../include/TopologicalSort/TpsUsingList.h"

TpsUsingList::TpsUsingList() {
  AdjacencyList();
}

void TpsUsingList::tps_helper(GraphNode *node) {
  for (const auto &node : node->neighbours) {
    if (!node->is_visited) {
      tps_helper(node);
    }
  }

  node->is_visited = true;
  stack.push(node);
}

void TpsUsingList::tps() {
  std::vector<GraphNode *> node_list = get_node_list();
  for (const auto &node : node_list) {
    if (!node->is_visited) {
      tps_helper(node);
    }
  }

  std::cout << "\n";
  while (!stack.empty()) {
    GraphNode *current_node = stack.top();
    stack.pop();
    std::cout << current_node->name << " ";
  }
  std::cout << "\n";
}
