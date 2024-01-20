#ifndef BINARY_HEAP_H_
#define BINARY_HEAP_H_
#include <iostream>
#include <string>

// Test Cases

    /* BinaryHeap tree {5, BinaryHeap::HeapType::MIN}; */
    /* tree.insert_element(10); */
    /* tree.insert_element(5); */
    /* tree.insert_element(15); */
    /* tree.insert_element(1); */
    /* tree.level_order_traversal(); */

    /* std::cout << tree.extract_top_element() << std::endl; */
    /* tree.level_order_traversal(); */

    /* tree.delete_heap(); */
    /* tree.level_order_traversal(); */

class BinaryHeap {
public:
    enum class HeapType { MAX, MIN };
    BinaryHeap(int size, const HeapType type);

    bool is_empty() const;
    bool is_full() const;
    int peek() const;
    int get_size_of_heap() const;

    void insert_element(int value);
    int extract_top_element();
    
    void in_order_traversal(int index);
    void pre_order_traversal(int index);
    void post_order_traversal(int index);
    void level_order_traversal();

    void delete_heap();

    ~BinaryHeap();
private:
    int *heap {nullptr};
    int size_of_heap;
    int size_of_array;
    HeapType type_of_heap;
};
#endif // BINARY_HEAP_H_
