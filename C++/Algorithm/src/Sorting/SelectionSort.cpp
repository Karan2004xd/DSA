#include "../../include/Sorting/SelectionSort.h"

void SelectionSort::sort_array() {
    for (int i = 0; i < arr.size(); i++) {
        int index = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }

        if (index != i) {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
}
