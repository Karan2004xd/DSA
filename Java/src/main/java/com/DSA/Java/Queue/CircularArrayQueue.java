package com.DSA.Java.Queue;

public class CircularArrayQueue {
   public int[] arr;
   public int startOfQueue;
   public int endOfQueue;

   public CircularArrayQueue(int size) {
      this.arr = new int[size];
      startOfQueue = endOfQueue = -1;
   }

   public boolean isEmpty() {
      if (endOfQueue == -1) {
         return true;
      }
      return false;
   }

   public boolean isFull() {
      if (endOfQueue + 1 == startOfQueue) {
         return true;
      } else if (startOfQueue == 0 && endOfQueue == arr.length - 1) {
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
         if (endOfQueue + 1 == arr.length) {
            endOfQueue = 0;
         } else {
            endOfQueue++;
         }
         arr[endOfQueue] = value;
      }
   }

   public int deQueue() {
      if (isEmpty()) {
         System.out.println("The Queue is already empty");
         return -1;
      }
      int result = arr[startOfQueue];
      startOfQueue++;
      if (startOfQueue > endOfQueue) {
         startOfQueue = endOfQueue = -1;
      } else if (startOfQueue == arr.length - 1) {
         startOfQueue = 0;
      }
      return result;
   }

   public int peek() {
      if (isEmpty()) {
         System.out.println("The Queue is already empty");
         return -1;
      }
      return arr[startOfQueue];
   }

   public void delete() {
      arr = null;
      System.out.println("The Queue was deleted successfully");
   }
}
