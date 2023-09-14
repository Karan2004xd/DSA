package com.DSA.Java.LinkedList.Double;

public class DoublyLinkedList {
   public Node head;
   public Node tail;
   public int size;

   public void createList(int value) {
      Node node = new Node();
      node.value = value;
      node.next = null;
      node.prev = null;
      head = node;
      tail = node;
      size = 1;
   }
}
