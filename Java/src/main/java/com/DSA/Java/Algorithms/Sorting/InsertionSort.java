package com.DSA.Java.Algorithms.Sorting;

public class InsertionSort {
   public int[] sort(int[] arr) {
      for (int i = 1; i < arr.length; i++) {
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
      return arr;
   }
}
