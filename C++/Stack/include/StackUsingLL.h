#ifndef STACK_USIGN_LL_H_
#define STACK_USIGN_LL_H_
#include "../../LinkedLists/include/SinglyLinkedList.h"

// Test Cases
    /* StackUsingLL stack; */
    /* stack.push(5); */
    /* stack.push(10); */
    /* stack.push(15); */
    /* stack.push(20); */
    /* stack.push(25); */

    /* std::cout << stack.peek() << std::endl; */
    /* std::cout << stack.pop() << std::endl; */
    /* std::cout << stack.peek() << std::endl; */

    /* stack.delete_stack(); */
    /* std::cout << stack.peek() << std::endl; */

class StackUsingLL {
public:
    StackUsingLL() {}

    void push(int value);
    void delete_stack();

    int peek() const;
    int pop();

    bool is_empty() const;
private:
    SinglyLinkedList sll;
};
#endif // STACK_USIGN_LL_H_
