package com.DSA.Java.Algorithms;

import java.util.Arrays;

import com.DSA.Java.Algorithms.Sorting.BucketSort;

public class AlgorithmRunner {
   public static void main(String[] args) {
      BucketSort bSort = new BucketSort();
      int[] arr = {5, 9, 3, 1, 2, 8, 4, 7, 6};
      System.out.println(Arrays.toString(arr));
      System.out.println(Arrays.toString(bSort.sort(arr)));
   }
}
