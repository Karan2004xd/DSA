#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Node.h"
class DoublyLinkedList {
public:
    DoublyLinkedList() {}
    void create_dll(int value);
    void insert_value(int value, int index);
    void delete_value(int value);
    void traverse_forward() const;
    void traverse_backward() const;
    void delete_dll();
    int search_value(int value);
private:
    Node *head {nullptr}, *tail {nullptr};
    int size;
};
#endif // DOUBLY_LINKED_LIST_H
