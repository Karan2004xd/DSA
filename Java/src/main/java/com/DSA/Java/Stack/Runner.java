package com.DSA.Java.Stack;

import com.DSA.Java.Stack.LinkedListStack.LinkedListStack;
import com.DSA.Java.Stack.LinkedListStack.SinglyLinkedList;

public class Runner {
   public static void main(String[] args) {
      ArrayStack arrayStack = new ArrayStack(5);
      arrayStack.push(5);
      arrayStack.push(10);
      arrayStack.push(15);
      arrayStack.push(20);
      arrayStack.push(25);
      
      traverse(arrayStack.arr);

      System.out.println(arrayStack.pop());
      System.out.println(arrayStack.pop());
      System.out.println(arrayStack.pop());

      traverse(arrayStack.arr);
      // LinkedListStack newStack = new LinkedListStack();
      // newStack.push(5);
      // newStack.push(10);
      // newStack.push(15);
      // newStack.push(20);
      // newStack.push(25);

      // newStack.sll.traverse();
      // newStack.delete();
      // newStack.peek();
      // System.out.println(newStack.pop());
      // newStack.sll.traverse();

      // System.out.println(newStack.pop());
      // newStack.sll.traverse();

      // System.out.println(newStack.pop());
      // newStack.sll.traverse();

      // System.out.println(newStack.pop());
      // newStack.sll.traverse();

      // System.out.println(newStack.pop());
   }
   public static void traverse(int arr[]) {
      for (int i : arr) {
         System.out.print(i + " ");
      }
      System.out.println();
   }
}
