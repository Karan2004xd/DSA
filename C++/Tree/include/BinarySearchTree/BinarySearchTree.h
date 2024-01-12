#ifndef BINARY_SEARCH_TREE_H_
#define BINARY_SEARCH_TREE_H_

#include "BinaryNode.h"
#include <iostream>
#include <queue>

class BinarySearchTree {
public:
    BinarySearchTree();

    void insert_element(int value);
    void delete_element(int value);
    bool search_element(int value) const;
    void delete_tree();

    void pre_order_traversal(BinaryNode *node);
    void in_order_traversal(BinaryNode *node);
    void post_order_traversal(BinaryNode *node);
    void level_order_traversal();

    BinaryNode *get_root() { return this->root; }

    ~BinarySearchTree();
private:
    BinaryNode *root;
};
#endif // BINARY_SEARCH_TREE_H_
