#include "../include/BasicTree.h"

void BasicTree::add_child(const BasicTree &node) {
    tree_nodes.push_back(node);
}

std::string BasicTree::print(int level) {
    std::ostringstream oss;
    std::string space {};
    for (int i = 0; i < level; i++) {
        space += " ";
    }
    oss << space << this->data << "\n";

    for (auto &node : this->tree_nodes) {
        oss << node.print(level + 1);
    }
    return oss.str();
}
