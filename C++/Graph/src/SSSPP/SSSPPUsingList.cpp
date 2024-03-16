#include "../../include/SSSPP/SSSPPUsingList.h"
#include <queue>

void SSSPPUsingList::print_path(GraphNode *node) {
  if (node->parent != nullptr) {
    print_path(node->parent);
  }
  std::cout << node->name << " ";
}

void SSSPPUsingList::bfs_for_SSSPP_helper(GraphNode *root) {
  std::queue<GraphNode *> queue;
  if (root == nullptr) return ;
  queue.push(root);

  while (!queue.empty()) {
    GraphNode *current_node = queue.front();
    current_node->is_visited = true;
    queue.pop();

    std::cout << "Printing path for " << current_node->name << ": ";
    print_path(current_node);
    std::cout << "\n";

    std::vector<GraphNode *> neighbours = current_node->neighbours;
    for (const auto &neighbour : neighbours) {
      if (!neighbour->is_visited) {
        neighbour->is_visited = true;
        queue.push(neighbour);
        neighbour->parent = current_node;
      }
    }
  }
}

void SSSPPUsingList::bfs_for_SSSPP() {
  std::cout << "\n";
  bfs_for_SSSPP_helper(get_node_list()[0]);
}
