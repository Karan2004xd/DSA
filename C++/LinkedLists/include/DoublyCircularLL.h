#ifndef DOUBLY_CIRCULAR_LL_H
#define DOUBLY_CIRCULAR_LL_H
#include "Node.h"

class DoublyCircularLL {
public:
    DoublyCircularLL() {}
    void create_dll(int value);
    void insert_value(int value, int index);
    void traverse() const;
    void delete_value(int value);
    int search_value(int value);
    void delete_dll();
private:
    Node *head {nullptr}, *tail {nullptr};
    int size;
};
#endif // DOUBLY_CIRCULAR_LL_H
