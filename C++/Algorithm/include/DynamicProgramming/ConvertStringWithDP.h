#ifndef CONVERT_STRING_WITH_DP_H
#define CONVERT_STRING_WITH_DP_H

#include <string>
#include <unordered_map>
#include <iostream>
#include <algorithm>

/* ConvertStringWithDP problem; */
/* auto result = problem.convert_string_using_top_down_method("table", "tbres"); */
/* std::cout << "Result 1: " << result << std::endl; */

// Output
// Result 1: 3

class ConvertStringWithDP {
private:
  std::unordered_map<std::string, int> keys;
  int convert_string_using_top_down_method_helper(const std::string &s1,
                                                  const std::string &s2,
                                                  int index_1,
                                                  int index_2);
public:
  int convert_string_using_top_down_method(const std::string &s1,
                                           const std::string &s2);
};
#endif // CONVERT_STRING_WITH_DP_H
