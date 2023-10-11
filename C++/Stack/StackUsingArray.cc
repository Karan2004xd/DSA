#include <iostream>

struct StackUsingArray {
   int *stack_arr {nullptr};
   int top_element, stack_size;

   StackUsingArray(int size);
   bool is_full();
   int peek();
   bool is_empty();
   void push(int value);
   int pop();
   void delete_stack();
   ~StackUsingArray();
};

StackUsingArray::StackUsingArray(int size) {
   this->stack_arr = new int[size];
   this->stack_size = size;
   this->top_element = -1;
}

bool StackUsingArray::is_full() {
   return top_element == stack_size - 1;
}

bool StackUsingArray::is_empty() {
   return top_element == -1;
}

int StackUsingArray::peek() {
   if (!is_empty()) return stack_arr[top_element];
   std::cout << "The stack is empty" << std::endl;
   return -1;
}

void StackUsingArray::push(int value) {
   if (!is_full()) {
      top_element++;
      stack_arr[top_element] = value;
      return;
   }
   std::cout << "The stack is full" << std::endl;
}

int StackUsingArray::pop() {
   int popped_value = -1;
   if (!is_empty()) {
      popped_value = stack_arr[top_element];
      top_element--;
   } else {
      std::cout << "The stack is already empty" << std::endl;
   }
   return popped_value;
}

void StackUsingArray::delete_stack() {
   stack_arr = nullptr;
}

StackUsingArray::~StackUsingArray() {
   delete [] stack_arr;
}

int main() {
   StackUsingArray stack(5);
   stack.push(5);
   stack.push(10);
   stack.push(15);
   stack.push(25);
   stack.push(30);

   std::cout << stack.peek() << std::endl;
   return 0;
}
