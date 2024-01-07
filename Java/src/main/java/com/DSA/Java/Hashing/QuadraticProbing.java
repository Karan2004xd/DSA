package com.DSA.Java.Hashing;

import java.util.ArrayList;

public class QuadraticProbing {
   String[] hashTable;
   int usedCells;

   public QuadraticProbing(int size) {
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

   public void displayHashTable() {
      for (int i = 0; i < hashTable.length; i++) {
         System.out.println("Index : " + i + ", Value : " + hashTable[i]);
      }
   }

   public double getLoadFactor() {
      return usedCells * 1.0 / hashTable.length;
   }

   public void reHashTable(String word) {
      usedCells = 0;
      ArrayList<String> tempHashTable = new ArrayList<>();

      for (String i : hashTable) {
         if (i != null) {
            tempHashTable.add(i);
         }
      }
      tempHashTable.add(word);
      hashTable = new String[hashTable.length * 2];
      for (String i : tempHashTable) {
         insertValue(i);
      }
   }

   public void insertValue(String word) {
      if (getLoadFactor() >= 0.75) {
         reHashTable(word);
      } else {
         int index = getHashValue(word, hashTable.length);
         int counter = 0;
         for (int i = index; i < index + hashTable.length; i++) {
            int newIndex = (index + (counter * counter)) % hashTable.length;
            if (hashTable[newIndex] == null) {
               hashTable[newIndex] = word;
               usedCells++;
               return;
            }
            counter++;
         }
      }
   }
   
   public boolean searchValue(String word) {
      int index = getHashValue(word, hashTable.length);
      for (int i = index; i < index + hashTable.length; i++) {
         int newIndex = index % hashTable.length;
         if (hashTable[newIndex] != null && hashTable[newIndex].equals(word)) {
            return true;
         }
      }
      return false;
   }

   public void deleteValue(String word) {
      int index = getHashValue(word, hashTable.length);
      for (int i = index; i < index + hashTable.length; i++) {
         int newIndex = index % hashTable.length;
         if (hashTable[newIndex] != null && hashTable[newIndex].equals(word)) {
            hashTable[newIndex] = null;
            return;
         }
      }
      System.out.println("The given value was not found in the hash Table");
   }
}
