package com.DSA.Java.LinkedList.Double.Circular;

public class CircularDoublyLinkedList {
   public Node head;
   public Node tail;
   public int size;

   public void createCircularDoublyList(int value) {
      Node newNode = new Node();
      head = new Node();

      newNode.value = value;
      newNode.next = newNode;
      newNode.prev = newNode;
      
      head = newNode;
      tail = newNode;
      size = 1;
   }

   public void insertElement(int value, int index) {
      if (head == null) {
         System.out.println("The Linked list does not exist");
      } else {
         Node newNode = new Node();
         newNode.value = value;
         if (size == 0) {
            createCircularDoublyList(value);
            return ;
         }

         if (index == 0) {
            newNode.next = head;
            newNode.prev = tail;
            head.prev = newNode;
            head = newNode;
            tail.next = head;

         } else if (index >= size - 1) {
            newNode.prev = tail;
            newNode.next = head;
            tail.next = newNode;
            tail = newNode;
            head.prev = tail;

         } else {
            Node prevNode = head;
            for (int i = 0; i < index - 1; i++) {
               prevNode = prevNode.next;
            }
            newNode.prev = prevNode;
            newNode.next = prevNode.next;

            prevNode.next = newNode;
            prevNode.next.prev = newNode;
         }
         size++;
      }
   }

   public void traverse() {
      if (head == null) {
         System.out.println("The Linked list does not exist");
         return ;
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

   public void reverseTraverse() {
      if (head == null) {
         System.out.println("The Linked list does not exist");
         return ;
      } else {
         Node tempNode = tail;
         for (int i = 0; i < size * 2; i++) {
            System.out.print(tempNode.value);
            if (i < size * 2 - 1) {
               System.out.print(" -> ");
            }
            tempNode = tempNode.prev;
         }
         System.out.println();
      }
   }

   public boolean searchElement(int value) {
      if (head == null) {
         System.out.println("The Linked list does not exist");
      } else {
         Node tempNode = head;
         for (int i = 0; i < size; i++) {
            if (tempNode.value == value) {
               System.out.println(value + " is located on index " + i);
               return true;
            }
            tempNode = tempNode.next;
         }
         System.out.println("The given value was not found in the list");
      }
      return false;
   }

   public void deleteElement(int index) {
      if (head == null) {
         System.out.println("The Linked list does not exist");
      } else {
         if (size == 1) {
            head.next = null;
            head.prev = null;
            head = tail = null;

         } else if (index == 0) {
            head = head.next;
            head.prev = tail;
            tail.next = head;
         } else if (index >= size - 1) {
            tail = tail.prev;
            tail.next = head;
            head.prev = tail;
         } else {
            Node prevNode = head;
            for (int i = 0; i < index - 1; i++) {
               prevNode = prevNode.next;
            }
            prevNode.next = prevNode.next.next;
            prevNode.next.prev = prevNode;
         }
         size--;
      }
   }

   public void deleteList() {
      if (head == null) {
         System.out.println("The Linked list does not exist");
      } else {
         Node tempNode = head;
         for (int i = 0; i < size; i++) {
            tempNode.prev = null;
            tempNode = tempNode.next;
         }
         head = tail = null;
      }
   }
}
