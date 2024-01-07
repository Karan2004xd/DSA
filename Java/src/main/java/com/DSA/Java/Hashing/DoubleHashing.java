package com.DSA.Java.Hashing;

import java.util.ArrayList;

public class DoubleHashing {
   String[] hashTable;
   int usedCells;

   public DoubleHashing(int size) {
      this.hashTable = new String[size];
      this.usedCells = 0;
   }

   public int getHashValue(String word, int sizeOfArray) {
      int result = 0;
      for (int i = 0; i < word.length(); i++) {
         result += (int) word.charAt(i);
      }
      return result % sizeOfArray;
   }

   private int sumofAllDigits(int value) {
      int sum = 0;
      while (value > 0) {
         sum = value % 10;
         value /= 10;
      }
      return sum;
   }

   public int getHashValueTwo(String word, int sizeOfArray) {
      int result = 0;
      for (int i = 0; i < word.length(); i++) {
         result += (int) word.charAt(i);
      }
      while (result > hashTable.length) {
         result = sumofAllDigits(result);
      }
      return result % sizeOfArray;
   }

   public double getLoadFactor() {
      return usedCells * 1.0 / hashTable.length;
   }

   public void reHashing(String word) {
      usedCells = 0;
      ArrayList<String> tempArray = new ArrayList<>();
      for (String i : hashTable) {
         if (i != null) {
            tempArray.add(i);
         }
      }

      tempArray.add(word);
      hashTable = new String[hashTable.length * 2];
      for (String i : tempArray) {
         insertValue(i);
      }
   }

   public void insertValue(String word) {
      if (getLoadFactor() >= 0.75) {
         reHashing(word);
      } else {
         int index = getHashValue(word, hashTable.length);
         int indexTwo = getHashValueTwo(word, hashTable.length);
         for (int i = 0; i < hashTable.length; i++) {
            int newIndex = (index + i * indexTwo) % hashTable.length;
            if (hashTable[newIndex] == null) {
               hashTable[newIndex] = word;
               usedCells++;
               return;
            }
         }
      }
   }

   public boolean searchValue(String word) {
      int index = getHashValue(word, hashTable.length);
      for (int i = 0; i < index + hashTable.length; i++) {
         int newIndex = index % hashTable.length;
         if (hashTable[newIndex] != null && hashTable[newIndex].equals(word)) {
            return true;
         }
      }
      return false;
   }

   public void deleteValue(String word) {
      int index = getHashValue(word, hashTable.length);
      for (int i = 0; i < index + hashTable.length; i++) {
         int newIndex = index % hashTable.length;
         if (hashTable[newIndex] != null && hashTable[newIndex].equals(word)) {
            hashTable[newIndex] = null;
            return;
         }
      }
      System.out.println("The provided value was not found in the table");
   }

   public void displayHashTable() {
      for (int i = 0; i < hashTable.length; i++) {
         System.out.println("Index : " + i + ", Value : " + hashTable[i]);
      }
   }
}
