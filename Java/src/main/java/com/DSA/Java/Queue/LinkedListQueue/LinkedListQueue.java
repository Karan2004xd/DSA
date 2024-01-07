package com.DSA.Java.Queue.LinkedListQueue;

public class LinkedListQueue {
   public SinglyLinkedList sll;

   public LinkedListQueue() {
      sll = new SinglyLinkedList();
   }

   public boolean isEmpty() {
      if (sll.head == null) {
         return true;
      }
      return false;
   }

   public void enQueue(int value) {
      sll.add(value, sll.size + 1);
   }

   public int deQueue() {
      if (isEmpty()) {
         System.out.println("The Queue is already empty"); 
         return -1;
      }
      int result = sll.head.value;
      sll.remove(0);
      return result;
   }

   public int peek() {
      if (isEmpty()) {
         System.out.println("The Queue is already empty"); 
         return -1;
      }
      return sll.head.value;
   }

   public void delete() {
      sll.head = sll.tail = null;
      sll.size = 0;
   }
}
