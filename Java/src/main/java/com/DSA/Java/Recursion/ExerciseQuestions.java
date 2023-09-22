package com.DSA.Java.Recursion;

import java.util.Arrays;

public class ExerciseQuestions {
   public static void main(String[] args) {
      System.out.println(isPalindrome("amanaplanacanalpanama"));
   }

   public static String reverse(String str) {
      if (str.isEmpty()) {
         return str;
      }
      return reverse(str.substring(1)) + str.charAt(0);
   }

   public static boolean isPalindrome(String s) {
      return s.equals(reverse(s));
   }

   public static boolean someRecursive(int[] arr, OddFunction isOdd) {
      if (arr.length == 1) {
         return isOdd.run(arr[0]);
      }
      return someRecursive(Arrays.copyOfRange(arr, 0, arr.length - 1), isOdd);
   }

}
