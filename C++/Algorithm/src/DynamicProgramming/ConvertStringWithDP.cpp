#include "../../include/DynamicProgramming/ConvertStringWithDP.h"

int ConvertStringWithDP::convert_string_using_top_down_method_helper(const std::string &s1,
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
    return convert_string_using_top_down_method_helper(s1, s2, index_1 + 1, index_2 + 1);
  }

  std::string map_key = std::to_string(index_1) + std::to_string(index_2);
  if (keys.find(map_key) == keys.end()) {
    int delete_operation = 1 + convert_string_using_top_down_method_helper(s1, s2, index_1 + 1, index_2);
    int replace_operation = 1 + convert_string_using_top_down_method_helper(s1, s2, index_1 + 1, index_2 + 1);
    int insert_operation = 1 + convert_string_using_top_down_method_helper(s1, s2, index_1, index_2 + 1);
    keys[map_key] = std::min(delete_operation, std::min(replace_operation, insert_operation));
  }
  return keys[map_key];
}

int ConvertStringWithDP::convert_string_using_top_down_method(const std::string &s1,
                                                              const std::string &s2) {
  return convert_string_using_top_down_method_helper(s1, s2, 0, 0);
}
