#ifndef _NODE_H_
#define _NODE_H_

template<typename T> class Node {
public:
   Node *next, *prev;
   T value;
};

#endif // _NODE_H_
