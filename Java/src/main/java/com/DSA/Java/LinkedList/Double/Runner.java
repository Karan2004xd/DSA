package com.DSA.Java.LinkedList.Double;

public class Runner {
   public static void main(String[] args) {
      DoublyLinkedList dLL = new DoublyLinkedList();
      dLL.createList(10);
      dLL.insertNode(5, 0);
      dLL.insertNode(15, 2);
      dLL.insertNode(20, 3);
      dLL.insertNode(25, 4);
      
      dLL.traverse();
      dLL.deleteList();

      // dLL.searchNode(15);
      // dLL.deleteNode(0);
      // dLL.traverse();

      // dLL.deleteNode(5);
      // dLL.traverse();

      // dLL.deleteNode(1);
      dLL.traverse();
   }
}
