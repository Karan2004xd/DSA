#include "../../include/Searching/BinarySearch.h"

void search_element_helper(int start, int end, int value, std::vector<int> &arr) {
    int midpoint = (start + end) / 2;
    if (start > end) {
        std::cout << "The value was not found" << std::endl;
        return;
    }

    if (arr[midpoint] == value) {
        std::cout << "The value " << value << " was found on index " << midpoint << std::endl;
        return;
    } else if (arr[midpoint] > value) {
        search_element_helper(start, midpoint - 1, value, arr);
    } else if (arr[midpoint] < value) {
        search_element_helper(midpoint + 1, end, value, arr);
    }
}

void BinarySearch::search_element(int value) {
    search_element_helper(0, arr.size(), value, arr);
}
