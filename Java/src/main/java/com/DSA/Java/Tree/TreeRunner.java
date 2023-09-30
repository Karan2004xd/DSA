package com.DSA.Java.Tree;

import com.DSA.Java.Tree.AVLTree.AVLTree;

public class TreeRunner {
   public static void main(String[] args) {
      AVLTree aTree = new AVLTree();
      aTree.insertELement(5);
      aTree.insertELement(10);
      aTree.insertELement(15);
      aTree.insertELement(20);
      aTree.levelOrderTraversal();
      aTree.deleteElement(5);
      aTree.levelOrderTraversal();
   }
} 
