package com.DSA.Java.Stack.Interview.StackMinimum;

public class StackMinimum {
   public Node top;
   public Node min;

   public StackMinimum() {
      this.top = null;
      this.min = null;
   }

   public int minValue() {
      return this.min.value;
   }
   
   public boolean isEmpty() {
      if (top == null) {
         return true;
      }
      return false;
   }

   public void push(int value) {
      Node newNode = new Node(value, top);
      top = newNode;
      if (min == null) {
         min = top;
      } else if (value < min.value) {
         min.value = value;
      }
   }

   public int pop() {
      int result_value = -1;
      if (!isEmpty()) {
         result_value = top.value;
         top = top.next;
         if (top.value > min.value) {
            min.value = top.value;
         }
      }
      return result_value;
   }
}
