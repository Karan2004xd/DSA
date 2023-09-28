package com.DSA.Java.Tree.BinaryTree.LinkedList;

import java.util.LinkedList;
import java.util.Queue;

public class BinaryTree {
   public BinaryNode root;

   public BinaryTree() {
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

   public void levelOrderTraversal() {
      if (root == null) {
         System.out.println("The Tree is already empty");
         return;
      }
      Queue<BinaryNode> queue = new LinkedList<BinaryNode>();
      queue.add(root);

      while (!queue.isEmpty()) {
         BinaryNode node = queue.remove();
         System.out.print(node.value + " ");

         if (node.left != null) {
            queue.add(node.left);
         }
         if (node.right != null) {
            queue.add(node.right);
         }
      }
   }

   public boolean searchElement(String data) {
      Queue<BinaryNode> queue = new LinkedList<>();
      queue.add(root);
      while (!queue.isEmpty()) {
         BinaryNode checkValue = queue.remove();
         if (checkValue.value.equals(data)) return true;

         if (checkValue.left != null) {
            queue.add(checkValue.left);
         } 
         if (checkValue.right != null) {
            queue.add(checkValue.right);
         }
      }
      return false;
   }

   public void insertElement(String data) {
      Queue<BinaryNode> queue = new LinkedList<>();
      BinaryNode newNode = new BinaryNode();
      newNode.value = data;         
      if (root == null) {
         root = newNode;
         return;
      }

      queue.add(root);
      while (!queue.isEmpty()) {
         BinaryNode node = queue.remove();
         if (node.left == null) {
            node.left = newNode;
            break;
         } else if (node.right == null) {
            node.right = newNode;
            break;
         } else {
            queue.add(node.left);
            queue.add(node.right);
         }
      }
   }

   public BinaryNode getDeepestNode() {
      Queue<BinaryNode> queue = new LinkedList<>();
      queue.add(root);
      BinaryNode node = null;

      while (!queue.isEmpty()) {
         node = queue.remove();
         if (node.left != null) {
            queue.add(node.left);
         }
         if (node.right != null) {
            queue.add(node.right);
         }
         
      }
      return node;
   }

   public void deleteDeepestNode() {
      Queue<BinaryNode> queue = new LinkedList<>();
      queue.add(root);
      BinaryNode node = null, prevNode;

      while (!queue.isEmpty()) {
         prevNode = node;
         node = queue.remove();
         if (node.left == null) {
            prevNode.right = null;
            return;
         } else if (node.right == null) {
            prevNode.left = null;
            return;
         }

         if (node.left != null) {
            queue.add(node.left);
         }
         if (node.right != null) {
            queue.add(node.right);
         }
      }
   }
   
   public void deleteElement(String data) {
      Queue<BinaryNode> queue = new LinkedList<>();
      queue.add(root);
      while (!queue.isEmpty()) {
         BinaryNode node = queue.remove();
         if (node.value.equals(data)) {
            node.value = getDeepestNode().value;
            deleteDeepestNode();
            return;
         }

         if (node.left != null) {
            queue.add(node.left);
         }
         if (node.right != null) {
            queue.add(node.right);
         }
      }
   }

   public void deleteTree() {
      root = null;
   }
}
