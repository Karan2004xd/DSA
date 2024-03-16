#include "../../include/FloydWarshallAlgorithm/FloydWarshallImpl.h"

bool FloydWarshallImpl::contains_key(const std::unordered_map<WeightedNode *, int> &map,
                                     const WeightedNode *key_to_check) {
  for (const auto &key : map) {
    if (key.first == key_to_check) return true;
  }
  return false;
}

void FloydWarshallImpl::set_vertices() {
  this->node_list = get_node_list();
  int size = this->node_list.size();

  this->vertices = new int*[size];
  for (int i = 0; i < size; i++) {
    this->vertices[i] = new int[size];
  }

}

void FloydWarshallImpl::floyd_warshall() {
  set_vertices();
  int size = node_list.size();

  for (int i = 0; i < size; i++) {
    WeightedNode *first = node_list[i];
    for (int j = 0; j < size; j++) {
      WeightedNode *second = node_list[j];
      if (i == j) {
        vertices[i][j] = 0;
      } else if (contains_key(first->weight_map, second)) {
        vertices[i][j] = first->weight_map[second];
      } else {
        vertices[i][j] = INT_MAX / 10;
      }
    }
  }

  for (int k = 0; k < size; k++) {
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        if (vertices[i][j] > vertices[i][k] + vertices[k][j]) {
          vertices[i][j] = vertices[i][k] + vertices[k][j];
        }
      }
    }
  }

  std::cout << "\n";
  for (int i = 0; i < size; i++) {
    std::cout << "Printing the distance list for node " << node_list[i]->name << ": ";
    for (int j = 0; j < size; j++) {
      std::cout << vertices[i][j] << " ";
    }
    std::cout << "\n";
  }
}

FloydWarshallImpl::~FloydWarshallImpl() {
  for (int i = 0; i < node_list.size(); i++) {
    delete [] vertices[i];
  }
  delete [] vertices;
}
