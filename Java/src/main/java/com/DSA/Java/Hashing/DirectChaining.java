package com.DSA.Java.Hashing;

import java.util.LinkedList;

public class DirectChaining {
   LinkedList<String>[] hashTable;

   public DirectChaining(int size) {
      this.hashTable = new LinkedList[size];
   }

   public int getHashValue(String value, int sizeOfArray) {
      int result = 0;
      for (int i = 0; i < value.length(); i++) {
         result += (int) value.charAt(i);
      }
      return result % sizeOfArray;
   }

   public void insertHashTable(String value) {
      int index = getHashValue(value, hashTable.length);
      if (hashTable[index] == null) {
         hashTable[index] = new LinkedList<String>();
         hashTable[index].add(value);
      } else {
         hashTable[index].add(value);
      }
   }

   public void displayHashTable() {
      if (hashTable == null) {
         System.out.println("The Hash Table is empty");
      } else {
         for (int i = 0; i < hashTable.length; i++) {
            System.out.println("Index " + i + ", key: " + hashTable[i]);
         }
      }
   }

   public boolean searchHashValue(String value) {
      int index = getHashValue(value, hashTable.length);
      if (hashTable[index] != null && hashTable[index].contains(value)) {
         return true;
      }
      return false;
   }

   public void deleteHashValue(String value) {
      int index = getHashValue(value, hashTable.length);
      if (searchHashValue(value)) {
         hashTable[index].remove(value);
         return;
      }
      System.out.println("The value was not found in the hash table");
   }

}
