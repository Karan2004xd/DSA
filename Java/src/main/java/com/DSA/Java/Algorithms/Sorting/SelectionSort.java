package com.DSA.Java.Algorithms.Sorting;

public class SelectionSort {
   public int[] sort(int[] arr) {
      for (int i = 0; i < arr.length; i++) {
         int index = i;
         for (int j = i + 1; j < arr.length; j++) {
            if (arr[j] < arr[index]) {
               index = j;
            }
         }
         
         if (index != i) { 
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
         }
         
      }
      return arr;
   }
}
