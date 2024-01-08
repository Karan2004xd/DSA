#include "Queue/include/ArrayQueue.h"

int main() {
    ArrayQueue queue {5};
    queue.en_queue(5);
    queue.en_queue(10);
    queue.en_queue(15);
    queue.en_queue(20);
    queue.en_queue(25);

    std::cout << queue.peek() << std::endl;
    std::cout << queue.de_queue() << std::endl;
    std::cout << queue.peek() << std::endl;

    queue.delete_queue();
    std::cout << queue.peek() << std::endl;
    return 0;
}
