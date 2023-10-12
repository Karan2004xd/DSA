#include <iostream>

struct QueueUsingArray {
   int *queue_array {nullptr};
   int start_of_queue, end_of_queue, queue_size;

   QueueUsingArray(int size);
   bool is_full();
   bool is_empty();
   int peek();
   void en_queue(int value);
   int de_queue();
   void delete_queue();
};

QueueUsingArray::QueueUsingArray(int size) {
   this->queue_array = new int[size];
   this->queue_size = size;
   this->start_of_queue = this->end_of_queue = -1;
}

bool QueueUsingArray::is_full() {
   return start_of_queue == 0 && end_of_queue == queue_size - 1;
}

bool QueueUsingArray::is_empty() {
   return end_of_queue == - 1;
}

void QueueUsingArray::en_queue(int value) {
   if (!is_full()) {
           
   }
}

int main() {
   return 0;
}
