#include <iostream>
#include <string>

struct BinaryTreeUsingArray {
   std::string *tree;
   int last_used_index, size;

   BinaryTreeUsingArray(int size) {
      tree = new std::string[size];
      last_used_index = 0;
      this->size = size;
   }

   bool is_full() {
      return size == last_used_index; 
   }
};
