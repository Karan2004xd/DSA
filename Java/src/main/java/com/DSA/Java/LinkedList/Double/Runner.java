package com.DSA.Java.LinkedList.Double;

public class Runner {
   public static void main(String[] args) {
      DoublyLinkedList dLL = new DoublyLinkedList();
      dLL.createList(5);
      System.out.println(dLL.head.value);
   }
}
