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

   public void insertNode(int value, int index) {
      if (head == null) {
         System.out.println("The Linked list does not exist");
      } else {
         Node tempNode = new Node();
         tempNode.value = value;

         if (size == 0) {
            createList(value);
            return;
         }

         if (index == 0) {
            tempNode.prev = null;
            tempNode.next = head;

            head.prev = tempNode;
            head = tempNode;
         } else if (index >= size - 1) {
            tempNode.next = null;
            tempNode.prev = tail;

            tail.next = tempNode;
            tail = tempNode;
         } else {
            Node nextNode = head;
            for (int i = 0; i < index - 1; i++) {
               nextNode = nextNode.next;
            }
            tempNode.prev = nextNode;
            tempNode.next = nextNode.next;

            nextNode.next.prev = tempNode;
            nextNode.next = tempNode;
         }
         size++;
      }
   }

   public void traverseBack() {
      Node tempNode = tail;
      for (int i = size - 1; i >= 0; i--) {
         System.out.print(tempNode.value);
         if (i >= 1) {
            System.out.print(" -> ");
         }
         tempNode = tempNode.prev;
      }
      System.out.println();
   }

   public void traverse() {
      if (head == null) {
         System.out.println("The Linked list does not exist");
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
   
   public boolean searchNode(int value) {
      Node tempNode = head;
      for (int i = 0; i < size; i++) {
         if (tempNode.value == value) {
            System.out.println(value + " is located at the index " + i);
            return true;
         }
         tempNode = tempNode.next;
      }
      System.out.println("The element was not found");
      return false;
   }

   public void deleteNode(int index) {
      if (head == null) {
         System.out.println("The Linked list does not exist");
      } else {
         if (index == 0) {
            head = head.next;
            head.prev = null;
         } else if (index >= size - 1) {
            tail = tail.prev;
            tail.next = null;
         } else {
            Node tempNode = head;
            for (int i = 0; i < index - 1; i++) {
               tempNode = tempNode.next;
            }
            tempNode.next = tempNode.next.next;
            tempNode.next.prev = tempNode;
         }
         size--;
      }
   }

   public void deleteList() {
      Node tempNode = head.next;
      for (int i = 0; i < size - 1; i++) {
         tempNode.prev = null;
         tempNode = tempNode.next;
      }
      head = null;
      tail = null;
   }
}
