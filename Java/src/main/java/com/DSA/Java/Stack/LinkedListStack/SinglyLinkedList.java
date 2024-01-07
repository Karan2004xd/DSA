package com.DSA.Java.Stack.LinkedListStack;

public class SinglyLinkedList {
   public Node head;
   public Node tail;
   public int size;

   public void createLinkedList(int value) {
      Node node = new Node();
      node.value = value;
      node.next = null;
      head = node;
      tail = node;
      size = 1;
   }

   public void add(int value, int index) {
      if (head == null) {
         createLinkedList(value);
         return ;
      }
      Node newNode = new Node();
      newNode.value = value;
      if (index == 0) {
         newNode.next = head;
         head = newNode;
      } else if (index >= size - 1) {
         tail.next = newNode;
         newNode.next = null;
         tail = newNode;
      } else {
         Node tempNode = head;
         for (int i = 0; i < index - 1; i++) {
            tempNode = tempNode.next;
         }
         newNode.next = tempNode.next;
         tempNode.next = tempNode.next.next;
      }
      size++;
   }

   public void traverse() {
      if (head == null) {
         System.out.println("The Linked list is empty");
      } else {
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
   }

   public void remove(int index) {
      if (head == null) {
         System.out.println("The Linked list is empty");
         return ;
      }
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

   public void deleteList() {
      head = tail = null;
   }
}
