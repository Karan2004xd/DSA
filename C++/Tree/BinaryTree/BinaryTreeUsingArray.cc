#include <iostream>
#include <string>

/* For the sake of simplicity we start inserting the elements for the index of 1
 * Formula used for accessing the index of the left node = (size of array) * 2
 * Formula used for accessing the index of the right node = (size of array) * 2 + 1
*/

struct BinaryTreeUsingArray {
   std::string *tree {nullptr};
   int last_used_index, size;

   BinaryTreeUsingArray(int size) {
      this->tree = new std::string[size + 1];
      this->last_used_index = 0;
      this->size = size + 1;
   }

   bool is_full() {
      return size - 1 == last_used_index; 
   }

   bool is_empty(){ 
      return tree == nullptr;
   }

   void insert_value(std::string value) {
      if (!is_full()) {
         last_used_index++;
         tree[last_used_index] = value;
      } else {
         std::cout << "The Tree is already full" << std::endl;
      }
   }

   int search_value(std::string value) {
      for (int i = 0; i < last_used_index; i++) {
         if (tree[i] == value) return i;
      }
      return -1;
   }

   void delete_value(std::string value) {
      int index = search_value(value);
      if (index != -1) {
         tree[index] = tree[last_used_index];
         last_used_index--;
      }
   }

   void pre_order_traversal(int index) {
      if (index > last_used_index || is_empty()) {
         return ;
      }
      std::cout << tree[index] + " ";
      pre_order_traversal(index * 2);
      pre_order_traversal(index * 2 + 1);
   }

   void in_order_traversal(int index) {
      if (index > last_used_index || is_empty()) {
         return ;
      }
      in_order_traversal(index * 2);
      std::cout << tree[index] + " ";
      in_order_traversal(index * 2 + 1);
   }

   void post_order_traversal(int index) {
      if (index > last_used_index || is_empty()) {
         return ;
      }
      post_order_traversal(index * 2);
      post_order_traversal(index * 2 + 1);
      std::cout << tree[index] + " ";
   }

   void level_order_traversal() {
      if (!is_empty()) {
         for (int i = 1; i <= last_used_index; i++) {
            std::cout << tree[i] + " ";
         }
         std::cout << std::endl;
      }
   }

   void delete_tree() {
      tree = nullptr;
      delete [] this->tree;
   }
};

int main() {
   BinaryTreeUsingArray bt(9);
   bt.insert_value("N1");
   bt.insert_value("N2");
   bt.insert_value("N3");
   bt.insert_value("N4");
   bt.insert_value("N5");
   bt.insert_value("N6");
   bt.insert_value("N7");
   bt.insert_value("N8");
   bt.insert_value("N9");
   bt.post_order_traversal(1);
   return 0;
}
