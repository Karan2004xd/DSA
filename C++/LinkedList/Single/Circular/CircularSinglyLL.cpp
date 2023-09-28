#include "Node.h" 
#include "CircularSinglyLL.h"
#include <iostream>

void CircularSinglyLL::create_list(int value) {
   Node *new_node = new Node();

   new_node->value = value;
   new_node->next = new_node;
   new_node->prev = new_node;

   head = new_node;
   tail = new_node;
   size = 1;
}

void CircularSinglyLL::insert_element(int value, int index) {
   if (head == nullptr) {
      create_list(value);
      return;
   }
   Node *new_node = new Node();
   new_node->value = value;

   if (index <= 0) {
      new_node->next = head;
      new_node->prev = tail;

      tail->next = new_node;
      head->prev = new_node;

      head = new_node;
   } else if (index >= size - 1) {
      new_node->prev = tail;
      new_node->next = head;

      tail->next = new_node;
      head->prev = new_node;

      tail = new_node;
   } else {
      Node *temp_node = head;
      for (int i = 0; i < index - 1; i++) {
         temp_node = temp_node->next;
      }
      new_node->next = temp_node->next;
      temp_node->next->prev = new_node;
      temp_node->next = new_node;
   }
   size++;
}

void CircularSinglyLL::traverse() {
   if (head == nullptr) {
      std::cout << "The List is already empty" << std::endl;
      return;
   }
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

void CircularSinglyLL::reverse_traverse() {
   if (tail == nullptr) {
      std::cout << "The List is already empty" << std::endl;
      return;
   }
   Node *temp_node = tail;
   for (int i = 0; i < size; i++) {
      std::cout << temp_node->value;
      if (i < size - 1) {
         std::cout << " -> ";
      }
      temp_node = temp_node->prev;
   }
   std::cout << std::endl;
}

int CircularSinglyLL::search_element(int value) {
   if (head == nullptr) {
      std::cout << "The List is already empty" << std::endl;
   } else {
      Node *temp_node = head;
      for (int i = 0; i < size; i++) {
         if (temp_node->value == value) {
            return i;
         }
         temp_node = temp_node->next;
      }
   }
   return -1;
}

void CircularSinglyLL::delete_element(int value) {
   int index = search_element(value);
   if (index != -1) {
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
   } else {
      std::cout << "The List is already empty" << std::endl;
   }
}
   
void CircularSinglyLL::delete_list() {
   if (head == nullptr) {
      std::cout << "The List is already empty" << std::endl;
      return;
   }

   Node *temp_node = head;
   for (int i = 0; i < size; i++) {
      temp_node->prev = nullptr;
      temp_node = temp_node->next;
   }
   head = tail = nullptr;
}
