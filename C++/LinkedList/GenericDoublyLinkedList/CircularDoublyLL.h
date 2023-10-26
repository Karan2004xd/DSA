#ifndef CIRCULAR_DOUBLY_LL_H_
#define CIRCULAR_DOUBLY_LL_H_
#include "Node.h"

template <typename T> class CircularDoublyLL {
   Node<T> *head {nullptr}, *tail {nullptr};
   int size;
public:
   void create_LL(T);
   void insert_value(T, int);
   void delete_value(T);
   int search_value(T);
   void traverse();
   void delete_LL();
};
#endif // CIRCULAR_DOUBLY_LL_H_
