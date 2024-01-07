package com.DSA.Java.Stack.Interview;

import com.DSA.Java.Stack.Interview.StackMinimum.StackMinimum;

public class QuestionsRunner {
   public static void main(String[] args) {
      StackMinimum stackMinimum = new StackMinimum();
      stackMinimum.push(10);
      stackMinimum.push(20);
      stackMinimum.push(30);
      stackMinimum.push(5);
      stackMinimum.push(40);

      System.out.println(stackMinimum.pop());
      
      System.out.println(stackMinimum.minValue());
   }
   public static void traverse(int arr[]) {
      for (int i : arr) {
         System.out.print(i + " ");
      }
      System.out.println();
   }
}
