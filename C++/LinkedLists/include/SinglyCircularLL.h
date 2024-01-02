#ifndef SINGLY_CIRCULAR_LL_H
#define SINGLY_CIRCULAR_LL_H

#include "Node.h"
class SinglyCircularLL {
public:
    void create_ll(int value);
    void insert_value(int value, int index);
    void traverse() const;
    void delete_value(int value);
    int search_value(int value);
    void delete_ll();
private:
    Node *head {nullptr}, *tail {nullptr};
    int size;
};
#endif // SINGLY_CIRCULAR_LL_H
