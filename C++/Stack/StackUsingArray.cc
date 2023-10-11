#include <iostream>

struct StackUsingArray {
   int *stack_arr {nullptr};
   StackUsingArray(int size);
   ~StackUsingArray();
};

StackUsingArray::StackUsingArray(int size) {
   this->stack_arr = new int[size + 1];
}

StackUsingArray::~StackUsingArray() {
   delete [] stack_arr;
}

int main() {
   return 0;
}
