#include <iostream>
#include "../Stack/LinkedList/SinglyLinkedList.h"

struct QueueUsingLL {
   SinglyLinkedList sll;
   
   void en_queue(int value);
   bool is_empty();
   int de_queue();
   int peek();
   void delete_queue();
   ~QueueUsingLL();
};

bool QueueUsingLL::is_empty() {
   return sll.head == nullptr;
}

void QueueUsingLL::en_queue(int value) {
   sll.insert_value(value, sll.size + 1);
}

int QueueUsingLL::de_queue() {
   int removed_value = -1;
   if (!is_empty()) {
      removed_value = sll.head->value;  
      sll.delete_value(removed_value);
   } else {
      std::cout << "The Queue is empty" << std::endl;
   }
   return removed_value;
}

int QueueUsingLL::peek() {
   if (!is_empty()) return sll.head->value;
   std::cout << "The Queue is empty" << std::endl;
   return -1;
}

void QueueUsingLL::delete_queue() {
   sll.delete_ll();
}

QueueUsingLL::~QueueUsingLL() {
   sll.delete_ll();
}

int main() {
   QueueUsingLL queue;
   queue.en_queue(5);
   queue.en_queue(10);
   queue.en_queue(15);
   queue.en_queue(20);
   queue.en_queue(25);

   std::cout << queue.peek() << std::endl;
   return 0;
}
