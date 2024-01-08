#include "../include/StackUsingArray.h"

StackUsingArray::StackUsingArray(int size) {
    this->size = size;
    this->top_element_index = -1;
    this->stack = new int[size];
}

bool StackUsingArray::is_full() const {
    return top_element_index >= size - 1;
}

bool StackUsingArray::is_empty() const {
    return top_element_index == -1;
}

int StackUsingArray::peek() const {
    if (is_empty()) {
        std::cout << "The Stack is empty" << std::endl;
        return -1;
    }
    return stack[top_element_index];
}

int StackUsingArray::pop() {
    if (is_empty()) {
        std::cout << "The stack is already empty" << std::endl;
        return -1;
    } 
    int result = stack[top_element_index];
    top_element_index--;
    return result;
}

void StackUsingArray::push(int value) {
    if (is_full()) {
        std::cout << "The stack is full" << std::endl;
    } else {
        top_element_index++;
        stack[top_element_index] = value;
    }
}

void StackUsingArray::delete_stack() {
    top_element_index = -1;
}

StackUsingArray::~StackUsingArray() {
    delete [] stack;
}
