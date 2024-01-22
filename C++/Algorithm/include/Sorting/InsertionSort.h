#ifndef INSERTION_SORT_H_
#define INSERTION_SORT_H_
#include "../CommonOper.h"

// Test Cases

    /* std::vector<int> arr {50, 40, 30, 20, 10}; */
    /* InsertionSort ss {arr}; */
    /* ss.display_array(); */
    /* ss.sort_array(); */
    /* ss.display_array(); */

class InsertionSort : protected CommonOper {
public:
    InsertionSort(std::vector<int> &arr) : arr(arr) {}
    void display_array() override {
        traverse(arr);
    }

    void sort_array();
private:
    std::vector<int> arr;
};
#endif // INSERTION_SORT_H_
