package com.DSA.Java.Tree;

import com.DSA.Java.Tree.BinaryTree.Array.BinaryTree;

public class TreeRunner {
   public static void main(String[] args) {
      BinaryTree binaryTree = new BinaryTree(9);
      binaryTree.insertElement("N1");
      binaryTree.insertElement("N2");
      binaryTree.insertElement("N3");
      binaryTree.insertElement("N4");
      binaryTree.insertElement("N5");
      binaryTree.insertElement("N6");
      binaryTree.insertElement("N7");
      binaryTree.insertElement("N8");
      binaryTree.insertElement("N9");
      
      // binaryTree.deleteElement("N3");
      binaryTree.levelOrderTraversal();
      
   }
} 
