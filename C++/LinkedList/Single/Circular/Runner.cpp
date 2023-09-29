#include <iostream>
#include "SinglyCircularLL.h"

int main() {
   SinglyCircularLL sll;
   sll.insert_element(5, 0);
   sll.insert_element(15, 1);
   sll.insert_element(20, 2);
   sll.insert_element(10, 1);
   sll.insert_element(25, 5);
   sll.traverse();

   sll.delete_element(5);
   sll.traverse();

   sll.delete_element(20);
   sll.traverse();

   sll.delete_element(35);
   sll.traverse();

   sll.delete_list();
   sll.traverse();

   return 0;
}
