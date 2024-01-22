#ifndef GRAPH_NODE_H_
#define GRAPH_NODE_H_
#include <vector>
#include <string>

class GraphNode {
public:
    int index;
    std::string name;
    std::vector<GraphNode *> neighbours;

    GraphNode(std::string &name, int index) : name(name), index(index) {}
};
#endif // GRAPH_NODE_H_
