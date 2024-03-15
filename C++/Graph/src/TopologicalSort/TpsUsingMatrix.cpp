#include "../../include/TopologicalSort/TpsUsingMatrix.h"

TpsUsingMatrix::TpsUsingMatrix() {
  AdjacencyMatrix();
}

void TpsUsingMatrix::tpsHelper(GraphNode *node, std::stack<GraphNode *> &stack) {
  std::vector<GraphNode *> neighbours = get_neighbours(node, get_graph(), get_node_list());
  for (const auto &neighbour : neighbours) {
    if (!neighbour->is_visited) {
      tpsHelper(neighbour, stack);
    }
  }

  node->is_visited = true;
  stack.push(node);
}

void TpsUsingMatrix::tps() {
  std::vector<GraphNode *> nodes = get_node_list();
  std::stack<GraphNode *> stack;

  for (const auto &node : nodes) {
    if (!node->is_visited) {
      tpsHelper(node, stack);
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
