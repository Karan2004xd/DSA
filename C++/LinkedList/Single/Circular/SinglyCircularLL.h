#ifndef _DOUBLY_LINKED_LIST_H_
#define _DOUBLY_LINKED_LIST_H_
#include "Node.h"

class SinglyCircularLL {
   public:
      Node *head {nullptr}, *tail {nullptr};
      int size;

      void create_list(int value);
      void insert_element(int value, int index);
      void delete_element(int value);
      int search_element(int value);
      void traverse();
      void delete_list();
};
#endif // _DOUBLY_LINKED_LIST_H_
