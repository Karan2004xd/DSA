#include <iostream>

struct Node {
   Node *next;
   int value;
};

struct Circular_singly_ll {
   Node *head {nullptr}, *tail {nullptr};
   int size;
   static constexpr int NOT_FOUND = -1;

   void create_ll(int value);
   void insert_value(int value, int index);
   void delete_value(int value);
   int search_value(int value);
   void traverse();
   void delete_ll();
};

void Circular_singly_ll::create_ll(int value) {
   Node *new_node = new Node();
   new_node->value = value;
   new_node->next = new_node;
   head = new_node;
   tail = new_node;
   size = 1;
}

void Circular_singly_ll::insert_value(int value, int index) {
   if (head == nullptr) {
      create_ll(value);
   } else {
      Node *new_node = new Node();
      new_node->value = value;
      if (index <= 0) {
         tail->next = new_node;
         new_node->next = head;
         head = new_node;
      } else if (index >= size - 1) {
         tail->next = new_node;
         new_node->next = head;
         tail = new_node;
      } else {
         Node *temp_node = head;
         for (int i = 0; i < index - 1; i++) {
            temp_node = temp_node->next;
         }
         new_node->next = temp_node->next;
         temp_node->next = new_node;
      }
      size++;
   }
}

void Circular_singly_ll::traverse() {
   if (head == nullptr) {
      std::cout << "The List does not exist" << std::endl;
   } else {
      Node *temp_node = head;
      for (int i = 0; i < size; i++) {
         std::cout << temp_node->value;
         if (i < size - 1) {
            std::cout << " -> ";
         }
         temp_node = temp_node->next;
      }
      std::cout << std::endl;
   }
}

int Circular_singly_ll::search_value(int value) {
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

void Circular_singly_ll::delete_value(int value) {
   int index = search_value(value);
   if (index != NOT_FOUND) {
      if (index <= 0) {
         head = head->next;
         tail->next = head;
      } else if (index >= size - 1) {
         Node *temp_node = head;
         for (int i = 0; i < size - 1; i++) {
            temp_node = temp_node->next;
         }
         temp_node->next = head;
         tail = temp_node;
      } else {
         Node *temp_node = head;
         for (int i = 0; i < index - 1; i++) {
            temp_node = temp_node->next;
         }
         temp_node->next = temp_node->next->next;
      }
      size--;
   }
}

void Circular_singly_ll::delete_ll() {
   head = tail = nullptr;
}

int main() {
   Circular_singly_ll csll;
   csll.insert_value(5, 0);
   csll.insert_value(10, 5);
   csll.insert_value(15, 1);
   csll.insert_value(20, 1);

   csll.traverse();
   return 0;
}
