#include "../../include/Sorting/MergeSort.h"

void merge_sort_helper(std::vector<int> &arr, int left, int right, int middle) {
    int temp_left_array[middle - left + 2];
    int temp_right_array[right - middle + 1];

    for (int i = 0; i <= middle - left; i++) {
        temp_left_array[i] = arr[left + i];
    }

    for (int i = 0; i < right - middle; i++) {
        temp_right_array[i] = arr[middle + i + 1];
    }
    
    temp_left_array[middle - left + 1] = INT_MAX;
    temp_right_array[right - middle] = INT_MAX;

    int i = 0, j = 0;
    for (int k = left; k <= right; k++) {
        if (temp_left_array[i] < temp_right_array[j]) {
            arr[k] = temp_left_array[i];
            i++;
        } else {
            arr[k] = temp_right_array[j];
            j++;
        }
    }
}

void merge_sort_helper_2(std::vector<int> &arr, int left, int right) {
    if (right > left) {
        int middle = (right + left) / 2;
        merge_sort_helper_2(arr, left, middle);
        merge_sort_helper_2(arr, middle + 1, right);
        merge_sort_helper(arr, left, right, middle);
    }
}

void MergeSort::sort_array() {
    merge_sort_helper_2(arr, 0, arr.size() - 1);
}
