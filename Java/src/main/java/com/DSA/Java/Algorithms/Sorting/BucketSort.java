package com.DSA.Java.Algorithms.Sorting;

import java.util.ArrayList;
import java.util.Collections;

public class BucketSort {
   public int[] sort(int[] arr) {
      int numberOfBuckets = (int) Math.ceil(Math.sqrt(arr.length));
      int maxValue = Integer.MIN_VALUE;

      for (int i : arr) {
         if (i > maxValue) {
            maxValue = i;
         }
      }

      ArrayList<Integer>[] buckets = new ArrayList[numberOfBuckets];
      for (int i = 0; i < numberOfBuckets; i++) {
         buckets[i] = new ArrayList<>();
      }

      for (int i = 0; i < arr.length; i++) {
         int bucketNumber = (int) Math.ceil(((float)arr[i] * numberOfBuckets) / (float)maxValue);
         buckets[bucketNumber - 1].add(arr[i]);
      }

      for (ArrayList<Integer> bucket : buckets) {
         Collections.sort(bucket);
      }

      int index = 0;
      for (ArrayList<Integer> bucket : buckets) {
         for (int value : bucket) {
            arr[index] = value;
            index++;
         }
      }
      return arr;
   }
}
