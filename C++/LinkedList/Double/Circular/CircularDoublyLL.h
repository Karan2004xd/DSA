#ifndef _CIRCULAR_DOUBLY_LL_
#define _CIRCULAR_DOUBLY_LL_
#include "Node.h"

class CircularDoublyLL {
   public:
      Node *head {nullptr}, *tail {nullptr};
      int size;
      
      void create_list(int value);
      void insert_element(int value, int index);
      void traverse();
      void reverse_traverse();
      int search_element(int index);
      void delete_element(int value);
      void delete_list();
};
#endif // _CIRCULAR_DOUBLY_LL_
