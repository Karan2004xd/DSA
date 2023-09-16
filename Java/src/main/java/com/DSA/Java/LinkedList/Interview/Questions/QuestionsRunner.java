package com.DSA.Java.LinkedList.Interview.Questions;

import com.DSA.Java.LinkedList.Interview.LinkedList.*;

public class QuestionsRunner {
   public static void main(String[] args) {
      SinglyList llA = new SinglyList();
      llA.insertNode(3);
      llA.insertNode(1);
      llA.insertNode(5);
      llA.insertNode(9);
      
      llA.traverse();

      SinglyList llB = new SinglyList();
      llB.insertNode(2);
      llB.insertNode(4);
      llB.insertNode(6);

      llB.traverse();

      Questions questions = new Questions();
      // rmDups.deleteDups(sll);

      // System.out.println(rmDups.returnNFromLast(sll, 2).value);
      // rmDups.partition(sll, 4).traverse();
      
      questions.addSameNode(llA, llB, 7);
      questions.addSameNode(llA, llB, 2);
      questions.addSameNode(llA, llB, 1);
      
      llA.traverse();
      llB.traverse();
      Node inter = questions.findIntersection(llA, llB);
      System.out.println(inter.value);
      // questions.sumOfList(sll, sll1).traverse();
   }
}
