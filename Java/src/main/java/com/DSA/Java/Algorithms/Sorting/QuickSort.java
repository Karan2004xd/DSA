package com.DSA.Java.Algorithms.Sorting;

public class QuickSort {
  private int[] arr;

  private int partition(int left, int right) {
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

  private void quickSort(int left, int right) {
    if (left < right) {
      int pivot = partition(left, right);
      quickSort(left, pivot - 1);
      quickSort(pivot + 1, right);
    }
  }

  public int[] sort(int[] arr) {
    this.arr = arr;
    quickSort(0, arr.length - 1);
    return arr;
  }
}
