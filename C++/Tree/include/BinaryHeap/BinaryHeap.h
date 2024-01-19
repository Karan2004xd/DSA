#ifndef BINARY_HEAP_H_
#define BINARY_HEAP_H_
#include <iostream>

class BinaryHeap {
public:
    BinaryHeap(int size);

    bool is_empty() const;
    bool is_full() const;
    int peek() const;
    int get_size_of_heap() const;

    void insert_element(int value, char heap_type);
    void delete_top_element(char heap_type);
    
    void in_order_traversal();
    void level_order_traversal();
    void pre_order_traversal();
    void post_order_traversal();

    void delete_heap();

    ~BinaryHeap();
private:
    int *heap {nullptr};
    int size_of_heap;
    int size_of_array;
};
#endif // BINARY_HEAP_H_
