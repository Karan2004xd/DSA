#include "../../include/BasicImplementation/AdjacencyMatrix.h"

int **change_graph_size(int size) {
  int **graph = new int*[size];

  for (int i = 0; i < size; i++) {
    graph[i] = new int[size];
  }
  return graph;
}

AdjacencyMatrix::AdjacencyMatrix() {
  this->graph = change_graph_size(0);
}

void AdjacencyMatrix::add_edge(std::string name, int index) {
  node_list.push_back(new GraphNode(name, index));
  graph = change_graph_size(node_list.size());
}

void AdjacencyMatrix::undirected_edge(int i, int j) {
  graph[i][j] = 1;
  graph[j][i] = 1;
}

void AdjacencyMatrix::directed_edge(int i, int j) {
  graph[i][j] = 1;
}

std::vector<GraphNode *> AdjacencyMatrix::get_neighbours(GraphNode *node) {
  std::vector<GraphNode *> neighbours;
  for (int i = 0; i < node_list.size(); i++) {
    if (graph[node->index][i] == 1) {
      try {
        neighbours.push_back(node_list[i]);
      } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
      }
    }
  }
  return neighbours;
}

void AdjacencyMatrix::display_graph() const {
  std::ostringstream oss;
  std::string temp_str {""};
  oss << "\n" << "   ";

  for (const auto &node : node_list) {
    temp_str += node->name + " ";
  }
  temp_str += "\n";
  oss << temp_str;

  int x = 0;
  for (int i = 0; i < node_list.size(); i++) {
    if (graph[i] == nullptr) {
      break;
    }
    std::string temp_str_1 {""};
    if (x < temp_str.size()) {
      temp_str_1 += temp_str[x];
      temp_str_1 += ": ";
      x += 2;
    }

    for (int j = 0; j < node_list.size(); j++) {
      try {
        temp_str_1 += std::to_string(graph[i][j]) + " ";
      } catch (std::exception &e) {
        std::cout << "Integer to string conversion error" << std::endl;
      }
    }
    temp_str_1 += "\n";
    oss << temp_str_1;
  }
  std::cout << oss.str() << std::endl;
}

AdjacencyMatrix::~AdjacencyMatrix() {
  for (int i = 0; i < node_list.size(); i++) {
    delete [] graph[i];
  }
  delete [] graph;
}
