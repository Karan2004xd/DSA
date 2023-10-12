#include <iostream>
#include "SinglyLinkedList.h"
#include "Node.h"

void SinglyLinkedList::create_ll(int value) {
   Node *new_node = new Node();
   new_node->value = value;
   new_node->next = nullptr;
   head = new_node;
   tail = new_node;
   size = 1;
}

void SinglyLinkedList::insert_value(int value, int index) {
   if (head == nullptr) create_ll(value);
   else {
      Node *new_node = new Node();
      new_node->value = value;
      if (index <= 0) {
         new_node->next = head;
         head = new_node;
      } else if (index >= size - 1) {
         tail->next = new_node;
         new_node->next = nullptr;
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

void SinglyLinkedList::traverse() const {
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

void SinglyLinkedList::delete_ll() {
   head = tail = nullptr;
}

int SinglyLinkedList::search_value(int value) {
   if (head != nullptr) {
      Node *temp_node = head;
      for (int i = 0; i < size; i++) {
         if (temp_node->value == value) return i;
         temp_node = temp_node->next;
      }
   }
   std::cout << "The provided element was not found in the List" << std::endl;
   return NOT_FOUND;
}

void SinglyLinkedList::delete_value(int value) {
   int index = search_value(value);
   if (index != NOT_FOUND) {
      if (index <= 0) {
         head = head->next;
      } else if (index >= size - 1) {
         Node *temp_node = head;
         for (int i = 0; i < size - 1; i++) {
            temp_node = temp_node->next;
         }
         temp_node->next = nullptr;
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

SinglyLinkedList::~SinglyLinkedList() {
   delete head;
   delete tail;
}
