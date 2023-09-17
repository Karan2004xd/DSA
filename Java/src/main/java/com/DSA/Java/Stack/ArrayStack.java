package com.DSA.Java.Stack;

public class ArrayStack {
   int[] arr;
   int topElement;

   public ArrayStack(int size) {
      this.arr = new int[size];
      topElement = -1;
      System.out.println("The Stack has been created successfully");
   }

   public boolean isFull() {
      if (arr.length - 1 == topElement) {
         return true;
      }
      return false;
   }
   public boolean isEmpty() {
      if (topElement == -1) {
         return true;
      }
      return false;
   }

   public void push(int value) {
      if (!isFull()) {
         arr[++topElement] = value;
      } else {
         System.out.print(value);
         System.out.println(" Cannot push a new element the stack is already full");
      }
   }

   public int pop() {
      if (isEmpty()) {
         System.out.println("The Stack is empty");
         return -1;
      } else {
         int popedValue = arr[topElement];
         topElement--;
         return popedValue;
      }
   }

   public int peek() {
      if (isEmpty()) {
         System.out.println("The Stack is empty");
         return -1;
      }
      return arr[topElement];
   }

   public void delete() {
      arr = null;
      System.out.println("The Stack was deleted successfully");
   }
}
