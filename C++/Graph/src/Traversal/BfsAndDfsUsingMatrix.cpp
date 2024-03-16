#include "../../include/Traversal/BfsAndDfsUsingMatrix.h"

void BfsAndDfsUsingMatrix::bfs_helper(GraphNode *node, int **graph, std::vector<GraphNode *> node_list) {
  std::queue<GraphNode *> node_queue;
  node_queue.push(node);
  while (!node_queue.empty()) {
    GraphNode *current_node = node_queue.front();
    node_queue.pop();
    current_node->is_visited = true;
    std::cout << current_node->name << " ";

    std::vector<GraphNode *> neighbours = get_neighbours(current_node);

    for (const auto &node : neighbours) {
      if (!node->is_visited) {
        node_queue.push(node);
        node->is_visited = true;
      }
    }
  }
}

void BfsAndDfsUsingMatrix::bfs() {
  for (const auto &node : get_node_list()) {
    if (!node->is_visited) {
      bfs_helper(node, get_graph(), get_node_list());
    }
  }
  std::cout << "\n";
}

void BfsAndDfsUsingMatrix::dfs_helper(GraphNode *node, int **graph, std::vector<GraphNode *> node_list) {
  std::stack<GraphNode *> node_stack;
  node_stack.push(node);
  while (!node_stack.empty()) {
    GraphNode *current_node = node_stack.top();
    node_stack.pop();
    current_node->is_visited = true;
    std::cout << current_node->name << " ";

    std::vector<GraphNode *> neighbours = get_neighbours(current_node);
    for (const auto &node : neighbours) {
      if (!node->is_visited) {
        node_stack.push(node);
        node->is_visited = true;
      }
    }
  }
}

void BfsAndDfsUsingMatrix::dfs() {
  for (const auto &node : get_node_list()) {
    if (!node->is_visited) {
      dfs_helper(node, get_graph(), get_node_list());
    }
  }
  std::cout << "\n";
}
