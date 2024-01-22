#ifndef BUCKET_SORT_H_
#define BUCKET_SORT_H_
#include "../CommonOper.h"
#include <cmath>
#include <climits>
#include <algorithm>

// Test Cases

    /* std::vector<int> arr {50, 40, 30, 20, 10}; */
    /* BucketSort ss {arr}; */
    /* ss.display_array(); */
    /* ss.sort_array(); */
    /* ss.display_array(); */

class BucketSort : protected CommonOper {
public:
    BucketSort(std::vector<int> &arr) : arr(arr) {}
    void display_array() override {
        traverse(arr);
    }

    void sort_array();
private:
    std::vector<int> arr;
};
#endif // BUCKET_SORT_H_
