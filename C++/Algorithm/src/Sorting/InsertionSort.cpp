#include "../../include/Sorting/InsertionSort.h"

void InsertionSort::sort_array() {
    for (int i = 1; i < arr.size(); i++) {
        int index = i;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[index]) {
                int temp = arr[j];
                arr[j] = arr[index]; 
                arr[index] = temp;
                index--;
            }
        }
    }
}
