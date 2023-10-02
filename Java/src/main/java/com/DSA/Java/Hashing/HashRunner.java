package com.DSA.Java.Hashing;

public class HashRunner {
   public static void main(String[] args) {
      DirectChaining hashFunc = new DirectChaining(15);
      hashFunc.insertHashTable("The");
      hashFunc.insertHashTable("quick");
      hashFunc.insertHashTable("brown");
      hashFunc.insertHashTable("fox");
      hashFunc.insertHashTable("over");
      hashFunc.displayHashTable();

      hashFunc.deleteHashValue("The");
      System.out.println();
      hashFunc.displayHashTable();
   }
}
