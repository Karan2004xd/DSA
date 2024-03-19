#include "../../include/DynamicProgramming/FibonacciWithDP.h"

int FibonacciWithDP::fibonacci_problem_with_top_down_method(int num) {
  if (num == 1) return 0;
  if (num == 2) return 1;

  if (keys.find(num) == keys.end()) {
    keys[num] = fibonacci_problem_with_top_down_method(num - 1) + 
      fibonacci_problem_with_top_down_method(num - 2);
  }
  return keys[num];
}

int FibonacciWithDP::fibonacci_problem_with_bottom_up_method(int num) {
  std::vector<int> table {0, 1};
  for (int i = 2; i < num; i++) {
    int num_1 = table[i - 1];
    int num_2 = table[i - 2];
    table.push_back(num_1 + num_2);
  }
  return table[num - 1];
}
