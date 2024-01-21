#include "../../include/Searching/LinearSearch.h"

void LinearSearch::display_array() {
    traverse(arr);
}

void LinearSearch::search_element(int value) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == value) {
            print_found(value, i);
            return;
        }
    }
    print_not_fount(value);
}
