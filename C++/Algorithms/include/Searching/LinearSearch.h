#ifndef LINEAR_SEARCH_H_
#define LINEAR_SEARCH_H_
#include "../CommonOper.h"

// Test Cases 

    /* std::vector<int> test_vec {10, 20, 30, 40, 50}; */
    /* LinearSearch ls {test_vec}; */
    /* ls.search_element(50); */

class LinearSearch : protected CommonOper {
public:
    LinearSearch(std::vector<int> &arr) : arr(arr) {}

    void display_array() override;
    void search_element(int value);
private:
    std::vector<int> arr;
};
#endif // LINEAR_SEARCH_H_
