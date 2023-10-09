#include <iostream>

struct Node {
   Node *next, *prev;
   int value;
};

struct circular_doubly_ll {
   Node *head {nullptr}, *tail {nullptr};
   int size;
   static constexpr int NOT_FOUND = -1;

   void create_ll(int value);
   void insert_value(int value, int index);
   void traverse();
   int search_value(int value);
   void delete_value(int value);
   void delete_ll();
};

void circular_doubly_ll::create_ll(int value) {
   Node *new_node = new Node();
   new_node->value = value;
   new_node->next = new_node;
   new_node->prev = new_node;
   tail = new_node;
   head = new_node;
   size = 1;
}

void circular_doubly_ll::insert_value(int value, int index) {
   if (head == nullptr) {
      create_ll(value);
   } else {
      Node *new_node = new Node();
      new_node->value = value;
      if (index <= 0) {
         new_node->next = head;
         new_node->prev = tail;
         head->prev = new_node;
         head = new_node;
         tail->next = new_node;
      } else if (index >= size - 1) {
         new_node->prev = tail;
         new_node->next = head;
         tail->next = new_node;
         tail = new_node;
         head->prev = tail;
      } else {
         Node *temp_node = head;
         for (int i = 0; i < size; i++) {
            temp_node = temp_node->next;
         }
         new_node->prev = temp_node;
         new_node->next = temp_node->next;

         temp_node->next->prev = new_node;
         temp_node->next = new_node;
      }
      size++;
   }
}

void circular_doubly_ll::traverse() {
   if (head != nullptr) {
      Node *temp_node = head;
      for (int i = 0; i < size; i++) {
         std::cout << temp_node->value;
         if (i < size - 1) {
            std::cout << " -> ";
         }
         temp_node = temp_node->next;
      }
      std::cout << std::endl;
   } else {
      std::cout << "The List is empty" << std::endl;
   }
}

int circular_doubly_ll::search_value(int value) {
   if (head != nullptr) {
      Node *temp_node = head;
      for (int i = 0; i < size; i++) {
         if (temp_node->value == value) return i;
         temp_node = temp_node->next;
      }
   }
   std::cout << "The provided value was not found in the List" << std::endl;
   return NOT_FOUND;
}

void circular_doubly_ll::delete_value(int value) {
   int index = search_value(value);
   if (index != NOT_FOUND) {
      if (index <= 0) {
         head = head->next;
         head->prev = tail;
         tail->next = head;
      } else if (index >= size - 1) {
         tail = tail->prev;
         tail->next = head;
         head->prev = tail;
      } else {
         Node *temp_node = head;
         for (int i = 0; i < index - 1; i++) {
            temp_node = temp_node->next;
         }
         temp_node->next = temp_node->next->next;
         temp_node->next->prev = temp_node;
      }
      size--;
   }
}

void circular_doubly_ll::delete_ll() {
   Node *temp_node = head;
   for (int i = 0; i < size; i++) {
      temp_node->prev = nullptr;
      temp_node = temp_node->next;
   }
   head = tail = nullptr;
}

int main() {
   circular_doubly_ll cdll;
   cdll.insert_value(5, 0);
   cdll.insert_value(10, 1);
   cdll.insert_value(15, 2);
   cdll.insert_value(20, 3);
   cdll.insert_value(25, 4);

   cdll.traverse();

   cdll.delete_ll();
   cdll.traverse();
   return 0;
}
