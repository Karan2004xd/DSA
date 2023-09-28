#include "Node.h"

class SinglyLinkedList {
   public:
      Node *head {nullptr};
      Node *tail {nullptr};
      int size;

      void createList(int value);
      void insertElement(int value, int index);
      void traverse();
      void deleteElement(int index);
      bool searchElement(int value);
};
