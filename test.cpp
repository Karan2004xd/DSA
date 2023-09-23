#include <cstdlib>
#include <iostream>
#include <vector>
#include <climits>

void print_array(std::vector<int> print_array) {
   for (int i : print_array) {
      std::cout << i << " ";
   }
   std::cout << std::endl;

}

std::vector<int> create_new_array(std::vector<int>& nums, std::vector<int>& index) {
   std::vector<int> result_array(index.size(), INT_MIN);

   for (int i = 0; i < nums.size(); i++) {
      if (result_array[index[i]] == INT_MIN) {
         result_array[index[i]] = nums[i];
      } else {
         for (int j = index.size() - 2; j > index[i] ; j--) {
            if (result_array[j] != INT_MIN) {
               result_array[j + 1] = result_array[j];
            }
            print_array(result_array);
         }
         result_array[index[i]] = nums[i];
      }
   }
   return result_array;
}

int main() {
   std::vector<int> test_vec {0,1,2,3,4};
   std::vector<int> test_vec_2 {0,1,2,2,1};
   /* std::cout << sum_of_binary_indices(test_vec, 2) << std::endl; */
   for (int i : create_new_array(test_vec, test_vec_2)) {
      std::cout << i << " ";
   }
   std::cout << std::endl;
   return 0;
}
