package com.DSA.Java.Stack.LinkedListStack;

public class LinkedListStack {
   public SinglyLinkedList sll;

   public LinkedListStack() {
      this.sll = new SinglyLinkedList();
   }
   
   public boolean isEmpty() {
      if (sll.head == null) {
         return true;
      }
      return false;
   }

   public void push(int value) {
      sll.add(value, 0);
   }

   public int pop() {
      if (isEmpty()) {
         System.out.println("The Stack is empty");
         return -1;
      }
      int result = sll.head.value;
      sll.remove(0);
      return result;
   }

   public int peek() {
      if (isEmpty()) {
         System.out.println("The Stack is empty");
         return -1;
      }
      return sll.head.value;
   }

   public void delete() {
      sll.deleteList();
   }
}

