package com.DSA.Java.Tree;

import com.DSA.Java.Tree.Trie.Trie;

public class TreeRunner {
   public static void main(String[] args) {
      Trie trie = new Trie();
      trie.insertElement("API");
      trie.insertElement("APIS");
      System.out.println(trie.searchElement("APISI"));
   }
} 
