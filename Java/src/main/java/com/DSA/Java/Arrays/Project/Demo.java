package com.DSA.Java.Arrays.Project;

import java.util.Arrays;
import java.util.Scanner;

public class Demo {
   public static void main(String[] args) {
      int[][] matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
      // int daysAboveAvg = 0, sum = 0;

      // Scanner scanner = new Scanner(System.in);

      // System.out.print("How many days temperature ? ");
      // arr = new int[scanner.nextInt()];

      // for (int i = 0; i < arr.length; i++) {
      //     System.out.print("Days " + (i + 1) + "'s high temp: ");
      //     arr[i] = scanner.nextInt();
      //     sum += arr[i];
      // }

      // double average = sum / arr.length;
      // System.out.println("Average = " + average);

      // for (int i = 0; i < arr.length; i++) {
      //     if (arr[i] > average) {
      //         daysAboveAvg++;
      //     }
      // }

      // System.out.println(daysAboveAvg + " days above average temperature");
      // scanner.close();

      rotateMatrix(matrix);
   }

   static boolean rotateMatrix(int[][] arr) {
      if (arr.length == 0 || arr[0].length != arr.length) return false;
      int n = arr.length;
      int last;

      if (n % 2 != 0) {
         last = n / 2 + 1;
      } else {
         last = n / 2;
      }

      for (int i = 0; i < n; i++) {
         int temp;
         for (int j = 0; j < n; j++) {
            if (i != j && j > i) {
               temp = arr[i][j];
               arr[i][j] = arr[j][i];
               arr[j][i] = temp;
            }

            if (j >= last) {
               int first = n - j - 1;
               temp = arr[i][first];
               arr[i][first] = arr[i][last];
               arr[i][last] = temp;
               last++;
            }
         }
         printMatrix(arr);
         System.out.println();
      }
      return true;
   }

   static void printMatrix(int[][] arr) {
      for (int i = 0; i < arr.length; i++) {
         System.out.println(Arrays.toString(arr[i]));
      }
   }
}
