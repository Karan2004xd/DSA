#include "../../include/BinaryHeap/BinaryHeap.h"

BinaryHeap::BinaryHeap(int size) {
    this->heap = new int[size + 1];
    this->size_of_heap = 0;
    this->size_of_array = size + 1;
}

bool BinaryHeap::is_empty() const {
    return size_of_heap == 0;
}

bool BinaryHeap::is_full() const {
    return size_of_heap == size_of_array - 1;
}

int BinaryHeap::get_size_of_heap() const {
    return size_of_heap;
}

int BinaryHeap::peek() const {
    if (is_empty()) {
        std::cout << "The Heap is empty" << std::endl;
        return -1;
    }
    return heap[1];
}
