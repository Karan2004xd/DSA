#include "LinkedLists/include/DoublyLinkedList.h"

int main() {
    DoublyLinkedList dll;
    dll.insert_value(10, 5);
    dll.insert_value(20, 5);
    dll.insert_value(30, 5);
    dll.insert_value(40, 1);
    dll.insert_value(50, 1);
    dll.traverse_forward();
    dll.traverse_backward();

    /* dll.delete_value(30); */
    dll.delete_dll();
    dll.traverse_forward();
    return 0;
}
