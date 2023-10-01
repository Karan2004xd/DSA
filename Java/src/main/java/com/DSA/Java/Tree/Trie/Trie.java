package com.DSA.Java.Tree.Trie;

public class Trie {
   private TrieNode root;

   public Trie() {
      this.root = new TrieNode();
   }

   public void insertElement(String word) {
      TrieNode tempNode = root;
      for (int i = 0; i < word.length(); i++) {
         char ch = word.charAt(i);
         TrieNode newNode = tempNode.children.get(ch);
         if (newNode == null) {
            newNode = new TrieNode();
            tempNode.children.put(ch, newNode);
         }
         tempNode = newNode;
      }
      tempNode.endOfString = true;
   }

   public boolean searchElement(String word) {
      TrieNode tempNode = root;

      for (int i = 0; i < word.length(); i++) {
         char ch = word.charAt(i);
         TrieNode newNode = tempNode.children.get(ch);
         if (newNode == null) {
            return false;
         }
         tempNode = newNode;
      }

      if (!tempNode.endOfString) {
         return false;
      }

      return true;
   }

   private boolean deleteElement(TrieNode parentNode, String word, int index) {
      char ch = word.charAt(index);
      TrieNode childNode = parentNode.children.get(ch);
      boolean delete;

      if (childNode.children.size() > 1) {
         deleteElement(childNode, word, index + 1);
         return false;
      }

      if (index == word.length() - 1) {
         if (childNode.children.size() >= 1) {
            childNode.endOfString = false;
            return false;
         } else {
            childNode.children.remove(ch);
            return true;
         }
      }

      if (childNode.endOfString) {
         deleteElement(childNode, word, index + 1);
         return false;
      }
      
      delete = deleteElement(childNode, word, index + 1);
      if (delete) {
         parentNode.children.remove(ch);
         return true;
      } else {
         return false;
      }
   }

   public void deleteElement(String word) {
      if (searchElement(word)) {
         deleteElement(root, word, 0);
      }
   }
}
