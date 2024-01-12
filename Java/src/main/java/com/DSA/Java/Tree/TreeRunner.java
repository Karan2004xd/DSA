package com.DSA.Java.Tree;

import com.DSA.Java.Tree.Trie.Trie;
import com.DSA.Java.Tree.BinarySearchTree.*;

public class TreeRunner {
    public static void main(String[] args) {
        // Trie trie = new Trie();
        // trie.insertElement("API");
        // trie.insertElement("APIS");
        // System.out.println(trie.searchElement("API"));
        // trie.deleteElement("API");
        // System.out.println(trie.searchElement("API"));
        
        BinarySearchTree bst = new BinarySearchTree();
        bst.insertElement(70);
        bst.insertElement(50);
        bst.insertElement(90);
        bst.insertElement(30);
        bst.insertElement(60);
        bst.insertElement(80);
        bst.insertElement(100);
        bst.insertElement(20);
        bst.insertElement(40);
        
        bst.levelOrderTraversal();
        bst.deleteElement(100);
        bst.levelOrderTraversal();
    }
} 
