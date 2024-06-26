#ifndef AVL_NODE_H_
#define AVL_NODE_H_
#include <iostream>

class AVLNode {
public:
    AVLNode *left, *right;
    int value, height;
    AVLNode() {
        this->height = 0;
    }

    int get_height() { return this->height; }
    void set_height(int height) { this->height = height; }
};
#endif // AVL_NODE_H_
