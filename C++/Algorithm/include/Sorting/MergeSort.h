#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_
#include "../CommonOper.h"
#include <climits>

// Test Cases

    /* std::vector<int> arr {50, 40, 30, 20, 10}; */
    /* MergeSort ss {arr}; */
    /* ss.display_array(); */
    /* ss.sort_array(); */
    /* ss.display_array(); */

class MergeSort : protected CommonOper {
public:
    MergeSort(std::vector<int> &arr) : arr(arr) {}
    void display_array() override {
        traverse(arr);
    }

    void sort_array();
private:
    std::vector<int> arr;
};
#endif // MERGE_SORT_H_
