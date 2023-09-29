package com.DSA.Java.Tree.BinarySearchTree;

public class BinarySearchTree {
   public BinaryNode root;

   public BinarySearchTree() {
      root = null;
   }

   private BinaryNode insertElement(BinaryNode currentValue, int value) {
      if (currentValue == null) {
         BinaryNode newNode = new BinaryNode();
         newNode.value = value;
         return newNode;
      } else if (currentValue.value <= value) {
         return insertElement(currentValue.left, value);
      } else {
         return insertElement(currentValue.right, value);
      }
   }

   public void insertElement(int value) {
      insertElement(root, value);
   }

   public void preOrderTraversal(BinaryNode node) {
      if (node == null) {
         return;
      }
      System.out.print(node.value + " ");
      preOrderTraversal(node.left);
      preOrderTraversal(node.right);
   }
}
