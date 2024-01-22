#include "../../include/BinaryHeap/BinaryHeap.h"

BinaryHeap::BinaryHeap(int size, const HeapType type) {
    this->heap = new int[size + 1];
    this->size_of_heap = 0;
    this->size_of_array = size + 1;
    this->type_of_heap = type;
}

bool BinaryHeap::is_empty() const {
    return size_of_heap == 0;
}

bool BinaryHeap::is_full() const {
    return size_of_heap >= size_of_array - 1;
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

void BinaryHeap::level_order_traversal() {
    if (is_empty()) {
        std::cout << "The Heap is empty" << std::endl;
        return ;
    }

    for (int i = 1; i <= get_size_of_heap(); i++) {
        std::cout << heap[i] << " ";
    }
    std::cout << "\n";
}

void BinaryHeap::in_order_traversal(int index) {
    if (index > get_size_of_heap()) {
        return ;
    }
    std::cout << heap[index] << " ";
    in_order_traversal(index * 2);
    in_order_traversal(index * 2 + 1);
}

void BinaryHeap::pre_order_traversal(int index) {
    if (index > get_size_of_heap()) {
        return ;
    }
    pre_order_traversal(index * 2);
    std::cout << heap[index] << " ";
    pre_order_traversal(index * 2 + 1);
}

void BinaryHeap::post_order_traversal(int index) {
    if (index > get_size_of_heap()) {
        return ;
    }
    post_order_traversal(index * 2);
    post_order_traversal(index * 2 + 1);
    std::cout << heap[index] << " ";
}

void heapify_bottom_to_top(int index, const std::string &type, int *heap) {
    if (index <= 1) {
        return ;
    }
    if (type == "max") {
        if (heap[index] > heap[index / 2]) {
            int temp = heap[index];
            heap[index] = heap[index / 2];
            heap[index / 2] = temp;
        }
    } else if (type == "min") {
        if (heap[index] < heap[index / 2]) {
            int temp = heap[index];
            heap[index] = heap[index / 2];
            heap[index / 2] = temp;
        }
    }
    heapify_bottom_to_top(index / 2, type, heap);
}

void BinaryHeap::insert_element(int value) {
    if (is_full()) {
        std::cout << "The Heap is full" << std::endl;
        return ;
    }
    size_of_heap++;
    heap[size_of_heap] = value;

    std::string type_of_oper = type_of_heap == HeapType::MAX ? "max" : "min";

    heapify_bottom_to_top(size_of_heap, type_of_oper, heap);
}

void heapify_top_to_bottom(int index, const std::string &type, int *heap, int size_of_heap) {
    int left {index * 2}, right {index * 2 + 1}, swapped {0};
    if (left > size_of_heap) {
        return ;
    }

    if (type == "min") {
        if (size_of_heap == left && heap[index] < heap[left]) {
            int temp = heap[index];
            heap[index] = heap[left];
            heap[left] = temp;
            return ;
        } else {
            if (heap[left] < heap[right]) {
                swapped = left;
            } else {
                swapped = right;
            }

            if (heap[index] > heap[swapped]) {
                int temp = heap[index];
                heap[index] = heap[swapped];
                heap[swapped] = temp;
            }
        }
    } else if (type == "max") {
        if (size_of_heap == right && heap[index] > heap[right]) {
            int temp = heap[index];
            heap[index] = heap[right];
            heap[right] = temp;
        } else {
            if (heap[left] > heap[right]) {
                swapped = left;
            } else {
                swapped = right;
            }

            if (heap[index] < heap[swapped]) {
                int temp = heap[index];
                heap[index] = heap[swapped];
                heap[swapped] = temp;
            }
        }
    }
    heapify_top_to_bottom(swapped, type, heap, size_of_heap);
}

int BinaryHeap::extract_top_element() {
    int extracted_value = heap[1];
    heap[1] = heap[get_size_of_heap()];
    size_of_heap--;

    std::string type_of_oper = type_of_heap == HeapType::MAX ? "max" : "min";

    heapify_top_to_bottom(1, type_of_oper, heap, get_size_of_heap() - 1);

    return extracted_value;
}

void BinaryHeap::delete_heap() {
    heap = nullptr;
    size_of_heap = 0;
    size_of_array = 0;
}

BinaryHeap::~BinaryHeap() {
    delete [] heap;
}
