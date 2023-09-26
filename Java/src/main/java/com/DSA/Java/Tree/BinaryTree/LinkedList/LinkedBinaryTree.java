package com.DSA.Java.Tree.BinaryTree.LinkedList;

public class LinkedBinaryTree {
   public BinaryNode root;

   public LinkedBinaryTree() {
      this.root = null;
   }

   public void preOrderTraversal(BinaryNode node) {
      if (node == null) {
         return ;
      }
      System.out.print(node.value + " -> ");
      preOrderTraversal(node.left);
      preOrderTraversal(node.right);
   }

   public void inOrderTraversal(BinaryNode node) {
      if (node == null) {
         return ;
      }
      inOrderTraversal(node.left);
      System.out.print(node.value + " -> ");
      inOrderTraversal(node.right);
   }

   public void postOrderTraversal(BinaryNode node) {
      if (node == null) {
         return ;
      }
      postOrderTraversal(node.left);
      postOrderTraversal(node.right);
      System.out.print(node.value + " ");
   }
}
