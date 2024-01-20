#ifndef TRIE_H_
#define TRIE_H_
#include "TrieNode.h"
#include <iostream>
#include <string>

// Test Cases

    /* Trie tree; */
    /* tree.insert_element("API"); */
    /* tree.insert_element("APISI"); */
    /* tree.insert_element("AP"); */
    /* tree.search_with_message("AP"); */

    /* tree.delete_element("AP"); */
    /* tree.search_with_message("AP"); */

class Trie {
public:
    Trie();
    
    void insert_element(const std::string &word);
    bool search_element(const std::string &word);
    void delete_element(const std::string &word);
    void search_with_message(const std::string &word);

    ~Trie();
private:
    TrieNode *root;
};

#endif // TRIE_H_
