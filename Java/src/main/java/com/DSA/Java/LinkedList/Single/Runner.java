package com.DSA.Java.LinkedList.Single;

public class Runner {
   public static void main(String[] args) {
      SinglyLinkedList sLList = new SinglyLinkedList();
      sLList.createSinglyLinkedList(10);
      sLList.insertValue(5, 0);
      sLList.insertValue(15, 2);
      sLList.insertValue(20, 3);
      sLList.insertValue(25, 4);
      
      sLList.traverseList();

      sLList.deleteEntireList();
      sLList.traverseList();
   }
}
