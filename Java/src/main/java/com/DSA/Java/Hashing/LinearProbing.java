package com.DSA.Java.Hashing;

import java.util.ArrayList;

public class LinearProbing {
   String[] hashTable;
   int numberOfUsedCells;

   public LinearProbing(int size) {
      this.hashTable = new String[size];
      this.numberOfUsedCells = 0;
   }

   public int hashFunction(String word, int sizeOfArray) {
      int result = 0;
      for (int i = 0; i < word.length(); i++) {
         result += (int) word.charAt(i);
      }
      return result % sizeOfArray;
   }

   public double getLoadFactor() {
      return numberOfUsedCells * 1.0 / hashTable.length;
   }

   public void reHash(String word) {
      numberOfUsedCells = 0;
      ArrayList<String> temp_container = new ArrayList<>();
      for (String i : hashTable) {
         if (i != null) {
            temp_container.add(i);
         }
      }
      temp_container.add(word);
      hashTable = new String[hashTable.length * 2];
      for (String i : temp_container) {
         insertValue(i);
      }
   }

   public void displayHashTable() {
      for (int i = 0; i < hashTable.length; i++) {
         System.out.println("Index : " + i + ", Value : " + hashTable[i]);
      }
   }

   public void insertValue(String word) {
      double loadFactor = getLoadFactor();
      if (loadFactor >= 0.75) {
         reHash(word);
      } else {
         int index = hashFunction(word, hashTable.length);
         for (int i = index; i < index + hashTable.length; i++) {
            int newIndex = i % hashTable.length;
            if (hashTable[newIndex] == null) {
               hashTable[newIndex] = word;
               numberOfUsedCells++;
               return;
            }
         }
      }
   }

   public boolean searchValue(String word) {
      int index = hashFunction(word, hashTable.length);
      for (int i = index; i < index + hashTable.length; i++) {
         int newIndex = i % hashTable.length;
         if (hashTable[newIndex] != null && hashTable[newIndex].equals(word)) { 
            return true;  
         }
      }
      return false;
   }
   
   public void deleteValue(String word) {
      int index = hashFunction(word, hashTable.length);
      for (int i = index; i < index + hashTable.length; i++) {
         int newIndex = i % hashTable.length;
         if (hashTable[newIndex] != null && hashTable[newIndex].equals(word)) {
            hashTable[newIndex] = null;
            return;
         }
      }
      System.out.println("The provided value was not found in the heap");
   }
}
