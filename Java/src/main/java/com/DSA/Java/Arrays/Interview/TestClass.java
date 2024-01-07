package com.DSA.Java.Arrays.Interview;

import java.util.Arrays;

public class TestClass {

   // Interview Question 1
   public void sumAndProduct(int[] arr) {
      int sum = 0, product = 1;
      for (int i : arr) {
         sum += i;
         product *= i;
      }
      System.out.println("Sum of elements of the array is : " + sum);
      System.out.println("Product of elements of the array is : " + product);
   }

   // Interview Question 2
   public void printPairs(int[] arr) {
      for (int i : arr) {
         for (int j : arr) {
            System.out.print(String.format("%d%d ", i, j));
         }
         System.out.println();
      }
   }

   public void printUnorderedPairs(int[] arr) {
      for (int i = 0; i < arr.length; i++) {
         for (int j = i + 1; j < arr.length; j++) {
            System.out.print(String.format("%d%d ", arr[i], arr[j]));
         }
         System.out.println();
      }
   }

   public void printReverseArray(int[] arr) {
      int n = arr.length;
      for (int i = 0; i < n / 2; i++) {
         int temp = arr[i];
         arr[i] = arr[n - i - 1];
         arr[n - i - 1] = temp;
      }
      System.out.println(Arrays.toString(arr));
   }
}
