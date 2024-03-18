#ifndef DAC_IMPL_PROBLEMS_H
#define DAC_IMPL_PROBLEMS_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

class DACImplProblems {
private:
  int house_robber_problem_helper(const std::vector<int> &house_net_worth, int current_house);

  int convert_string_problem_helper(const std::string &s1, const std::string &s2, int index_1, int index_2);

  int zero_one_knapsack_problem_helper(const std::vector<int> &profits,
                                       const std::vector<int> &weights,
                                       int capacity,
                                       int current_index);

  int longest_common_subsequence_problem_helper(const std::string &s1,
                                                const std::string &s2,
                                                int index_1,
                                                int index_2);

  int longest_palindromic_subsequence_problem_helper(const std::string &s1,
                                                     int start_index,
                                                     int end_index);

  int min_cost_to_last_cell_problem_helper(const std::vector<std::vector<int>> &cost,
                                           int row, int col);

  int paths_to_last_cell_with_given_cost_problem_helper(const std::vector<std::vector<int>> &path,
                                                       int row, int col, int cost);
public:
  /* DACImplProblems problems; */
  /* auto result = problems.number_factor_problem(8); */
  /* std::cout << "Result : " << result << std::endl; */

  // Output
  // Result : 25
  int number_factor_problem(int n);
  
  /* DACImplProblems problems; */
  /* auto arg = {6, 7, 1, 30, 8, 2, 4}; */
  /* auto result = problems.house_robber_problem(8); */
  /* std::cout << "Result : " << result << std::endl; */

  // Output
  // Result : 41 
  int house_robber_problem(const std::vector<int> &house_net_worth);

  /* DACImplProblems problems; */
  /* auto arg {"table"}, arg1 {"tbres"}; */
  /* auto result = problems.convert_string_problem(arg, arg1); */
  
  // Output
  // Result : 3 
  int convert_string_problem(const std::string &s1, const std::string &s2);

  /* DACImplProblems problems; */
  /* auto arg = {31, 26, 17, 72}, arg1 = {3, 1, 2, 5}; */
  /* auto arg2 = 7; */

  /* auto result = problems.zero_one_knapsack_problem(arg, arg1, arg2); */
  /* std::cout << "Result : " << result << std::endl; */

  // Output
  // Result : 98 
  int zero_one_knapsack_problem(const std::vector<int> &profits,
                                const std::vector<int> &weights,
                                int capacity);

  /* DACImplProblems problems; */
  /* auto arg {"elephant"}, arg1 {"erepat"}; */

  /* auto result = problems.longest_common_subsequence_problem(arg, arg1); */
  /* std::cout << "Result : " << result << std::endl; */

  // Output
  // Result : 5 
  int longest_common_subsequence_problem(const std::string &s1,
                                         const std::string &s2);

  /* DACImplProblems problems; */
  /* auto arg {"elrmenmet"}; */

  /* auto result = problems.longest_palindromic_subsequence_problem(arg); */
  /* std::cout << "Result : " << result << std::endl; */
  
  // Output
  // Result : 5 
  int longest_palindromic_subsequence_problem(const std::string &s1);

  /* DACImplProblems problems; */
  /* std::vector<std::vector<int>> arg = { */
  /*   {4, 7, 8, 6, 4}, */
  /*   {6, 7, 3, 9, 2}, */
  /*   {3, 8, 1, 2, 4}, */
  /*   {7, 1, 7, 3, 7}, */
  /*   {2, 9, 8, 9, 3} */
  /* }; */

  /* auto result = problems.min_cost_to_last_cell_problem(arg); */
  /* std::cout << "Result : " << result << std::endl; */
  
  // Output
  // Result : 36 
  int min_cost_to_last_cell_problem(const std::vector<std::vector<int>> &cost);

  /* DACImplProblems problems; */
  /* std::vector<std::vector<int>> arg = { */
  /*   {4, 7, 1, 6}, */
  /*   {5, 7, 3, 9}, */
  /*   {3, 2, 1, 2}, */
  /*   {7, 1, 6, 3} */
  /* }; */

  /* auto result = problems.paths_to_last_cell_with_given_cost_problem(arg, 25); */
  /* std::cout << "Result : " << result << std::endl; */
  
  // Output
  // Result : 2 
  int paths_to_last_cell_with_given_cost_problem(const std::vector<std::vector<int>> &path,
                                                int cost);
};
#endif // DAC_IMPL_PROBLEMS_H
