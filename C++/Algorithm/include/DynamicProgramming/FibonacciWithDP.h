#ifndef FIBONACCI_WITH_DP_H
#define FIBONACCI_WITH_DP_H

#include <unordered_map>
#include <vector>
#include <iostream>

/* FibonacciWithDP problem; */
/* auto result = problem.fibonacci_problem_with_top_down_method(6); */
/* auto result_1 = problem.fibonacci_problem_with_bottom_up_method(6); */
/* std::cout << "Result 1: " << result << "\nResult 2: " << result_1 << std::endl; */

// Output
// Result 1: 5
// Result 2: 5

class FibonacciWithDP {
private:
  std::unordered_map<int, int> keys;
public:
  int fibonacci_problem_with_top_down_method(int num);
  int fibonacci_problem_with_bottom_up_method(int num);
};
#endif // FIBONACCI_WITH_DP_H
