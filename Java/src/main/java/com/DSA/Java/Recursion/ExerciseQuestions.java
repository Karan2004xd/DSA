package com.DSA.Java.Recursion;

import java.util.Arrays;

public class ExerciseQuestions {
   public static void main(String[] args) {
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
      if (arr.length == 0) {
         return false;
      } else if (isOdd.run(arr[arr.length - 1])) {
         return true;
      }
      return someRecursive(Arrays.copyOfRange(arr, 0, arr.length - 1), isOdd);
   }
   
   public static char firstUpperCase(String str) {
      if (str.isEmpty()) {
         return ' ';
      } else if (Character.isUpperCase(str.charAt(0))) {
         return str.charAt(0);
      } else {
         return firstUpperCase(str.substring(1, str.length()));
      }
   }

}
