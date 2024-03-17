#include "../../include/DisjointSet/DisjointSetImpl.h"
#include "../../include/KruskalAndPrimsAlgorithm/UndirectedEdge.h"
#include "../../include/KruskalAndPrimsAlgorithm/KruskalAndPrimsImpl.h"

void KruskalAndPrimsImpl::add_node(const std::string &name) {
  node_list.push_back(new WeightedNodeForSet(name));
}

void KruskalAndPrimsImpl::add_weighted_undirected_edge(int first_index,
                                                       int second_index,
                                                       int weight) {
  UndirectedEdge *edge = new UndirectedEdge(node_list[first_index], node_list[second_index], weight);
  WeightedNodeForSet *first = edge->first;
  WeightedNodeForSet *second = edge->second;

  first->neighbours.push_back(second);
  second->neighbours.push_back(first);

  first->weight_map[second] = weight;
  second->weight_map[first] = weight;

  edge_list.push_back(edge);
}

template <typename T>
void print_vector(std::vector<T *> vec) {
  for (const auto i : vec) {
    std::cout << *i << std::endl;
  }
}

void KruskalAndPrimsImpl::kruskal_impl() {
  set->make_set(node_list);
  std::sort(edge_list.begin(), edge_list.end(), 
            [] (UndirectedEdge *edge_1, UndirectedEdge *edge_2) {
              return edge_1->weight < edge_2->weight;
            });
  
  int cost {0};

  for (const auto &edge : edge_list) {
    WeightedNodeForSet *first = edge->first;
    WeightedNodeForSet *second = edge->second;

    if (set->find_set(first) != set->find_set(second)) {
      set->union_of_set(first, second);
      cost += edge->weight;
      std::cout << "Taken : " << *edge << std::endl;
    }
  }

  std::cout << "\nTotal cost of minimun spamming tree: " << cost << std::endl;
}

struct CompareDistance {
  bool operator() (const WeightedNode *a, const WeightedNode *b) const {
    return a->distance > b->distance;
  }
};

void KruskalAndPrimsImpl::prims_impl_helper(WeightedNode *root) {
  if (root == nullptr) return ;
  root->distance = 0;

  std::priority_queue<WeightedNode *, std::vector<WeightedNode *>, CompareDistance> queue;
  queue.push(root);

  while (!queue.empty()) {
    WeightedNode *current_node = queue.top();
    queue.pop();

    for (const auto &neighbour : current_node->neighbours) {
      if (!neighbour->is_visited && neighbour->distance > current_node->weight_map[neighbour]) {
        neighbour->distance = current_node->weight_map[neighbour];
        neighbour->parent = current_node;
        queue.push(neighbour);
      }
    }
    current_node->is_visited = true;

    int cost {0};
    std::cout << "\n";
    for (const auto &node : node_list) {
      std::cout << *node << std::endl;
      cost += node->distance;
    }

    std::cout << "\nTotal cost of minimun spamming tree: " << cost << std::endl;
  }
}

void KruskalAndPrimsImpl::prims_impl(int index) {
  if (index >= 0 && index < node_list.size()) {
    prims_impl_helper(node_list[index]);
  } else {
    std::cout << "Index out of bounds" << std::endl;
  }
}
