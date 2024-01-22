#ifndef BINARY_SEARCH_H_
#define BINARY_SEARCH_H_
#include "../CommonOper.h"

// Test Cases 

    /* std::vector<int> test_vec {10, 20, 30, 40, 50}; */
    /* BinarySearch bs {test_vec}; */
    /* bs.search_element(0); */

class BinarySearch : protected CommonOper {
public:
    BinarySearch(std::vector<int> &arr) : arr(arr) {}

    void search_element(int value);
    void display_array() override {
        traverse(arr);
    }
private:
    std::vector<int> arr;
};
#endif // BINARY_SEARCH_H_
