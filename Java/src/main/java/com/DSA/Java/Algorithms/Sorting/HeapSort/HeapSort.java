package com.DSA.Java.Algorithms.Sorting.HeapSort;

import java.util.Arrays;

public class HeapSort {
  private int[] arr;
  private BinaryHeap bh;

  public HeapSort(int[] arr) {
    bh = new BinaryHeap(arr.length);
    this.arr = arr;
  }

  public void sort() {
    for (int i = 0; i < arr.length; i++) {
      bh.insertValue(arr[i]);
    }

    for (int i = 0; i < arr.length; i++) {
      arr[i] = bh.getTopElement();
    }
  }
  
  @Override
  public String toString() {
    return Arrays.toString(arr);
  }
}
