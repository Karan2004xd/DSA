#include "../../include/Traversal/BfsAndDfsUsingList.h"

void bfs_helper(GraphNode *node, std::vector<GraphNode *> node_list) {
    std::queue<GraphNode *> node_queue;
    node_queue.push(node);
    while (!node_queue.empty()) {
        GraphNode *current_node = node_queue.front();
        current_node->is_visited = true;
        node_queue.pop();

        std::cout << current_node->name << " ";

        for (const auto &node : current_node->neighbours) {
            if (!node->is_visited) {
                node->is_visited = true;
                node_queue.push(node);
            }
        }
    }
}

void BfsAndDfsUsingList::bfs() {
    for (const auto &node : get_node_list()) {
        if (!node->is_visited) {
            bfs_helper(node, get_node_list());
        }
    }
    std::cout << "\n";
}

void dfs_helper(GraphNode *node, std::vector<GraphNode *> node_list) {
    std::stack<GraphNode *> node_stack;
    node_stack.push(node);

    while (!node_stack.empty()) {
        GraphNode *current_node = node_stack.top();
        node_stack.pop();
        current_node->is_visited = true;

        std::cout << current_node->name << " ";

        for (const auto &node : current_node->neighbours) {
            if (!node->is_visited) {
                node->is_visited = true;
                node_stack.push(node);
            }
        }
    }
}

void BfsAndDfsUsingList::dfs() {
    for (const auto &node : get_node_list()) {
        if (!node->is_visited) {
            dfs_helper(node, get_node_list());
        }
    }
    std::cout << "\n";
}
