package com.DSA.Java.LinkedList.Interview.LinkedList;

public class SinglyList {
   public Node head;
   public Node tail;
   public int size;

   public void createList(int value) {
      Node newNode = new Node();
      newNode.value = value;
      newNode.next = null;
      head = newNode;
      tail = newNode;
      size = 1;
   }

   public void insertNode(int value) {
      if (head == null) {
         createList(value);
      } else {
         Node newNode = new Node();
         newNode.value = value;
         newNode.next = null;
         tail.next = newNode;
         tail = newNode;
         size++;
      }
   }

   public void traverse() {
      Node tempNode = head;
      for (int i = 0; i < size; i++) {
         System.out.print(tempNode.value);
         if (i < size - 1) {
            System.out.print(" -> ");
         }
         tempNode = tempNode.next;
      }
      System.out.println();
   }

   public void deleteNode(int index) {
      if (index == 0) {
         head = head.next;
      } else if (index >= size - 1) {
         Node tempNode = head;
         for (int i = 0; i < size - 1; i++) {
            tempNode = tempNode.next;
         }
         tempNode.next = null;
         tail = tempNode;
      } else {
         Node tempNode = head;
         for (int i = 0; i < index - 1; i++) {
            tempNode = tempNode.next;
         }
         tempNode.next = tempNode.next.next;
      }
      size--;
   }

   public int searchNode(int value) {
      Node tempNode = head;
      for (int i = 0; i < size; i++) {
         if (tempNode.value == value) {
            return i;
         }
         tempNode = tempNode.next;
      }
      return -1;
   }
}
