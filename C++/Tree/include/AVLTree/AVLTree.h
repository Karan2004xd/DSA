#ifndef AVL_TREE_H_
#define AVL_TREE_H_

#include "AVLNode.h"
#include <queue>
#include <iostream>
#include <algorithm>

class AVLTree {
public:
    AVLTree();
    
    void in_order_traversal(AVLNode *node);
    void pre_order_traversal(AVLNode *node);
    void post_order_traversal(AVLNode *node);
    void level_order_traversal();

    bool search_element(int value);
    void insert_element(int value);
    void delete_element(int value);
    void delete_tree();

    AVLNode *get_root() { return this->root; }
    ~AVLTree();
private:
    AVLNode *root;
};
#endif // AVL_TREE_H_
