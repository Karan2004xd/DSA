#ifndef BINARY_NODE_H_
#define BINARY_NODE_H_

class BinaryNode {
public:
    BinaryNode *left {nullptr}, *right {nullptr};
    int value;
    int height;
};
#endif // BINARY_NODE_H_
