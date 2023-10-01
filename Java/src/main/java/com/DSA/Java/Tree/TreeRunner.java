package com.DSA.Java.Tree;

import com.DSA.Java.Tree.BinaryHeap.BinaryHeap;

public class TreeRunner {
   public static void main(String[] args) {
      BinaryHeap bHeap = new BinaryHeap(8);
      bHeap.insertElement(5, "Max");
      bHeap.insertElement(10, "Max");
      bHeap.insertElement(20, "Max");
      bHeap.insertElement(30, "Max");
      bHeap.insertElement(40, "Max");
      bHeap.insertElement(50, "Max");
      bHeap.insertElement(60, "Max");
      bHeap.insertElement(1, "Max");
      bHeap.levelOrderTraversal();

      BinaryHeap bHeap1 = new BinaryHeap(8);
      bHeap1.insertElement(10, "Min");
      bHeap1.insertElement(5, "Min");
      bHeap1.insertElement(15, "Min");
      bHeap1.insertElement(1, "Min");
      bHeap1.levelOrderTraversal();
   }
} 
