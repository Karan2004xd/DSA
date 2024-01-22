#include "../../include/Sorting/QuickSort.h"

int partition(int left, int right, std::vector<int> &arr) {
    int pivot = right;
    int i = left - 1;

    for (int j = left; j <= right; j++) {
        if (arr[j] <= arr[pivot]) {
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    return i;
}

void quick_sort_helper(int left, int right, std::vector<int> &arr) {
    if (left < right) {
        int pivot = partition(left, right, arr);
        quick_sort_helper(left, pivot - 1, arr);
        quick_sort_helper(pivot + 1, right, arr);
    }
}

void QuickSort::sort_array() {
    quick_sort_helper(0, arr.size() - 1, arr);
}
