#include "../../include/DivideAndConqueror/DACImplProblems.h"

int DACImplProblems::number_factor_problem(int n) {
  if (n == 0 || n == 1 || n == 2) return 1;
  if (n == 3) return 2;

  int way_1 = number_factor_problem(n - 1);
  int way_2 = number_factor_problem(n - 3);
  int way_3 = number_factor_problem(n - 4);

  return way_1 + way_2 + way_3;
}

int DACImplProblems::house_robber_problem_helper(const std::vector<int> &house_net_worth,
                                                int current_house) {
  if (current_house >= house_net_worth.size()) return 0;

  int steal_current_house = house_net_worth[current_house] +
    house_robber_problem_helper(house_net_worth, current_house + 2);
  int skip_current_house = house_robber_problem_helper(house_net_worth, current_house + 1);

  return std::max(steal_current_house, skip_current_house);
}

int DACImplProblems::house_robber_problem(const std::vector<int> &house_net_worth) {
  return house_robber_problem_helper(house_net_worth, 0);
}


int DACImplProblems::convert_string_problem_helper(const std::string &s1,
                                                   const std::string &s2,
                                                   int index_1,
                                                   int index_2) {
  if (s1.length() == index_1) {
    return s2.length() - index_2;
  }

  if (s2.length() == index_2) {
    return s1.length() - index_1;
  }

  if (s1[index_1] == s2[index_2]) {
    return convert_string_problem_helper(s1, s2, index_1 + 1, index_2 + 1);
  }

  int delete_operation = 1 + convert_string_problem_helper(s1, s2, index_1 + 1, index_2);
  int insert_operation = 1 + convert_string_problem_helper(s1, s2, index_1 + 1, index_2);
  int replace_operation = 1 + convert_string_problem_helper(s1, s2, index_1 + 1, index_2 + 1);

  return std::min(delete_operation, std::min(insert_operation, replace_operation));
}

int DACImplProblems::convert_string_problem(const std::string &s1, const std::string &s2) {
  return convert_string_problem_helper(s1, s2, 0, 0);
}


int DACImplProblems::zero_one_knapsack_problem_helper(const std::vector<int> &profits,
                                     const std::vector<int> &weights,
                                     int capacity,
                                     int current_index) {
  if (capacity < 0 || current_index < 0 || current_index >= profits.size()) {
    return 0;
  }

  int profit_1 {0};
  if (weights[current_index] <= capacity) {
    profit_1 = profits[current_index] + zero_one_knapsack_problem_helper(profits, 
                                                                         weights,
                                                                         capacity - weights[current_index],
                                                                         current_index + 1);
  }
  
  int profit_2 = zero_one_knapsack_problem_helper(profits, 
                                                  weights, 
                                                  capacity, 
                                                  current_index + 1);
  return std::max(profit_1, profit_2);
}

int DACImplProblems::zero_one_knapsack_problem(const std::vector<int> &profits,
                              const std::vector<int> &weights,
                              int capacity) {
  return zero_one_knapsack_problem_helper(profits, weights, capacity, 0);
}


int DACImplProblems::longest_common_subsequence_problem_helper(const std::string &s1,
                                                               const std::string &s2,
                                                               int index_1,
                                                               int index_2) {
  if (s1.length() == index_1 || s2.length() == index_2) return 0;

  int seq_1 {0};
  if (s1[index_1] == s2[index_2]) {
    seq_1 = 1 + longest_common_subsequence_problem_helper(s1, s2, index_1 + 1, index_2 + 1);
  }
  int seq_2 = longest_common_subsequence_problem_helper(s1, s2, index_1 + 1, index_2);
  int seq_3 = longest_common_subsequence_problem_helper(s1, s2, index_1, index_2 + 1);
  return std::max(seq_1, std::max(seq_2, seq_3));
}

int DACImplProblems::longest_common_subsequence_problem(const std::string &s1,
                                                        const std::string &s2) {
  return longest_common_subsequence_problem_helper(s1, s2, 0, 0);
}


int DACImplProblems::longest_palindromic_subsequence_problem_helper(const std::string &s1,
                                                                    int start_index,
                                                                    int end_index) {
  if (start_index > end_index) return 0;
  if (start_index == end_index) return 1;

  int seq_1 = 0;
  if (s1[start_index] == s1[end_index]) {
    seq_1 = 2 + longest_palindromic_subsequence_problem_helper(s1, start_index + 1, end_index - 1);
  }
  int seq_2 = longest_palindromic_subsequence_problem_helper(s1, start_index + 1, end_index);
  int seq_3 = longest_palindromic_subsequence_problem_helper(s1, start_index, end_index - 1);
  return std::max(seq_1, std::max(seq_2, seq_3));
}

int DACImplProblems::longest_palindromic_subsequence_problem(const std::string &s1) {
  return longest_palindromic_subsequence_problem_helper(s1, 0, s1.length() - 1);
}


int DACImplProblems::min_cost_to_last_cell_problem_helper(const std::vector<std::vector<int>> &cost,
                                                          int row, int col) {
  if (row == -1 || col == -1) return INT_MAX;
  if (row == 0 && col == 0) return cost[0][0];

  int way_1 = min_cost_to_last_cell_problem_helper(cost, row - 1, col);
  int way_2 = min_cost_to_last_cell_problem_helper(cost, row, col - 1);
  return std::min(way_1, way_2) + cost[row][col];
}

int DACImplProblems::min_cost_to_last_cell_problem(const std::vector<std::vector<int>> &cost) {
  return min_cost_to_last_cell_problem_helper(cost, cost.size() - 1, cost[0].size() - 1);
}


int DACImplProblems::paths_to_last_cell_with_given_cost_problem_helper(const std::vector<std::vector<int>> &path,
                                                                      int row, int col, int cost) {
  if (cost < 0) return 0;
  
  if (row == 0 && col == 0) {
    return (path[0][0] - cost == 0) ? 1 : 0;
  }

  if (row == 0) {
    return paths_to_last_cell_with_given_cost_problem_helper(path, 0, col - 1, cost - path[row][col]);
  }

  if (col == 0) {
    return paths_to_last_cell_with_given_cost_problem_helper(path, row - 1, 0, cost - path[row][col]);
  }

  int way_1 = paths_to_last_cell_with_given_cost_problem_helper(path, row - 1, col, cost - path[row][col]);
  int way_2 = paths_to_last_cell_with_given_cost_problem_helper(path, row, col - 1, cost - path[row][col]);
  return way_1 + way_2;
}

int DACImplProblems::paths_to_last_cell_with_given_cost_problem(const std::vector<std::vector<int>> &path,
                                                               int cost) {
  return paths_to_last_cell_with_given_cost_problem_helper(path, path.size() - 1, path[0].size() - 1, cost);
}
