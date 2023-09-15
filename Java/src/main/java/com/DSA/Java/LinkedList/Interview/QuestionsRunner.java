package com.DSA.Java.LinkedList.Interview;

import com.DSA.Java.LinkedList.Interview.LinkedList.SinglyList;
import com.DSA.Java.LinkedList.Interview.Questions.RemoveDups;

public class QuestionsRunner {
   public static void main(String[] args) {
      SinglyList sll = new SinglyList();
      sll.createList(1);
      sll.insertNode(2);
      sll.insertNode(1);
      sll.insertNode(3);

      sll.traverse();

      RemoveDups rmDups = new RemoveDups();
      rmDups.deleteDups(sll);

      sll.traverse();
   }
}
