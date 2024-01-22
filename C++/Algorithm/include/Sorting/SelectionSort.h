#ifndef SELECTION_SORT_H_
#define SELECTION_SORT_H_
#include "../CommonOper.h"

// Test Cases

    /* std::vector<int> arr {50, 40, 30, 20, 10}; */
    /* SelectionSort ss {arr}; */
    /* ss.display_array(); */
    /* ss.sort_array(); */
    /* ss.display_array(); */

class SelectionSort : protected CommonOper {
public:
    SelectionSort(std::vector<int> &arr) : arr(arr) {}
    void display_array() override {
        traverse(arr);
    }

    void sort_array();
private:
    std::vector<int> arr;
};
#endif // SELECTION_SORT_H_
