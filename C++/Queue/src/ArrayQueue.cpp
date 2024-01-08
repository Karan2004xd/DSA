#include "../include/ArrayQueue.h"

ArrayQueue::ArrayQueue(int size) {
    this->size = size;
    this->queue = new int[size];
    this->start_of_queue = this->end_of_queue = -1;
}

bool ArrayQueue::is_empty() const {
    return start_of_queue < 0 || start_of_queue >= size;
}

bool ArrayQueue::is_full() const {
    return end_of_queue >= size - 1;
}

void ArrayQueue::en_queue(int value) {
    if (is_empty()) {
        queue[0] = value;
        start_of_queue = end_of_queue = 0;
    } else {
        if (is_full()) {
            std::cout << "The Queue is already full" << std::endl;
        } else {
            queue[++end_of_queue] = value;
        }
    }
}

int ArrayQueue::de_queue() {
    if (is_empty()) {
        std::cout << "The Queue is already empty" << std::endl;
        return -1;
    } 
    int result = queue[start_of_queue];
    start_of_queue++;
    if (start_of_queue > end_of_queue) {
        start_of_queue = end_of_queue = -1;
    }
    return result;
}

int ArrayQueue::peek() const {
    if (is_empty()) {
        std::cout << "The Queue is empty" << std::endl;
        return -1;
    }
    return queue[start_of_queue];
}

void ArrayQueue::delete_queue() {
    start_of_queue = end_of_queue = -1;
}

ArrayQueue::~ArrayQueue() {
    delete [] queue;
}
