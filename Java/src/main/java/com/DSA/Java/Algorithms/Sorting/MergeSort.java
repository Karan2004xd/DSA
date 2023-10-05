package com.DSA.Java.Algorithms.Sorting;

public class MergeSort {
   int arr[];
   private void merge(int[] arr, int left, int middle, int right) {
      int[] tempLeftArray = new int[middle - left + 2];
      int[] tempRightArray = new int[right - middle + 1];

      for (int i = 0; i <= middle - left; i++) {
         tempLeftArray[i] = arr[left + i];
      }
      for (int i = 0; i < right - middle; i++) {
         tempRightArray[i] = arr[middle + i + 1];
      }
      
      tempLeftArray[middle - left + 1] = Integer.MAX_VALUE;
      tempRightArray[right - middle] = Integer.MAX_VALUE;

      int i = 0, j = 0;
      for (int k = left; k <= right; k++) {
         if (tempLeftArray[i] < tempRightArray[j]) {
            arr[k] = tempLeftArray[i];
            i++;
         } else {
            arr[k] = tempRightArray[j];
            j++;
         }
      }
   }

   private void mergeSort(int[] arr, int left, int right) {
      if (right > left) {
         int middle = (left + right) / 2;
         mergeSort(arr, left, middle);
         mergeSort(arr, middle + 1, right);
         merge(arr, left, middle, right);
      }
   }

   public int[] sort(int[] arr) {
      this.arr = arr;
      mergeSort(arr, 0, arr.length - 1);
      return arr;
   }
}
