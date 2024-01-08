#include "../include/StackUsingLL.h"

void StackUsingLL::push(int value) {
    sll.add_element(value, 0);
}

bool StackUsingLL::is_empty() const {
    return sll.head == nullptr;
}

int StackUsingLL::peek() const {
    if (is_empty()) {
        std::cout << "The Stack is empty" << std::endl;
        return -1;
    }
    return sll.head->value;
}

void StackUsingLL::delete_stack() {
    sll.delete_ll();
}

int StackUsingLL::pop() {
    if (is_empty()) {
        std::cout << "The Stack is already empty" << std::endl;
        return -1;
    }
    int result = sll.head->value;
    sll.delete_element(result);
    return result;
}
