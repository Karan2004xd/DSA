#ifndef HEAP_SORT_H_
#define HEAP_SORT_H_
#include "../CommonOper.h"
#include "../../../Tree/include/BinaryHeap/BinaryHeap.h"

// Test Cases

    /* std::vector<int> arr {50, 40, 30, 20, 10}; */
    /* HeapSort ss {arr}; */
    /* ss.display_array(); */
    /* ss.sort_array(); */
    /* ss.display_array(); */

class HeapSort : protected CommonOper {
public:
    HeapSort(std::vector<int> &arr) : arr(arr), bh( {(int) arr.size(), BinaryHeap::HeapType::MIN} ) {}
    void display_array() override {
        traverse(arr);
    }

    void sort_array();
private:
    std::vector<int> arr;
    BinaryHeap bh;
};
#endif // HEAP_SORT_H_
