#include "SinglyCircularLL.h"
#include "Node.h"
#include <iostream>

void SinglyCircularLL::create_list(int value) {
   Node *new_node = new Node();
   new_node->value = value;
   new_node->next = new_node;
   head = new_node;
   tail = new_node;
   size = 1;
}

void SinglyCircularLL::insert_element(int value, int index) {
   if (head == nullptr) {
      create_list(value);
      return;
   }
   Node *new_node = new Node();
   new_node->value = value;
   if (index <= 0) {
      new_node->next = head;
      tail->next = new_node;
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

void SinglyCircularLL::traverse() {
   if (head == nullptr) {
      std::cout << "The Linked List does not exist" << std::endl;
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

void SinglyCircularLL::delete_element(int value) {
   int index = search_element(value);
   if (index != -1) {
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

int SinglyCircularLL::search_element(int value) {
   if (head == nullptr) {
      std::cout << "The Linked List does not exist" << std::endl;
      return -1;
   } else {
      Node *temp_node = head;
      for (int i = 0; i < size; i++) {
         if (temp_node->value == value) {
            return i;
         }
         temp_node = temp_node->next;
      }
      std::cout << "The given value was not found in the Linked List" << std::endl;
   }
   return -1;
}

void SinglyCircularLL::delete_list() {
   head = tail = nullptr;
}
