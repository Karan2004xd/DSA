#include <iostream>
#include "SinglyLinkedList.h"

int main() {
   SinglyLinkedList ll;
   ll.insertElement(5, 0);
   ll.insertElement(10, 1);
   ll.insertElement(15, 2);
   ll.insertElement(20, 3);

   ll.traverse();

   ll.deleteElement(0);
   ll.traverse();
   return 0;
}
