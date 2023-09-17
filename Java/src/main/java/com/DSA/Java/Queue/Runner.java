package com.DSA.Java.Queue;

import com.DSA.Java.Queue.LinkedListQueue.LinkedListQueue;

public class Runner {
   public static void main(String[] args) {
      LinkedListQueue llq = new LinkedListQueue();
      llq.enQueue(5);
      llq.enQueue(10);
      llq.enQueue(15);
      llq.enQueue(20);
      llq.enQueue(25);

      llq.sll.traverse();

      System.out.println(llq.deQueue());
      System.out.println(llq.deQueue());
      System.out.println(llq.deQueue());
      
      llq.delete();
      llq.sll.traverse();
   }
}
