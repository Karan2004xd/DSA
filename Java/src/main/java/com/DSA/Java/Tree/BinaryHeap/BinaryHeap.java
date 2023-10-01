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
   
   private void heapifyBottomToTop(int index, String heapType) {
      if (index <= 1) {
         return;
      }
      if (heapType == "Max") {
         if (binaryHeapArray[index] > binaryHeapArray[index / 2]) {
            int temp = binaryHeapArray[index];
            binaryHeapArray[index] = binaryHeapArray[index / 2];
            binaryHeapArray[index / 2] = temp;
         }  
      } else if (heapType == "Min") {
         if (binaryHeapArray[index] < binaryHeapArray[index / 2]) {
            int temp = binaryHeapArray[index];
            binaryHeapArray[index] = binaryHeapArray[index / 2];
            binaryHeapArray[index / 2] = temp;
         }
      }
      heapifyBottomToTop(index / 2, heapType);
   }

   public void insertElement(int value, String heapType) {
      if (isFull()) {
         System.out.println("The Heap is already full");
         return;
      }
      binaryHeapArray[sizeOfArray + 1] = value;
      sizeOfArray++;
      heapifyBottomToTop(sizeOfArray, heapType);
   }
   
   private void heapifyTopToBottom(int index, String heapType) {
      int left = index * 2;
      int right = index * 2 + 1;
      int swapped = 0;

      if (index > sizeOfArray) {
         return;
      }
      if (heapType == "Min") {
         if (sizeOfArray == left && binaryHeapArray[index] < binaryHeapArray[left]) {
            int temp = binaryHeapArray[index];
            binaryHeapArray[index] = binaryHeapArray[left];
            binaryHeapArray[left] = temp;
            return ;
         } else {
            if (binaryHeapArray[left] < binaryHeapArray[right]) {
               swapped = left;
            } else {
               swapped = right;
            }

            if (binaryHeapArray[index] > binaryHeapArray[swapped]) {
               int temp = binaryHeapArray[index];
               binaryHeapArray[index] = binaryHeapArray[swapped];
               binaryHeapArray[swapped] = temp;
            }
         }
      } else if (heapType == "Max") {
         if (sizeOfArray == right && binaryHeapArray[index] > binaryHeapArray[right]) {
            int temp = binaryHeapArray[index];
            binaryHeapArray[index] = binaryHeapArray[right];
            binaryHeapArray[right] = temp;
            return ;
         } else {
            if (binaryHeapArray[left] > binaryHeapArray[right]) {
               swapped = left;
            } else {
               swapped = right;
            }

            if (binaryHeapArray[index] < binaryHeapArray[swapped]) {
               int temp = binaryHeapArray[index];
               binaryHeapArray[index] = binaryHeapArray[swapped];
               binaryHeapArray[swapped] = temp;
            }
         }
      }
      heapifyTopToBottom(swapped, heapType);
   }

   public int extractTopElement(String heapType) {
      if (isEmpty()) {
         return -1;
      }
      int extractedValue = binaryHeapArray[1];
      binaryHeapArray[1] = binaryHeapArray[sizeOfArray];
      sizeOfArray--;
      heapifyTopToBottom(1, heapType);

      return extractedValue;
   }
}
