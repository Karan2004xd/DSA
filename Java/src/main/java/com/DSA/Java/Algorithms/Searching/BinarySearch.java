package com.DSA.Java.Algorithms.Searching;

public class BinarySearch {
  private int[] arr;

  public BinarySearch(int[] arr) {
    this.arr = arr;
  }

  public void search(int start, int end, int value) {
    int mid = (start + end) / 2;
    if (start > end) {
      System.out.println("The value " + value + " was not found in the array");
      return ;
    }

    if (arr[mid] == value) {
      System.out.println("The value " + value + " is found on the index " + mid + " in the array.");
      return ;
    } else if (value < arr[mid]) {
      search(start, mid - 1, value);
    } else if (value > arr[mid]) {
      search(mid + 1, end, value);
    }
  }
}
