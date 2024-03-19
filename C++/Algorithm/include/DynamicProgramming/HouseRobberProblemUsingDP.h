#ifndef HOUSE_ROBBER_PROBLEM_USING_DP_H
#define HOUSE_ROBBER_PROBLEM_USING_DP_H

#include <unordered_map>
#include <vector>
#include <iostream>
#include <algorithm>

/* HouseRobberProblemUsingDP problem; */
/* auto result = problem.house_robber_problem_with_top_down_method({6, 7, 1, 30, 8, 2, 4}); */
/* auto result_1 = problem.house_robber_problem_with_bottom_up_method({6, 7, 1, 30, 8, 2, 4}); */
/* std::cout << "Result 1: " << result << "\nResult 2: " << result_1 << std::endl; */

// Output

/* Result 1: 41 */
/* Result 2: 41 */

class HouseRobberProblemUsingDP {
private:
  std::unordered_map<int, int> keys;
  int house_robber_problem_with_top_down_method_helper(const std::vector<int> &houses,
                                                       int current_house);
public:
  int house_robber_problem_with_top_down_method(const std::vector<int> &houses);
  int house_robber_problem_with_bottom_up_method(const std::vector<int> &houese);
};
#endif // HOUSE_ROBBER_PROBLEM_USING_DP_H
