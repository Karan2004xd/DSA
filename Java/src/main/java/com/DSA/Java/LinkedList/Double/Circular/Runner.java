package com.DSA.Java.LinkedList.Double.Circular;

public class Runner {
   public static void main(String[] args) {
      CircularDoublyLinkedList cDL = new CircularDoublyLinkedList();
      cDL.createCircularDoublyList(10);
      cDL.insertElement(5, 0);
      cDL.insertElement(15, 2);
      cDL.insertElement(20, 3);
      cDL.insertElement(25, 4);
      
      cDL.traverse();
      // cDL.deleteList();
      // cDL.traverse();

      // cDL.deleteElement(1);
      // cDL.deleteElement(1);
      // cDL.traverse();
      // cDL.searchElement(20);
      // cDL.searchElement(21);
   }
}
