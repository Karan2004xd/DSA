#include "DoublyLinkedList.h"
#include "Node.h"
#include <iostream>

void DoubleLinkedList::create_List(int value) {
   Node *new_node = new Node();
   new_node->value = value;
   new_node->next = nullptr;
   new_node->prev = nullptr;

   head = new_node;
   tail = new_node;
   size = 1;
}

void DoubleLinkedList::insert_element(int value, int index) {
   if (head == nullptr) {
      create_List(value);
      return;
   }
   Node *new_node = new Node();
   new_node->value = value;
   if (index <= 0) {
      new_node->next = head;
      head->prev = new_node;

      new_node->prev = nullptr;
      head = new_node;
   } else if (index >= size - 1) {
      new_node->next = nullptr;
      new_node->prev = tail;

      tail->next = new_node;
      tail = new_node;
   } else {
      Node *temp_node = head;
      for (int i = 0; i < index - 1; i++) {
         temp_node = temp_node->next;
      }
      new_node->prev = temp_node;
      new_node->next = temp_node->next;

      temp_node->next->prev = new_node;
      temp_node->next = new_node;
   }
   size++;
}

void DoubleLinkedList::traverse() {
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

int DoubleLinkedList::search_element(int value) {
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
   } 
   std::cout << "The given element was not found in the list" << std::endl;
   return -1;
}

void DoubleLinkedList::delete_element(int value) {
   int index = search_element(value);
   if (index != -1) {
      if (index <= 0) {
         head = head->next;
         head->prev = nullptr;
      } else if (index >= size - 1) {
         tail = tail->prev;
         tail->next = nullptr;
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

void DoubleLinkedList::delete_list() {
   Node *temp_node = head;

   for (int i = 0; i < size; i++) {
      temp_node->prev = nullptr;
   }
   head = tail = nullptr;
}
