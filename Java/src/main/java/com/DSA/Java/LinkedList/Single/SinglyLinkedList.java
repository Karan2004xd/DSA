package com.DSA.Java.LinkedList.Single;

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
      if (head == null) {
         System.out.println("The LinkedList does not exist");
      } else {
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

   public boolean searchElement(int value) {
      Node tempNode = head;
      for (int i = 0; i < size; i++) {
         if (tempNode.value == value) {
            return true;
         }
         tempNode = tempNode.next;
      }
      return false;
   }

   public void deleteElement(int index) {
      Node tempNode = head;
      if (head == null) {
         System.out.println("The linked list doesn't exist");
      } else {
         if (index == 0) {
            head = head.next;
         } else if (index >= size - 1) {
            for (int i = 0; i < size - 1; i++) {
               tempNode = tempNode.next;
               if (i == index - 1) {
                  tempNode.next = null;
                  tail = tempNode;
                  break;
               }
            }
         } else {
            for (int i = 0; i < index - 1; i++) {
               tempNode = tempNode.next;
            }
            tempNode.next = tempNode.next.next;
         }
         size--;
      }
   }

   public void deleteEntireList() {
      head = tail = null;
      System.out.println("Linked list deleted successfully!");
   }

}
