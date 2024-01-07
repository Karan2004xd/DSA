package com.DSA.Java.Hashing;

public class HashRunner {
   public static void main(String[] args) {
      DoubleHashing doubleHashing = new DoubleHashing(13);
      doubleHashing.insertValue("The");
      doubleHashing.insertValue("quick");
      doubleHashing.insertValue("brown");
      doubleHashing.insertValue("lazy");
      doubleHashing.insertValue("fox");
      doubleHashing.insertValue("over");

      doubleHashing.displayHashTable();
      doubleHashing.deleteValue("The");
      System.out.println();
      doubleHashing.displayHashTable();
   }
}
