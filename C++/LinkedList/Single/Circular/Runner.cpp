#include <iostream>
#include "CircularSinglyLL.h"

int main() {
   CircularSinglyLL cll;
   cll.insert_element(5, 0);
   cll.insert_element(10, 1);
   cll.insert_element(15, 2);
   cll.insert_element(20, 3);
   
   cll.traverse();
   cll.reverse_traverse();
   return 0;
}
