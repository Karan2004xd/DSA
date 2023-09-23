#include <iostream>
#include <vector>
 
bool check_bits(int decimal_num, int k) {
   int bits {0};

   while (decimal_num > 0) {
      if (bits >= k){
         return true;
      }
      if (decimal_num % 2 == 1) {
         bits++;
      }
      decimal_num /= 2;
   }
   return false;
}

int sum_of_binary_indices(std::vector<int>& nums, int k) {
   int result {0};
   for (int i = 0; i < nums.size(); i++) {
      if (check_bits(i, k)) {
         std::cout << i << std::endl;
         result += nums[i];
      }
   }
   return result;
}

int main() {
   std::vector<int> test_vec {5,10,1,5,2};
   std::cout << sum_of_binary_indices(test_vec, 1) << std::endl;
   /* for (int i : find_min_array(test_vec)) { */
   /*    std::cout << i << " "; */
   /* } */
   /* std::cout << std::endl; */
   return 0;
}
