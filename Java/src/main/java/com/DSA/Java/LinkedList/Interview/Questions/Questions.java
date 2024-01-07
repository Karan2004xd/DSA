package com.DSA.Java.LinkedList.Interview.Questions;

import java.util.HashSet;

import com.DSA.Java.LinkedList.Interview.LinkedList.*;

public class Questions {
   // Inefficient solution
   // public void deleteDups(SinglyList sll) {
   //    HashSet<Integer> hashSet = new HashSet<>();
   //    Node tempNode = sll.head;
   //    for (int i = 0; i < sll.size; i++) {
   //       if (hashSet.contains(tempNode.value)) {
   //          sll.deleteNode(i);
   //          i--;
   //       } else {
   //          hashSet.add(tempNode.value);
   //       }
   //       tempNode = tempNode.next;
   //    }
   // }

   public void deleteDups(SinglyList sll) {
      HashSet<Integer> hashSet = new HashSet<>();
      Node current = sll.head;
      Node prev = null;
      while (current != null) {
         if (hashSet.contains(current.value)) {
            prev.next = current.next;
            sll.size--;
         } else {
            hashSet.add(current.value);
            prev = current;
         }
         current = current.next;
      }
   }

   public Node returnNFromLast(SinglyList sll, int index) {
      Node tempNode = sll.head;
      for (int i = 0; i < sll.size - index; i++) {
         tempNode = tempNode.next;
      }
      return tempNode;
   }

   public SinglyList partition(SinglyList ll, int x) {
      Node currentNode = ll.head;
      ll.tail = ll.head;
      while (currentNode != null) {
         Node newNode = currentNode.next;
         if (currentNode.value < x) {
            currentNode.next = ll.head;
            ll.head = currentNode;
         } else {
            ll.tail.next = currentNode;
            ll.tail = currentNode;
         }
         currentNode = newNode;
      }
      ll.tail.next = null;
      return ll;
   }

   public SinglyList sumOfList(SinglyList sll1, SinglyList sll2) {
      Node tempNodeOne = sll1.head;
      Node tempNodeTwo = sll2.head;

      int carry = 0;
      int sum = 0;

      SinglyList resultList = new SinglyList();
      for (int i = 0; i < sll1.size; i++) {
         sum = tempNodeOne.value + tempNodeTwo.value + carry;
         if (sum > 9) {
            carry = sum / 10;
         }
         resultList.insertNode(sum % 10);
         tempNodeOne = tempNodeOne.next;
         tempNodeTwo = tempNodeTwo.next;
      }
      return resultList;
   }
   public void addSameNode(SinglyList sll1, SinglyList sll2, int value) {
      Node newNode = new Node();
      newNode.value = value;
      sll1.tail.next = newNode;
      sll1.tail = newNode;
      sll2.tail.next = newNode;
      sll2.tail = newNode;
   }

   public Node findIntersection(SinglyList sll1, SinglyList sll2) {
      int smallerSize = sll1.size > sll2.size ? sll2.size : sll1.size;   
      int biggerSize;

      Node smallerNode = new Node();
      Node biggerNode = new Node();
      Node resultNode = new Node();

      if (smallerSize == sll1.size) {
         smallerNode = sll1.head;
         biggerNode = sll2.head;
         biggerSize = sll2.size;
      } else {
         smallerNode = sll2.head; 
         biggerNode = sll1.head;
         biggerSize = sll1.size;
      }
      
      int i = 0;
      while (smallerNode != null || biggerNode != null) {
         if (smallerNode == biggerNode) {
            resultNode = smallerNode;
            break;
         }
         if (i >= biggerSize - smallerSize) {
            smallerNode = smallerNode.next;
         } 
         biggerNode = biggerNode.next;
         i++;
      }
      return resultNode;
   }
   
   public void rotate(SinglyList sll, int number) {
      if (number < 0 || number >= sll.size) {
         return ;
      }

      for (int i = 0; i < number; i++) {
         sll.tail.next = sll.head;
         sll.tail = sll.head;

         sll.head = sll.head.next;
      }
   }
}

