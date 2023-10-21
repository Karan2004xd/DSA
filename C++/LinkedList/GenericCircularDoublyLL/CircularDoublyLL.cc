#include <iostream>
#include <string>

#include "Node.h"
#include "CircularDoublyLL.h"

template class CircularDoublyLL<int>;

template<typename T>
void CircularDoublyLL<T>::create_ll(T value) {
   Node<T> *new_node = new Node<T>();
   new_node->value = value;
   new_node->next = new_node;
   new_node->prev = new_node;
   head = new_node;
   tail = new_node;
   size = 1;
}

template<typename T>
void CircularDoublyLL<T>::insert_value(T value, int index) {
   if (head == nullptr) {
      create_ll(value);
   } else {
      Node<T> *new_node = new Node<T>();
      new_node->value = value;

      if (index <= 0) {
         new_node->next = head;
         new_node->prev = tail;

         head->prev = new_node;
         head = new_node;
         
         tail->next = head;
      } else if (index >= size - 1) {
         new_node->next = head;
         new_node->prev = tail;
         
         tail->next = new_node;
         tail = new_node;

         head->prev = new_node;
      } else {
         Node<T> *temp_node = head;
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
}

template<typename T>
void CircularDoublyLL<T>::traverse() {
   if (head != nullptr) {
      Node<T> *temp_node = head;
      for (int i = 0; i < size; i++) {
         std::cout << temp_node->value;
         if (i < size - 1) {
            std::cout << " -> ";
         }
         temp_node = temp_node->next;
      }
      std::cout << "\n";
   } else {
      std::cout << "The List does not exist" << std::endl;
   }
}

template<typename T>
int CircularDoublyLL<T>::search_value(T value) {
   if (head != nullptr) {
      Node<T> *temp_node = head;
      for (int i = 0; i < size; i++) {
         if (temp_node->value == value) return i;
         temp_node = temp_node->next;
      }
   }
   std::cout << "The provided value was not found" << std::endl;
   return -1;
}

template<typename T>
void CircularDoublyLL<T>::delete_value(T value) {
   int index = search_value(value);
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
         Node<T> *temp_node = head;
         for (int i = 0; i < index - 1; i++) {
            temp_node = temp_node->next;
         }
         temp_node->next->prev = temp_node;
         temp_node->next = temp_node->next->next;
      }
      size--;
   }
}

template<typename T>
void CircularDoublyLL<T>::delete_ll() {
   Node<T> *temp_node = head;
   for (int i = 0; i < size - 1; i++) {
      temp_node->prev = nullptr;
      temp_node = temp_node->next;
   }
   head = tail = nullptr;
   size = 0;
}

int main() {
   CircularDoublyLL<int> cdl;
   cdl.insert_value(5, 5);
   cdl.insert_value(10, 5);
   cdl.insert_value(15, 1);
   cdl.insert_value(20, 1);
   cdl.traverse();
}
