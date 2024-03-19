#include "../../include/DynamicProgramming/NumberFactorWithDP.h"

int NumberFactorWithDP::get_number_factor_with_top_down_method(int num) {
  if (num == 0 || num == 1 || num == 2) return 1;
  if (num == 3) return 2;
  if (keys.find(num) != keys.end()) return keys[num];

  int way_1 = get_number_factor_with_top_down_method(num - 1);
  int way_2 = get_number_factor_with_top_down_method(num - 3);
  int way_3 = get_number_factor_with_top_down_method(num - 4);
  keys[num] = way_1 + way_2 + way_3;
  return keys[num];
}

int NumberFactorWithDP::get_number_factor_with_bottom_up_method(int num) {
  std::vector<int> nums {1, 1, 1, 2};
  for (int i = 4; i <= num; i++) {
    nums.push_back(nums[i - 1] + nums[i - 3] + nums[i - 4]);
  }
  return nums[num];
}
