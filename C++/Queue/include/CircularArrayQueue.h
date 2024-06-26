#ifndef CIRCULAR_ARRAY_QUEUE_H_
#define CIRCULAR_ARRAY_QUEUE_H_
#include <iostream>

// Test Cases

    /* CircularArrayQueue queue {5}; */
    /* queue.en_queue(5); */
    /* queue.en_queue(10); */
    /* queue.en_queue(15); */
    /* queue.en_queue(20); */
    /* queue.en_queue(25); */

    /* std::cout << queue.peek() << std::endl; */
    /* std::cout << queue.de_queue() << std::endl; */
    /* std::cout << queue.peek() << std::endl; */

    /* queue.en_queue(30); */
    /* std::cout << queue.peek() << std::endl; */

    /* queue.delete_queue(); */
    /* std::cout << queue.peek() << std::endl; */

class CircularArrayQueue {
public:
    CircularArrayQueue(int size);

    bool is_empty() const;
    bool is_full() const;

    int peek() const;
    int de_queue();

    void en_queue(int value);
    void delete_queue();

    ~CircularArrayQueue();
private:
    int size;
    int *queue {nullptr};
    int start_of_queue, end_of_queue;
};
#endif // CIRCULAR_ARRAY_QUEUE_H_
