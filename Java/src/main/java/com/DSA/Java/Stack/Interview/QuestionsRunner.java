package com.DSA.Java.Stack.Interview;

public class QuestionsRunner {
   public static void main(String[] args) {
      ThreeInOne tInOne = new ThreeInOne(3);
      tInOne.push(1, 5);
      tInOne.push(1, 10);
      tInOne.push(1, 15);
      // tInOne.push(1, 15);
      // tInOne.push(3, 15);
      // tInOne.push(3, 15);

      traverse(tInOne.arr);

      System.out.println(tInOne.pop(1));
      System.out.println(tInOne.pop(1));
      System.out.println(tInOne.peek(1));
      traverse(tInOne.arr);
   }
   public static void traverse(int arr[]) {
      for (int i : arr) {
         System.out.print(i + " ");
      }
      System.out.println();
   }
}
