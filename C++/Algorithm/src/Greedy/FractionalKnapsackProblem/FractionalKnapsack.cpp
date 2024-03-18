#include "../../../include/Greedy/FractionalKnapsackProblem/FractionalKnapsack.h"

void FractionalKnapsack::add_items(int index, int value, int weight) {
  items.push_back(new KnapsackItem(index, value, weight));
}

void FractionalKnapsack::knapsack(int capacity) {
  std::sort(items.begin(), items.end(),
            [] (KnapsackItem *item_1, KnapsackItem *item_2) {
              return item_1->get_ratio() > item_2->get_ratio();
            });

  int used_capacity {0};
  double total_value {0};

  std::cout << "\n";

  for (const auto &item : items) {
    if (used_capacity + item->get_weight() <= capacity) {
      used_capacity += item->get_weight();
      std::cout << "Taken : [ " << *item << " ]" << std::endl;
      total_value += item->get_value();
    } else {
      int used_weight = capacity - used_capacity;
      double value = item->get_ratio() * used_weight;
      std::cout << "Taken : [ " << *item << " ]" << ", Used weight : " << used_weight << std::endl;
      used_capacity += used_weight;
      total_value += value;
    }

    if (used_capacity == capacity) break;
  }

  std::cout << "\nTotal value obtained : " << total_value << std::endl;
}
