package com.DSA.Java.LinkedList.Interview.LinkedList;

public class Runner {
   public static void main(String[] args) {
      SinglyList sLL = new SinglyList();
      sLL.createList(5);
      sLL.insertNode(10);
      sLL.insertNode(15);
      sLL.insertNode(20);

      sLL.traverse();
   }
}
