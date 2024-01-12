#ifndef AVL_NODE_H_
#define AVL_NODE_H_

class AVLNode {
public:
    AVLNode *left {nullptr}, *right {nullptr};
    int value, height;
    AVLNode() {
        this->height = 0;
    }
};
#endif // AVL_NODE_H_
