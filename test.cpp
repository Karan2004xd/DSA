#include <cmath>
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

std::vector<int> create_new_array(std::vector<int>& encoded, int first) {
   std::vector<int> result_array {first};
   for (int i = 0; i < encoded.size(); i++) {
      result_array.push_back(result_array[result_array.size() - 1] ^ encoded[i]);
   }
   return result_array;
}

int main() {
   std::vector<int> test_vec {1,2,3};
   
   /* std::cout << sum_of_binary_indices(test_vec, 2) << std::endl; */
   print_array(create_new_array(test_vec, 1));
   return 0;
}
