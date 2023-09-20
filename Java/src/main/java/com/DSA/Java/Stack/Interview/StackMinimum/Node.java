package com.DSA.Java.Stack.Interview.StackMinimum;

public class Node {
   public Node next;
   public int value;

   public Node(int value, Node node) {
      this.next = node;
      this.value = value;
   }
}
