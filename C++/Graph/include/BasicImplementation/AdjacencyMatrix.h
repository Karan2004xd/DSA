#ifndef ADJACENCY_MATRIX_H_
#define ADJACENCY_MATRIX_H_

#include "GraphNode.h"
#include <iostream>
#include <sstream>

class AdjacencyMatrix {
public:
    AdjacencyMatrix();

    void add_element(std::string name, int index);
    void undirected_edge(int i, int j);

    void dispaly_graph() const;

    ~AdjacencyMatrix();
private:
    std::vector<GraphNode *> node_list;
    int **graph {nullptr};
};
#endif // ADJACNECY_MATRIX_H_
