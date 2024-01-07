package com.DSA.Java.Algorithms;

import com.DSA.Java.Algorithms.Searching.BinarySearch;

public class AlgorithmRunner {
  public static void main(String[] args) {
    int[] arr = {1, 2, 3, 4, 5};
    BinarySearch bs = new BinarySearch(arr);
    int start = 0, end = arr.length - 1;
    bs.search(start, end, 5);
    bs.search(start, end, 2);
    bs.search(start, end, 6);
    bs.search(start, end, 1);
  }
}
