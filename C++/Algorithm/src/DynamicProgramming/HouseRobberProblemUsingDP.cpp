#include "../../include/DynamicProgramming/HouseRobberProblemUsingDP.h"

int HouseRobberProblemUsingDP::house_robber_problem_with_top_down_method_helper(const std::vector<int> &houses,
                                                                                int current_house) {
  if (current_house >= houses.size()) return 0;
  if (keys.find(current_house) == keys.end()) {
    int house_to_rob = house_robber_problem_with_top_down_method_helper(houses, current_house + 1);
    int house_to_skip = houses[current_house] + 
      house_robber_problem_with_top_down_method_helper(houses, current_house + 2);
    keys[current_house] = std::max(house_to_rob, house_to_skip);
  }

  return keys[current_house];
}

int HouseRobberProblemUsingDP::house_robber_problem_with_top_down_method(const std::vector<int> &houses) {
  return house_robber_problem_with_top_down_method_helper(houses, 0);
}

int HouseRobberProblemUsingDP::house_robber_problem_with_bottom_up_method(const std::vector<int> &houses) {
  std::vector<int> table (houses.size() + 2, 0);
  table[houses.size()] = 0;
  for (int i = houses.size() - 1; i >= 0; i--) {
    table[i] = std::max(houses[i] + table[i + 2], table[i + 1]);
  }
  return table[0];
}
