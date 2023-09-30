package com.DSA.Java.Tree.BinaryHeap;

public class BinaryHeap {
   int binaryHeapArray[];
   int sizeOfArray;

   public BinaryHeap(int size) {
      this.binaryHeapArray = new int[size + 1];
      sizeOfArray = 0;
   }
   
   public boolean isEmpty() {
      return sizeOfArray == 0;
   }
   
   public boolean isFull() {
      return sizeOfArray == binaryHeapArray.length - 1;
   }

   public Integer peek() {
      if (isEmpty()) {
         System.out.println("The Heap is empty");
         return null;
      }
      return binaryHeapArray[1];
   }

   public int sizeOfHeap() {
      return sizeOfArray;
   }

   public void levelOrderTraversal() {
      for (int i = 1; i <= sizeOfArray; i++) {
         System.out.print(binaryHeapArray[i] + " ");
      }
      System.out.println();
   }

   public void preOrderTraversal(int index) {
      if (index > sizeOfArray) {
         return ;
      }
      System.out.print(binaryHeapArray[index] + " ");
      preOrderTraversal(index * 2);
      preOrderTraversal(index * 2 + 1);
   }

   public void inOrderTraversal(int index) {
      if (index > sizeOfArray) {
         return ;
      }
      inOrderTraversal(index * 2);
      System.out.print(binaryHeapArray[index] + " ");
      inOrderTraversal(index * 2 + 1);
   }

   public void postOrderTraversal(int index) {
      if (index > sizeOfArray) {
         return ;
      }
      postOrderTraversal(index * 2);
      postOrderTraversal(index * 2 + 1);
      System.out.print(binaryHeapArray[index] + " ");
   }

}
