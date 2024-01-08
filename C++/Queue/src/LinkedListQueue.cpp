#include "../include/LinkedListQueue.h"

bool LinkedListQueue::is_empty() const {
    return sll.head == nullptr;
}

int LinkedListQueue::peek() const {
    if (is_empty()) {
        std::cout << "The Queue is empty" << std::endl;
        return -1;
    }
    return sll.head->value;
}

void LinkedListQueue::en_queue(int value) {
    sll.add_element(value, sll.size + 1);
}

int LinkedListQueue::de_queue() {
    if (is_empty()) {
        std::cout << "The Queue is already empty" << std::endl;
        return -1;
    }
    int result = sll.head->value;
    sll.delete_element(result);
    return result;
}

void LinkedListQueue::delete_queue() {
    sll.delete_ll();
}
