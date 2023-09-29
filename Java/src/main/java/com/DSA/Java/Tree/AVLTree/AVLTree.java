package com.DSA.Java.Tree.AVLTree;

import java.util.LinkedList;
import java.util.Queue;

public class AVLTree {
   public AVLNode root;

   public AVLTree() {
      this.root = null;
   }

   public void preOrderTraversal(AVLNode node) {
      if (node == null) {
         return ;
      } 
      System.out.print(node.value + " ");
      preOrderTraversal(node.left);
      preOrderTraversal(node.right);
   }

   public void inOrderTraversal(AVLNode node) {
      if (node == null) {
         return ;
      }
      inOrderTraversal(node.left);
      System.out.print(node.value + " ");
      inOrderTraversal(node.right);
   }

   public void postOrderTraversal(AVLNode node) {
      if (node == null) {
         return ;
      }
      postOrderTraversal(node.left);
      postOrderTraversal(node.right);
      System.out.print(node.value + " ");
   }

   public void levelOrderTraversal() {
      if (root == null) {
         System.out.println("Tree does not exist");
         return ;
      }
      Queue<AVLNode> queue = new LinkedList<>();
      queue.add(root);
      while (!queue.isEmpty()) {
         AVLNode tempNode = queue.remove();
         System.out.print(tempNode.value + " ");
         if (tempNode.left != null) {
            queue.add(tempNode.left);
         }
         if (tempNode.right != null) {
            queue.add(tempNode.right);
         }
      }
      System.out.println();
   }

   private AVLNode searchNode(AVLNode node, int value) {
      if (node == null) {
         return null;
      } else if (node.value == value) {
         return node;
      } else if (value <= node.value) {
         return searchNode(node.left, value);
      } else {
         return searchNode(node.right, value);
      }
   } 

   public boolean searchNode(int value) {
      return searchNode(root, value) != null;
   }

   public AVLNode rotateRight(AVLNode disbalancecNode) {
      AVLNode newNode = disbalancecNode.left;
      disbalancecNode.left = disbalancecNode.left.right;
      newNode.right = disbalancecNode;
      return newNode;
   }

   public AVLNode rotateLeft(AVLNode disbalancecNode) {
      AVLNode newNode = disbalancecNode.right;
      disbalancecNode.right = disbalancecNode.right.left;
      newNode.left = disbalancecNode;
      return newNode;
   }
}
