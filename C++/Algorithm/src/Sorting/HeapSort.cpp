#include "../../include/Sorting/HeapSort.h"

void HeapSort::sort_array() {
    for (int i = 0; i < arr.size(); i++) {
        bh.insert_element(arr[i]);
    }

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = bh.extract_top_element();
    }

}
