#ifndef KNAPSACK_ITEM_H
#define KNAPSACK_ITEM_H

#include <ostream>

class KnapsackItem {
private:
  int index, value, weight;
  double ratio;
public:
  KnapsackItem(int index, int value, int weight)
    : index {index}, value {value}, weight {weight} {
    this->ratio = value * 1.0 / weight;
  }
  
  int get_index() { return this->index; }
  int get_value() { return this->value; }
  int get_weight() { return this->weight; }
  double get_ratio() { return this->ratio; }

  void set_index(int index) { this->index = index; }
  void set_value(int value) { this->value = value; }
  void set_weight(int weight) { this->weight = weight; }
  void set_ratio(int ratio) { this->ratio = ratio; }

  friend std::ostream &operator<<(std::ostream &os, const KnapsackItem &obj) {
    os << "Item index: " << obj.index
       << ", Value: " << obj.value
       << ", Weight: " << obj.weight
       << ", Ratio: " << obj.ratio;
    return os;
  }
};
#endif // KNAPSACK_ITEM_H
