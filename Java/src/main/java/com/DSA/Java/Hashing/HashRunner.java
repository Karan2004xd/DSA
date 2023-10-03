package com.DSA.Java.Hashing;

public class HashRunner {
   public static void main(String[] args) {
      LinearProbing linearProbing = new LinearProbing(13);
      linearProbing.insertValue("The");
      linearProbing.insertValue("quick");
      linearProbing.insertValue("brown");
      linearProbing.insertValue("fox");
      linearProbing.insertValue("over");

      linearProbing.displayHashTable();
      linearProbing.deleteValue("The");
      System.out.println();
      linearProbing.displayHashTable();
   }
}
