#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <climits>
#include <string>

void print_array(std::vector<int> print_array) {
   for (int i : print_array) {
      std::cout << i << " ";
   }
   std::cout << std::endl;

}

std::string create_new_array(std::string s, std::vector<int>& indices) {
   for (int i = 0; i < indices.size() - 1; i++) {
      for (int j = 0; j < indices.size() - 1; j++) {
         if (indices[j] > indices[j + 1]) {
            char temp = s.at(indices[j]);
            s.at(indices[j]) = s.at(indices[j + 1]);
            s.at(indices[j + 1]) = temp;

            int temp_1 = indices[j];
            indices[j] = indices[j + 1];
            indices[j + 1] = temp_1;
         }
      }
   }
   return s;
}

int main() {
   std::vector<int> test_vec {4,5,6,7,0,2,1,3};
   std::cout << create_new_array("codeleet", test_vec) << std::endl;
   /* std::cout << sum_of_binary_indices(test_vec, 2) << std::endl; */
   /* print_array(create_new_array(test_vec)); */
   return 0;
}
