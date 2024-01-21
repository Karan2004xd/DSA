#ifndef BUBBLE_SORT_H_
#define BUBBLE_SORT_H_
#include "../CommonOper.h"

// Test Cases

    /* std::vector<int> arr {5, 4, 3, 2, 1}; */
    /* BubbleSort bs {arr}; */

    /* bs.display_array(); */
    /* bs.sort_array(); */
    /* bs.display_array(); */

class BubbleSort : protected CommonOper {
public:
    BubbleSort(std::vector<int> &arr) : arr(arr) {}
    void display_array() override {
        traverse(this->arr);
    }

    void sort_array();
private:
    std::vector<int> arr;
};
#endif // BUBBLE_SORT_H_
