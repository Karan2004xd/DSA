#include <iostream>
#include <queue>
#include "./LinkedList/SinglyLinkedList.h"

struct BinaryNode {
   BinaryNode *left, *right;
   int value;
};

struct BinaryTreeUsingLL {
   BinaryTreeUsingLL() {
      std::queue<SinglyLinkedList<BinaryNode>> queue;
   }
};
