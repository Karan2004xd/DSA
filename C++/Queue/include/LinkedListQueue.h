#ifndef LINKED_LIST_QUEUE_H_
#define LINKED_LIST_QUEUE_H_
#include "../../LinkedLists/include/SinglyLinkedList.h"

// Test Cases

    /* LinkedListQueue queue; */
    /* queue.en_queue(5); */
    /* queue.en_queue(10); */
    /* queue.en_queue(15); */
    /* queue.en_queue(20); */
    /* queue.en_queue(25); */

    /* std::cout << queue.peek() << std::endl; */
    /* std::cout << queue.de_queue() << std::endl; */
    /* std::cout << queue.peek() << std::endl; */

    /* queue.delete_queue(); */
    /* std::cout << queue.peek() << std::endl; */

class LinkedListQueue {
public:
    LinkedListQueue() {}
    bool is_empty() const;
    void en_queue(int value);
    int de_queue();
    int peek() const;
    void delete_queue();
private:
    SinglyLinkedList sll;
};
#endif // LINKED_LIST_QUEUE_H_
