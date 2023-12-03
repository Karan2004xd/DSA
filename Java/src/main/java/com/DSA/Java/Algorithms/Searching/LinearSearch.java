package com.DSA.Java.Algorithms.Searching;

public class LinearSearch {
  public void search(int arr[], int value) {
    for (int i = 0; i < arr.length; i++) {
      if (arr[i] == value) {
        System.out.println("The value " + value + " is found on the index " + i + " in the array.");
        return;
      }
    }
    System.out.println("The value " + value + " is not found in the array");
  }
}
