#ifndef GRAPH_NODE_H_
#define GRAPH_NODE_H_
#include <vector>
#include <string>

class GraphNode {
public:
    int index;
    std::string name;
    std::vector<GraphNode *> neighbours;
    bool is_visited = false;

    GraphNode(std::string &name, int index) : name(name), index(index) {}
};
#endif // GRAPH_NODE_H_
