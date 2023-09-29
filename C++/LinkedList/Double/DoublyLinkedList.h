#ifndef _DOUBLY_LINKED_LIST_H_
#define _DOUBLY_LINKED_LIST_H_
#include "Node.h"

class DoubleLinkedList {
   public:
      Node *head {nullptr}, *tail {nullptr};
      int size;

      void create_List(int value);
      void insert_element(int value, int index);
      void traverse();
      void delete_element(int value);
      int search_element(int value);
      void delete_list();
};
#endif // !_DOUBLY_LINKED_LIST_H_
