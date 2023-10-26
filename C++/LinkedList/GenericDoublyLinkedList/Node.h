#ifndef NODE_H_
#define NODE_H_

template <typename T> class Node {
public:
   Node *next, *prev;
   T value;
};
#endif // NODE_H_
