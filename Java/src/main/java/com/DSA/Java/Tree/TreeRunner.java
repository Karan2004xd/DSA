package com.DSA.Java.Tree;

import com.DSA.Java.Tree.BinaryTree.LinkedList.LinkedBinaryTree;

public class TreeRunner {
   public static void main(String[] args) {
      LinkedBinaryTree lbt = new LinkedBinaryTree();

      lbt.insertElement("N1");
      lbt.insertElement("N2");
      lbt.insertElement("N3");
      lbt.insertElement("N4");
      lbt.insertElement("N5");
      lbt.insertElement("N6");
      lbt.insertElement("N7");
      lbt.insertElement("N8");
      lbt.insertElement("N9");

      lbt.levelOrderTraversal();
      System.out.println();

      lbt.deleteElement("N1");
      lbt.levelOrderTraversal();
   }
} 
