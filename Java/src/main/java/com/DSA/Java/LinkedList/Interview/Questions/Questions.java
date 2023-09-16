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
   
   public void addSameNode(SinglyList llA, SinglyList llB, int value) {
      Node newNode = new Node();
      newNode.value = value;
      llA.tail.next = newNode;
      llA.tail = newNode;
      llA.size++;

      llB.tail.next = newNode;
      llB.tail = newNode;
      llB.size++;
   }

   public Node findIntersection(SinglyList llA, SinglyList llB) {
      Node tempNodeOne = llA.head;
      Node tempNodeTwo = llB.head;
      Node result = new Node();
      for (int a = 0; (a < llA.size || a < llB.size); a++) {
         if (tempNodeOne == tempNodeTwo) {
            result = tempNodeOne;
            break;
         }
         tempNodeOne = tempNodeOne.next;
         tempNodeTwo = tempNodeTwo.next;
      }
      return result;
   }
}

