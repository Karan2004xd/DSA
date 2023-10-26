#include "CircularDoublyLL.h"
#include <string>

int main() {
   CircularDoublyLL<int> cdl;
   cdl.insert_value(5, 0);
   cdl.insert_value(10, 1);
   cdl.insert_value(15, 2);
   cdl.insert_value(20, 3);
   cdl.traverse();

   /* CircularDoublyLL<std::string> cdl; */
   /* cdl.insert_value("The", 0); */
   /* cdl.insert_value("big", 0); */
   /* cdl.insert_value("brown", 0); */
   /* cdl.insert_value("fox", 0); */
   /* cdl.traverse(); */

   /* cdl.delete_value("fox"); */
   /* cdl.traverse(); */
   return 0;
} 
