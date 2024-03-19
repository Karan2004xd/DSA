#ifndef NUMBER_FACTOR_WITH_DP_H
#define NUMBER_FACTOR_WITH_DP_H

#include <unordered_map>
#include <vector>
#include <iostream>

/* NumberFactorWithDP problem; */
/* auto result = problem.get_number_factor_with_bottom_up_method(8); */
/* std::cout << "Result : " << result << std::endl; */

// Output
// Result : 25

class NumberFactorWithDP {
private:
  std::unordered_map<int, int> keys;
public:
  int get_number_factor_with_top_down_method(int num);
  int get_number_factor_with_bottom_up_method(int num);
};
#endif // NUMBER_FACTOR_WITH_DP_H
