#include "LinkedLists/include/DoublyCircularLL.h"

int main() {
    DoublyCircularLL dll;
    dll.insert_value(10, 0);
    dll.insert_value(20, 0);
    dll.insert_value(30, 0);
    dll.insert_value(40, 1);
    dll.insert_value(50, 1);
    dll.traverse();

    /* dll.delete_value(30); */
    /* dll.delete_dll(); */
    /* dll.traverse(); */
    return 0;
}
