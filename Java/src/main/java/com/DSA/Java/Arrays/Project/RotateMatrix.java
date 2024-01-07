package com.DSA.Java.Arrays.Project;
import java.util.Arrays;

public class RotateMatrix {
   public static void main(String[] args) {
      int[][] matrix = {
         {1,2,3,4,5},
         {6,7,8,9,10},
         {11,12,13,14,15},
         {16,17,18,19,20},
         {21,22,23,24,25}
      };

      printMatrix(matrix);
      System.out.println();

      rotateMatrix(matrix);
   }

   static boolean rotateMatrix(int[][] arr) {
      if (arr.length == 0 || arr[0].length != arr.length) return false;
      int n = arr.length;
      int last;


      for (int i = 0; i < n; i++) {
         last = (n % 2 != 0) ? n / 2 + 1 : n / 2;
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
      }
      printMatrix(arr);
      return true;
   }

   static void printMatrix(int[][] arr) {
      for (int i = 0; i < arr.length; i++) {
         System.out.println(Arrays.toString(arr[i]));
      }
   }
}
