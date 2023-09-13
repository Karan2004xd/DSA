package com.DSA.Java.LinkedList;

public class SinglyLinkedList {
   public Node head;
   public Node tail;
   public int size;

   public Node createSinglyLinkedList(int value) {
      head = new Node();
      Node node = new Node();
      node.next = null;
      node.value = value;
      head = node;
      tail = node;
      size = 1;

      return head;
   }

   public void insertValue(int value, int index) {
      Node newNode = new Node();
      newNode.value = value;
      if (head == null) {
         head = newNode;
         tail = newNode;
      } else {
         if (index == 0) {
            newNode.next = head;
            head = newNode;
         } else if (index >= size) {
            newNode.next = null;
            tail.next = newNode;
            tail = newNode;
         } else {
            Node tempNode = head;
            for (int i = 0; i < size - 1; i++) {
               tempNode = tempNode.next;
               if (i == index - 1) {
                  Node nextNode = tempNode.next;
                  tempNode.next = newNode;
                  newNode.next = nextNode;
               }
            }
         }
      }
      size++;
   }

   public void traverseList() {
      Node tempNode = head;
      for (int i = 0; i < size; i++) {
         System.out.print(tempNode.value);
         if (i <= size - 2) {
            System.out.print(" -> ");
         }
         tempNode = tempNode.next;
      }
      System.out.println();
   }
}
