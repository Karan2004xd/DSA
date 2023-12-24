#ifndef NODE_H_
#define NODE_H_
#include <iostream>
class Node {
public:
    Node *next {nullptr}, *prev {nullptr};
    int value;
};
#endif // NODE_H_
