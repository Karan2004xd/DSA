package com.DSA.Java.Tree;

import com.DSA.Java.Tree.BinarySearchTree.BinarySearchTree;

public class TreeRunner {
   public static void main(String[] args) {
      BinarySearchTree bst = new BinarySearchTree();
      bst.insertElement(70);
      bst.insertElement(50);
      bst.insertElement(90);
      bst.insertElement(30);
      bst.insertElement(60);
      bst.insertElement(80);
      bst.insertElement(100);
      bst.insertElement(20);
      bst.insertElement(40);

      bst.levelOrderTraversal();
      System.out.println();

      bst.deleteElement(bst.root, 90);
      bst.levelOrderTraversal();
   }
} 
