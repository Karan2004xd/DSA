#ifndef FRACTIONAL_KNAPSACK_H
#define FRACTIONAL_KNAPSACK_H
#include "KnapsackItem.h"

#include <iostream>
#include <vector>
#include <algorithm>

/* FractionalKnapsack problem; */
/* problem.add_items(1, 100, 20); */
/* problem.add_items(2, 120, 30); */
/* problem.add_items(3, 60, 10); */
/* int capacity {50}; */
/* problem.knapsack(capacity); */

// Output
/* Taken : [ Item index: 3, Value: 60, Weight: 10, Ratio: 6 ] */
/* Taken : [ Item index: 1, Value: 100, Weight: 20, Ratio: 5 ] */
/* Taken : [ Item index: 2, Value: 120, Weight: 30, Ratio: 4 ], Used weight : 20 */

/* Total value obtained : 240 */

class FractionalKnapsack {
private:
  std::vector<KnapsackItem *> items;
public:
  void add_items(int index, int value, int weight);
  void knapsack(int capacity);
};
#endif // FRACTIONAL_KNAPSACK_H
