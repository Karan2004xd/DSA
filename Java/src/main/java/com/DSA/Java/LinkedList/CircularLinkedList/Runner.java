package com.DSA.Java.LinkedList.CircularLinkedList;

public class Runner {
   public static void main(String[] args) {
      CircularSinglyLinkedList cList = new CircularSinglyLinkedList();
      cList.createCircularLinkedList(5);

      cList.insertElement(4, 0);
      cList.insertElement(6, 1);
      cList.insertElement(7, 8);

      cList.traverseList();

      // cList.deleteList();
      // cList.traverseList();
      
      // cList.deleteElement(0);
      // cList.deleteElement(2);
      // cList.traverseList();

      // System.out.println(cList.searchElement(20));
      // System.out.println(cList.searchElement(25));
      // System.out.println(cList.searchElement(40));
   }
}
