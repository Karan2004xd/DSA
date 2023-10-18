#include <iostream>
#include <queue>
#include <string>

/* Output of future refrence :
 * Input : N1, N2, N3, N4, N5, N6, N7, N8, N9
 * Pre-Order Traversal output : N1 N2 N4 N8 N9 N5 N3 N6 N7
 * In-Order Traversal output: N8 N4 N9 N2 N5 N1 N6 N3 N7 
 * Post-Order Traversal output: N8 N9 N4 N5 N2 N6 N7 N3 N1
 * Level-Order Traversal output: N1 N2 N3 N4 N5 N6 N7 N8 N9
 */

struct BinaryNode {
   BinaryNode *left, *right;
   std::string value;
};

struct BinaryTreeUsingLL {
public:
   BinaryNode *root;

   BinaryTreeUsingLL() {
      root = nullptr;
   }
   
   void insert_node(std::string value) {
      std::queue<BinaryNode*> queue;
      BinaryNode *new_node = new BinaryNode();
      new_node->value = value;

      if (root == nullptr) {
         root = new_node;
         return ;
      }

      queue.push(root);
      while (!queue.empty()) {
         BinaryNode *temp_node = queue.front();
         queue.pop();

         if (temp_node->left == nullptr) {
            temp_node->left = new_node;
            break;
         } else if (temp_node->right == nullptr) {
            temp_node->right = new_node;
            break;
         } else {
            queue.push(temp_node->left);
            queue.push(temp_node->right);
         }
      }
   }

   void pre_order_traversal(BinaryNode *node) {
      if (node == nullptr) {
         return ;
      }
      std::cout << node->value + " ";
      pre_order_traversal(node->left);
      pre_order_traversal(node->right);
   }

   void in_order_traversal(BinaryNode *node) {
      if (node == nullptr) {
         return ;
      }
      in_order_traversal(node->left);
      std::cout << node->value + " ";
      in_order_traversal(node->right);
   }

   void post_order_traversal(BinaryNode *node) {
      if (node == nullptr) {
         return ;
      }
      post_order_traversal(node->left);
      post_order_traversal(node->right);
      std::cout << node->value + " ";
   }

   void level_order_traversal() {
      std::queue<BinaryNode*> queue;
      if (root == nullptr) {
         std::cout << "The tree is empty" << std::endl;
         return ;
      }
      queue.push(root);
      while (!queue.empty()) {
         BinaryNode *temp_node = queue.front();
         std::cout << temp_node->value + " ";
         queue.pop();

         if (temp_node->left != nullptr) {
            queue.push(temp_node->left);
         }
         if (temp_node->right != nullptr) {
            queue.push(temp_node->right);
         }
      }
      std::cout << "\n";
   }

   bool search_node(std::string data) {
      std::queue<BinaryNode*> queue;
      if (root != nullptr) {
         queue.push(root);
         while (!queue.empty()) {
            BinaryNode *temp_node = queue.front();
            queue.pop();
            if (temp_node->value == data) return true;

            if (temp_node->left != nullptr) {
               queue.push(temp_node->left);
            }
            if (temp_node->right != nullptr) {
               queue.push(temp_node->right);
            }
         }
      }
      std::cout << "The provided value was not found in the tree" << std::endl;
      return false;
   }
   
   BinaryNode *get_deepest_node() {
      std::queue<BinaryNode*> queue;
      queue.push(root);
      BinaryNode *node;
      while (!queue.empty()) {
         node = queue.front();
         queue.pop();
         if (node->left != nullptr) {
            queue.push(node->left);
         }
         if (node->right != nullptr) {
            queue.push(node->right);
         }
      }
      return node;
   }

   void delete_deepest_node() {
      std::queue<BinaryNode*> queue;
      queue.push(root);
      BinaryNode *prev_node, *node {nullptr};

      while (!queue.empty()) {
         prev_node = node;  
         node = queue.front();
         queue.pop();

         if (node->left == nullptr) {
            prev_node->right = nullptr;
            return ;
         } else if (node->right == nullptr) {
            prev_node->left = nullptr;
            return;
         }

         if (node->left != nullptr) {
            queue.push(node->left);
         }
         if (node->right != nullptr) {
            queue.push(node->right);
         }
      }
   }

   void delete_node(std::string value) {
      if (search_node(value)) {
         std::queue<BinaryNode*> queue;
         queue.push(root);
         while (!queue.empty()) {
            BinaryNode *temp_node = queue.front();
            queue.pop();
            if (temp_node->value == value) {
               temp_node->value = get_deepest_node()->value;
               delete_deepest_node();
               return;
            }

            if (temp_node->left != nullptr) {
               queue.push(temp_node->left);
            }
            if (temp_node->right != nullptr) {
               queue.push(temp_node->right);
            }
         }
      }
   }

   void delete_tree() {
      root = nullptr;
   }

};

int main() {
   BinaryTreeUsingLL bt;
   /* BinaryNode *N1 = new BinaryNode(); */
   /* N1->value = "N1"; */

   /* BinaryNode *N2 = new BinaryNode(); */
   /* N2->value = "N2"; */

   /* BinaryNode *N3 = new BinaryNode(); */
   /* N3->value = "N3"; */

   /* BinaryNode *N4 = new BinaryNode(); */
   /* N4->value = "N4"; */

   /* BinaryNode *N5 = new BinaryNode(); */
   /* N5->value = "N5"; */

   /* BinaryNode *N6 = new BinaryNode(); */
   /* N6->value = "N6"; */

   /* BinaryNode *N7 = new BinaryNode(); */
   /* N7->value = "N7"; */

   /* BinaryNode *N8 = new BinaryNode(); */
   /* N8->value = "N8"; */

   /* BinaryNode *N9 = new BinaryNode(); */
   /* N9->value = "N9"; */

   /* N1->left = N2; */
   /* N1->right = N3; */

   /* N2->left = N4; */
   /* N2->right = N5; */

   /* N3->left = N6; */
   /* N3->right = N7; */

   /* N4->left = N8; */
   /* N4->right = N9; */  

   /* bt.root = N1; */
   bt.insert_node("N1");
   bt.insert_node("N2");
   bt.insert_node("N3");
   bt.insert_node("N4");
   bt.insert_node("N5");
   bt.insert_node("N6");
   bt.insert_node("N7");
   bt.insert_node("N8");
   bt.insert_node("N9");
   bt.level_order_traversal();

   /* bt.delete_node("N1"); */
   /* bt.delete_node("N10"); */
   /* bt.level_order_traversal(); */
   return 0;
}
