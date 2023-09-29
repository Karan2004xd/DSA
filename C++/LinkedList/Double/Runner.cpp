#include "DoublyLinkedList.h"
#include <iostream>

int main() {
   DoubleLinkedList dll;
   dll.insert_element(5, 0); 
   dll.insert_element(15, 1); 
   dll.insert_element(10, 1); 
   dll.insert_element(20, 2); 
   dll.insert_element(25, 5); 
   
   dll.traverse();

   dll.delete_element(5);
   dll.traverse();

   dll.delete_element(25);
   dll.traverse();

   dll.delete_element(10);
   dll.traverse();

   dll.delete_element(5);
   dll.delete_list();
   dll.traverse();

   return 0;
}
