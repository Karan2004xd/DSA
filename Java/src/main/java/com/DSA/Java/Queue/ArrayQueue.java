package com.DSA.Java.Queue;

public class ArrayQueue {
   public int arr[];
   public int startOfQueue;
   public int endOfQueue;

   public ArrayQueue(int size) {
      this.arr = new int[size];
      startOfQueue = -1;
      endOfQueue = -1;
   }

   public boolean isEmpty() {
      if (startOfQueue < 0 || startOfQueue == arr.length) {
         return true;
      }
      return false;
   }

   public boolean isFull() {
      if (endOfQueue == arr.length - 1) {
         return true;
      }
      return false;
   }

   public void enQueue(int value) {
      if (isEmpty()) {
         arr[0] = value;
         startOfQueue = endOfQueue = 0;
      } else {
         if (isFull()) {
            System.out.println("The Queue is full");
            return ;
         }
         arr[++endOfQueue] = value;
      }
   }
   
   public int deQueue() {
      if (isEmpty()) {
         System.out.println("The Queue is empty"); 
         return -1;
      } 
      int result = arr[startOfQueue];
      startOfQueue++;
      if (startOfQueue > endOfQueue) {
         startOfQueue = endOfQueue = -1;
      }
      return result;
   }

   public int peek() {
      if (isEmpty()) {
         System.out.println("The Queue is empty"); 
         return -1;
      }
      return arr[startOfQueue];
   }

   public void delete() {
      arr = null;
      System.out.println("The Queue has been deleted successfully");
   }
}
