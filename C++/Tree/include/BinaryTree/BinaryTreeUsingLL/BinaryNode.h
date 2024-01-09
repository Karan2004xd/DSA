#ifndef BINARY_NODE_H_
#define BINARY_NODE_H_

#include <string>
class BinaryNode {
public:
    std::string value;
    BinaryNode *left {nullptr}, *right {nullptr};
};
#endif // BINARY_NODE_H_
