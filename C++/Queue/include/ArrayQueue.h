#ifndef ARRAY_QUEUE_H_
#define ARRAY_QUEUE_H_
#include <iostream>

// Test Cases

    /* ArrayQueue queue {5}; */
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

class ArrayQueue {
public:
    ArrayQueue(int size);

    bool is_empty() const;
    bool is_full() const;
    void en_queue(int value);
    int de_queue();
    int peek() const;
    void delete_queue();

    ~ArrayQueue();
private:
    int *queue {nullptr};
    int size;
    int start_of_queue, end_of_queue;
};
#endif // ARRAY_QUEUE_H_
