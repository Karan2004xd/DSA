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
   return end_of_queue == -1;
}

void QueueUsingArray::en_queue(int value) {
   if (is_empty()) {
      queue_array[0] = value;
      start_of_queue = end_of_queue = 0;
   } else {
      if (!is_full()) {
         end_of_queue++;
         queue_array[end_of_queue] = value;
      } else {
         std::cout << "The Queue is full" << std::endl;
      }
   }
}

int QueueUsingArray::de_queue() {
   int remove_value = -1;
   if (!is_empty()) {
      int result = queue_array[start_of_queue];
      start_of_queue++;
      if (start_of_queue > end_of_queue) {
         start_of_queue = end_of_queue = -1;
      }
   } else {
      std::cout << "The Queue is empty" << std::endl;
   }
   return remove_value;
}

int QueueUsingArray::peek() {
   if (!is_empty()) return queue_array[start_of_queue];
   std::cout << "The Queue is empty" << std::endl;
   return -1;
}

void QueueUsingArray::delete_queue() {
   queue_array = nullptr;
}

int main() {
   QueueUsingArray queue(5);
   queue.en_queue(5);
   queue.en_queue(10);
   queue.en_queue(15);
   queue.en_queue(20);
   queue.en_queue(25);

   std::cout << queue.peek() << std::endl;
   return 0;
}
