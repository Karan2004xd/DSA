#include "../../include/Trie/Trie.h"

Trie::Trie() {
    this->root = new TrieNode();
}

void Trie::insert_element(const std::string &word) {
    TrieNode *temp_node = root;
    for (int i = 0; i < word.size(); i++) {
        TrieNode *new_node {nullptr};
        try {
            new_node = temp_node->children.at(word[i]);
        } catch (std::exception &e) {
            new_node = new TrieNode();
            temp_node->children[word[i]] = new_node;
        }
        temp_node = new_node;
    }
    temp_node->end_of_string = true;
}

bool Trie::search_element(const std::string &word) {
    TrieNode *temp_node = root;
    
    for (int i = 0; i < word.size(); i++) {
        char ch = word[i];
        TrieNode *new_node {nullptr};
        try {
            new_node = temp_node->children.at(ch);
        } catch (std::exception &e) {
            return false;
        }

        temp_node = new_node;
    }
    if (!temp_node->end_of_string) {
        return false;
    }

    return true;
}

bool delete_element_helper(TrieNode *parent_node, const std::string &word, int index) {
    char ch = word[index];
    TrieNode *child_node = parent_node->children.at(ch);
    bool delete_flag;

    if (child_node->children.size() > 1) {
        delete_element_helper(child_node, word, index + 1);
        return false;
    }
    
    if (index == word.size() - 1) {
        if (child_node->children.size() >= 1) {
            child_node->end_of_string = false;
            return false;
        } else {
            child_node->children.erase(ch);
            return true;
        }
    }

    if (child_node->end_of_string) {
        delete_element_helper(child_node, word, index + 1);
        return false;
    }

    delete_flag = delete_element_helper(child_node, word, index + 1);
    if (delete_flag) {
        child_node->children.erase(ch);
        return true;
    } else {
        return false;
    }
}

void Trie::delete_element(const std::string &word) {
    if (search_element(word)) {
        delete_element_helper(root, word, 0);
    } else {
        std::cout << "The element was not found in the trie" << std::endl;
    }
}

void Trie::search_with_message(const std::string &word) {
    if (search_element(word)) {
        std::cout << "found" << std::endl;
    } else {
        std::cout << "not found" << std::endl;
    }
}

Trie::~Trie() {
    delete root;
}
