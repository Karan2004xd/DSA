package com.DSA.Java.Tree.BinaryTree.Array;

public class BinaryTree {
   String[] arr;
   int lastUsedIndex;

   public BinaryTree(int size) {
      this.arr = new String[size + 1];
      this.lastUsedIndex = 0;
   }
   
   public boolean isFull() {
      if (arr.length - 1 == lastUsedIndex) {
         return true;
      }
      return false;
   }

   public void insertElement(String data) { 
      if (!isFull()) {
         arr[lastUsedIndex + 1] = data;
         lastUsedIndex++;
      } else {
         System.out.println("The Array is already full");
      }
   }

   public void preOrderTraversal(int index) {
      if (index > lastUsedIndex) {
         return ;
      }
      System.out.print(arr[index] + " ");
      preOrderTraversal(index * 2);
      preOrderTraversal(index * 2 + 1);
   }

   public void inOrderTraversal(int index) {
      if (index > lastUsedIndex) {
         return;
      }
      inOrderTraversal(index * 2);
      System.out.print(arr[index] + " ");
      inOrderTraversal(index * 2 + 1);
   }

   public void postOrderTraversal(int index) {
      if (index > lastUsedIndex) {
         return;
      }
      postOrderTraversal(index * 2);
      postOrderTraversal(index * 2 + 1);
      System.out.print(arr[index] + " ");
   }

   public void levelOrderTraversal() {
      for (int i = 1; i <= lastUsedIndex; i++) {
         System.out.print(arr[i] + " ");
      }
      System.out.println();
   }

   public int searchElement(String data) {
      for (int i = 1; i < arr.length; i++) {
         if (arr[i].equals(data)) {
            return i;
         }
      }
      System.out.println("The value provided does not exist in the array");
      return -1;
   }

   public void deleteElement(String data) {
      int indexToBeDeleted = searchElement(data);
      if (indexToBeDeleted != -1) {
         arr[indexToBeDeleted] = arr[lastUsedIndex];
         lastUsedIndex--;
      } 
   }

   public void deleteTree() {
      try {
         arr = null;
      } catch (Exception e) {
         System.out.println("There was an error while deleting the tree");
      }
   }
}
