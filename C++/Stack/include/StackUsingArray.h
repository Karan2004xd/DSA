#ifndef STACK_USING_ARRAY_H_
#define STACK_USING_ARRAY_H_
#include <iostream>

class StackUsingArray {
public:
    StackUsingArray(int size);

    bool is_full() const;
    bool is_empty() const;
    int pop();
    int peek() const;
    void push(int value);
    void delete_stack();

    ~StackUsingArray();
private:
    int size;
    int top_element_index;
    int *stack {nullptr};
};
#endif // STACK_USING_ARRAY_H_
