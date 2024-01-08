#include "../include/CircularArrayQueue.h"

CircularArrayQueue::CircularArrayQueue(int size) {
    this->size = size;
    this->queue = new int[size];
    this->start_of_queue = this->end_of_queue = -1;
}

bool CircularArrayQueue::is_full() const {
    if (end_of_queue + 1 == start_of_queue) {
        return true;
    } else if (start_of_queue == 0 && end_of_queue == size - 1) {
        return true;
    }
    return false;
}

bool CircularArrayQueue::is_empty() const {
    return end_of_queue < 0;
}

void CircularArrayQueue::en_queue(int value) {
    if (is_empty()) {
        queue[0] = value;
        start_of_queue = end_of_queue = 0;
    } else {
        if (is_full()) {
            std::cout << "The Queue is full" << std::endl;
        } else {
            if (end_of_queue < size - 1) {
                end_of_queue++;
            } else {
                end_of_queue = 0;
            }
            queue[end_of_queue] = value;
        }
    }
}

int CircularArrayQueue::de_queue() {
    if (is_empty()) {
        std::cout << "The Queue is already empty" << std::endl;
        return -1;
    } 
    int result = queue[start_of_queue];
    start_of_queue++;
    if (start_of_queue > end_of_queue) {
        start_of_queue = end_of_queue = -1;
    } else if (start_of_queue == size - 1) {
        start_of_queue = 0;
    }
    return result;
}

int CircularArrayQueue::peek() const {
    if (is_empty()) {
        std::cout << "The Queue is empty" << std::endl;
        return -1;
    } 
    return queue[start_of_queue];
}

void CircularArrayQueue::delete_queue() {
    start_of_queue = end_of_queue = -1;
}

CircularArrayQueue::~CircularArrayQueue() {
    delete [] queue;
}
