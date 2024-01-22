#ifndef QUICK_SORT_H_
#define QUICK_SORT_H_
#include "../CommonOper.h"

// Test Cases

    /* std::vector<int> arr {50, 40, 30, 20, 10}; */
    /* QuickSort ss {arr}; */
    /* ss.display_array(); */
    /* ss.sort_array(); */
    /* ss.display_array(); */

class QuickSort : protected CommonOper {
public:
    QuickSort(std::vector<int> &arr) : arr(arr) {}
    void display_array() override {
        traverse(arr);
    }

    void sort_array();
private:
    std::vector<int> arr;
};
#endif // QUICK_SORT_H_
