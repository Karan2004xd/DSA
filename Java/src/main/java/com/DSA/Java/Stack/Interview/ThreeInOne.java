package com.DSA.Java.Stack.Interview;

public class ThreeInOne {
   public int arr[];
   public int numberOfStacks = 3;
   public int startOfStack[];
   public int endOfStack[];

   public ThreeInOne(int stackSize) {
      this.arr = new int[stackSize * numberOfStacks];
      this.endOfStack = new int[stackSize + 1];
      this.startOfStack = new int[stackSize + 1];
      for (int i = 0; i < stackSize; i++) {
         this.startOfStack[i + 1] = i * numberOfStacks;
         this.endOfStack[i + 1] = this.startOfStack[i + 1] + stackSize - 1;
         this.startOfStack[i + 1]--;
      }
   }

   public boolean isFull(int stackNum) {
      if (startOfStack[stackNum] == endOfStack[stackNum]) {
         return true;
      }
      return false;
   }

   public boolean isEmpty(int stackNum) {
      if (endOfStack[stackNum] - startOfStack[stackNum] >= 3) {
         return true;
      }
      return false;
   }

   public void push(int stackNum, int value) {
      if (!isFull(stackNum)) {
         arr[++startOfStack[stackNum]] = value;
      }  
   }

   public int pop(int stackNum) {
      int result = -1;
      if (!isEmpty(stackNum)) {
         result = arr[startOfStack[stackNum]];
         arr[startOfStack[stackNum]] = 0;
         startOfStack[stackNum]--;
      } 
      return result;
   }

   public int peek(int stackNum) {
      int result = -1;
      if (!isEmpty(stackNum)) {
         result = arr[startOfStack[stackNum]];
      }
      return result;
   }
}
