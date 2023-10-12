#include <iostream>
#include "LinkedList/SinglyLinkedList.h"

struct StackUsingLL {
   SinglyLinkedList sll;
   
   bool is_empty();
   void push(int value);
   int peek();
   int pop();
   void delete_stack();
};

bool StackUsingLL::is_empty() {
   return sll.head == nullptr;
}

void StackUsingLL::push(int value) {
   sll.insert_value(value, 0);
}

int StackUsingLL::peek() {
   if (!is_empty()) return sll.head->value;
   std::cout << "The Stack is empty" << std::endl;
   return -1;
}

int StackUsingLL::pop() {
   int popped_value = -1;
   if (!is_empty()) { 
      popped_value = sll.head->value;
      sll.delete_value(sll.head->value);
   } else {
      std::cout << "The Stack is empty" << std::endl;
   }
   return popped_value;
}

void StackUsingLL::delete_stack() {
   sll.delete_ll();
}

int main() {
   StackUsingLL stack_ll;
   stack_ll.push(5);
   stack_ll.push(10);
   stack_ll.push(15);
   stack_ll.push(20);
   
   std::cout << stack_ll.peek() << std::endl;
   return 0;
}
