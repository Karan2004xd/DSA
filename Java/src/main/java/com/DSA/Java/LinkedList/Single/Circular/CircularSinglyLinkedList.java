package com.DSA.Java.LinkedList.Single.Circular;

public class CircularSinglyLinkedList {
   public Node head;
   public Node tail;
   public int size;

   public Node createCircularLinkedList(int value) {
      head = new Node();
      Node node = new Node();

      node.value = value;
      node.next = node;
      tail = node;
      head = node;

      size = 1;
      return head;
   }

   public void insertElement(int value, int index) {
      Node newNode = new Node();
      if (head == null) {
         System.out.println("The Linked list doesn't exist");
      } else {
         if (index == 0) {
            newNode.value = value;
            newNode.next = head;
            head = newNode;

            tail.next = head;
         } else if (index >= size - 1) {
            newNode.value = value;
            newNode.next = head;

            tail.next = newNode;
            tail = newNode;
         } else {
            Node tempNode = head;
            for (int i = 0; i < index - 1; i++) {
               tempNode = tempNode.next;
            }

            newNode.value = value;
            newNode.next = tempNode.next;
            tempNode.next = newNode;
         }
         size++; 
      }
   }

   public void traverseList() {
      if (head == null) {
         System.out.println("The Linked List doesn't exist");
         return;
      }

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

   public boolean searchElement(int value) {
      if (head == null) {
         System.out.println("The Linked List doesn't exist");
      } else {
         Node tempNode = head;
         for (int i = 0; i < size; i++) {
            if (tempNode.value == value) {
               return true;
            }
            tempNode = tempNode.next;
         }
      }
      return false;
   }

   public void deleteElement(int index) {
      if (head == null) {
         System.out.println("The Linked List doesn't exist");
      } else {
         Node tempNode = head;
         if (size == 1) {
            head = tail = null;
            size = 0;
            return;
         }
         if (index == 0) {
            tempNode = tempNode.next;
            head = tempNode;
            tail.next = head;

         } else if (index >= size - 1) {
            for (int i = 0; i < size - 1; i++) {
               tempNode = tempNode.next;              
            }
            tempNode.next = head;
            tail = tempNode;
         } else {
            for (int i = 0; i < index - 1; i++) {
               tempNode = tempNode.next;
            }

            tempNode.next = tempNode.next.next;
         }
         size--;
      }
   }

   public void deleteList() {
      head = null;
      tail.next = null;
      tail = null;
   }
}
