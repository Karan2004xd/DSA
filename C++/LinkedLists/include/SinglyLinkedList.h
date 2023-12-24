#ifndef SINGLY_LINKED_LIST_H_
#define SINGLY_LINKED_LIST_H_

#include "Node.h"

class SinglyLinkedList {
public:
    Node *head {nullptr}, *tail {nullptr};
    int size;

    void create_ll(int value);
    void traverse() const;
    void add_element(int value, int index);
    void delete_element(int value);
    void delete_ll();
    int search_element(int value);
};
#endif // SINGLY_LINKED_LIST_H_
