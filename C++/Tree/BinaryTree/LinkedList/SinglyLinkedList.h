#ifndef _SINGLY_LINKED_LIST_H_
#define _SINGLY_LINKED_LIST_H_

#include "Node.h"

template<typename T> 
class SinglyLinkedList {
   Node<T> *head {nullptr}, *tail {nullptr};
   int size;
public:
   void create_ll(T value);
   void insert_value(T value, int index);
   void delete_value(T value);
   int search_value(T value);
   void delete_ll();
   void traverse() const;
};
#endif // _SINGLY_LINKED_LIST_H_
