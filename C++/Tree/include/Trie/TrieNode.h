#ifndef TRIE_NODE_H_
#define TRIE_NODE_H_
#include <map>

class TrieNode {
public:
    TrieNode() {
        end_of_string = false;
    }
    std::map<char, TrieNode *> children;
    bool end_of_string;
};
#endif // TRIE_NODE_H_
