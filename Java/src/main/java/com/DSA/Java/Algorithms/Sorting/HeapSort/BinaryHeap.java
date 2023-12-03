package com.DSA.Java.Algorithms.Sorting.HeapSort;

public class BinaryHeap {
  int binaryHeapTree[];
  int sizeOfHeap;

  public BinaryHeap(int size) {
    binaryHeapTree = new int[size + 1];
    sizeOfHeap = 0;
  }

  public boolean isEmpty() {
    return sizeOfHeap == 0;
  }

  public boolean isFull() {
    return sizeOfHeap == binaryHeapTree.length - 1;
  }

  public int getSizeOfHeap() {
    return sizeOfHeap;
  }

  private void heapifyBottomToTop(int index) {
    if (index <= 1) {
      return ;
    }

    if (binaryHeapTree[index] < binaryHeapTree[index / 2]) {
      int temp = binaryHeapTree[index];
      binaryHeapTree[index] = binaryHeapTree[index / 2];
      binaryHeapTree[index / 2] = temp;
    }
    heapifyBottomToTop(index / 2);
  }

  public void insertValue(int value) {
    if (isFull()) {
      System.out.println("The heap is full");
      return;
    }
    binaryHeapTree[sizeOfHeap + 1] = value;
    sizeOfHeap++;
    heapifyBottomToTop(sizeOfHeap);
  }

  private void heapifyTopToBottom(int index) {
    int left = index * 2;
    int right = index * 2 + 1;
    int toBeSwapped = 0;
    if (sizeOfHeap < left) {
      return ;
    }
    if (sizeOfHeap == left && binaryHeapTree[index] < binaryHeapTree[left]) {
      int temp = binaryHeapTree[index];
      binaryHeapTree[index] = binaryHeapTree[left];
      binaryHeapTree[left] = temp;
      return ;
    } else {
      if (binaryHeapTree[left] < binaryHeapTree[right]) {
        toBeSwapped = left;
      } else {
        toBeSwapped = right;
      }

      if (binaryHeapTree[index] > binaryHeapTree[toBeSwapped]) {
        int temp = binaryHeapTree[index];
        binaryHeapTree[index] = binaryHeapTree[toBeSwapped];
        binaryHeapTree[toBeSwapped] = temp;
      }
    }
    heapifyTopToBottom(toBeSwapped);
  }

  public int getTopElement() {
    if (isEmpty()) {
      return -1;
    }
    int topElement = binaryHeapTree[1];
    binaryHeapTree[1] = binaryHeapTree[sizeOfHeap];
    sizeOfHeap--;
    heapifyTopToBottom(1);
    return topElement;
  }
}
