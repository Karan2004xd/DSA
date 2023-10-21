#ifndef _CIRCULAR_DOUBLY_LL_H_
#define _CIRCULAR_DOUBLY_LL_H_
#include "Node.h"

template<typename T> class CircularDoublyLL {
   Node<T> *head {nullptr}, *tail {nullptr};
   int size;
public:
   void create_ll(T value);
   void insert_value(T value, int index);
   void delete_value(T value);
   int search_value(T value);
   void delete_ll();
   void traverse();
};
#endif // _CIRCULAR_DOUBLY_LL_H_
