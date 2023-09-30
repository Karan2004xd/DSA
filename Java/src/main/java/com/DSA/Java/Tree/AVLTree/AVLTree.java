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

   private AVLNode rotateRight(AVLNode disbalancedNode) {
      AVLNode tempNode = disbalancedNode.left;
      disbalancedNode.left = disbalancedNode.left.right;
      tempNode.right = disbalancedNode;
      disbalancedNode.height = 1 + Math.max(getHeight(disbalancedNode.left), getHeight(disbalancedNode.right));
      tempNode.height = 1 + Math.max(getHeight(tempNode.left), getHeight(tempNode.right));
      return tempNode;
   }

   private AVLNode rotateLeft(AVLNode disbalancedNode) {
      AVLNode tempNode = disbalancedNode.right;
      disbalancedNode.right = disbalancedNode.right.left;
      tempNode.left = disbalancedNode;
      disbalancedNode.height = 1 + Math.max(getHeight(disbalancedNode.left), getHeight(disbalancedNode.right));
      tempNode.height = 1 + Math.max(getHeight(tempNode.left), getHeight(tempNode.right));
      return tempNode;
   }

   private int getHeight(AVLNode node) {
      if (node == null) {
         return 0;
      }
      return node.height;
   }

   private int getBalance(AVLNode node) {
      if (node == null) {
         return 0;
      }
      return getHeight(node.left) - getHeight(node.right);
   }

   private AVLNode insertElement(AVLNode node, int value) {
      if (node == null) {
         AVLNode newNode = new AVLNode();
         newNode.value = value;
         newNode.height = 1;
         return newNode;
      } else if (value <= node.value) {
         node.left = insertElement(node.left, value);
      } else {
         node.right = insertElement(node.right, value);
      }

      node.height = 1 + Math.max(getHeight(node.left), getHeight(node.right));
      int balance = getBalance(node);

      if (balance > 1 && value <= node.left.value) {
         return rotateRight(node);
      }

      if (balance > 1 && value > node.left.value) {
         node.left = rotateLeft(node.left);
         return rotateRight(node);
      }

      if (balance < -1 && value <= node.right.value) {
         node.right = rotateRight(node.right);
         return rotateLeft(node);
      }

      if (balance < -1 && value > node.right.value) {
         return rotateLeft(node);
      }
      return node;
   }

   public void insertELement(int value) {
      root = insertElement(root, value);
   }

   private AVLNode minimumNode(AVLNode node) {
      if (node.left == null) {
         return node;
      }
      return minimumNode(node.left);
   }
}
