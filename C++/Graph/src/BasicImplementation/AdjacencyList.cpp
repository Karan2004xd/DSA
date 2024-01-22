#include "../../include/BasicImplementation/AdjacencyList.h"

void AdjacencyList::add_edge(std::string name, int index) {
    node_list.push_back(new GraphNode(name, index));
}

void AdjacencyList::undirected_edge(int i, int j) {
    try {
        GraphNode *first = node_list.at(i);
        GraphNode *second = node_list.at(j);
        first->neighbours.push_back(second);
        second->neighbours.push_back(first);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void AdjacencyList::display_graph() {
    std::ostringstream oss;
    for (const auto &node : node_list) {
        oss << node->name << ": ";
        for (const auto &node_value : node->neighbours) {
            oss << node_value->name;
            if (node_value != node->neighbours.back()) {
                oss << " -> ";
            }
        }
        oss << "\n";
    }
    std::cout << oss.str() << std::endl;
}
