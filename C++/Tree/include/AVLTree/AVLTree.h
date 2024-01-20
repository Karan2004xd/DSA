#ifndef AVL_TREE_H_
#define AVL_TREE_H_

#include "AVLNode.h"
#include <queue>
#include <iostream>
#include <algorithm>

// Test Cases

    /* AVLTree tree; */
    /* tree.insert_element(10); */
    /* tree.insert_element(20); */
    /* tree.insert_element(30); */
    /* tree.insert_element(60); */
    /* tree.insert_element(70); */

    /* tree.pre_order_traversal(tree.get_root()); */
    /* std::cout << "\n"; */

    /* tree.in_order_traversal(tree.get_root()); */
    /* std::cout << "\n"; */

    /* tree.post_order_traversal(tree.get_root()); */
    /* std::cout << "\n"; */

    /* tree.level_order_traversal(); */

    /* tree.delete_element(70); */
    /* tree.level_order_traversal(); */

    /* tree.delete_tree(); */
    /* tree.level_order_traversal(); */

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
