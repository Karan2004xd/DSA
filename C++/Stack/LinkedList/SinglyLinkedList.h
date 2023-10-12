#ifndef _SIGNLY_LINKED_LIST_H_
#define _SIGNLY_LINKED_LIST_H_
#include "Node.h"

class SinglyLinkedList {
   public:
      Node *head {nullptr}, *tail {nullptr};
      int size;
      static const int NOT_FOUND = -1;

      void create_ll(int value);
      void insert_value(int value, int index);
      void delete_value(int value);
      int search_value(int value);
      void traverse() const;
      void delete_ll();
      ~SinglyLinkedList();
};
#endif // _SIGNLY_LINKED_LIST_H_
