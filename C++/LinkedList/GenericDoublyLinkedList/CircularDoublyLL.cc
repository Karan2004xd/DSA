#include "CircularDoublyLL.h"
#include "Node.h"
#include <iostream>

template class CircularDoublyLL<std::string>;
template class CircularDoublyLL<int>;
template class CircularDoublyLL<double>;

template <typename T>
void CircularDoublyLL<T>::create_LL(T value) {
   Node<T> *new_node = new Node<T>();
   new_node->value = value;
   new_node->next = new_node;
   new_node->prev = new_node;
   head = new_node;
   tail = new_node;
   size = 1;
}

template <typename T>
void CircularDoublyLL<T>::insert_value(T value, int index) {
   if (head == nullptr) {
      create_LL(value);
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

         head->prev = tail;
      } else {
         Node<T> *temp_node = head;
         for (int i = 0; i < index - 1; i++) {
            temp_node = temp_node->next;
         }
         new_node->next = temp_node->next;
         new_node->prev = temp_node;

         temp_node->next->prev = new_node;
         temp_node->next = new_node;
      }
      size++;
   }
}

template <typename T>
int CircularDoublyLL<T>::search_value(T value) {
   if (head == nullptr) {
      std::cout << "The list does not exist" << std::endl;
   } else {
      Node<T> *temp_node = head;
      for (int i = 0; i < size; i++) {
         if (temp_node->value == value) return i;
         temp_node = temp_node->next;
      }
   }
   std::cout << "The provided value was not found in the list" << std::endl;
   return -1;
}

template <typename T>
void CircularDoublyLL<T>::delete_value(T value) {
   if (head == nullptr) {
      std::cout << "The list does not exist" << std::endl;
   } else {
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
}

template <typename T>
void CircularDoublyLL<T>::traverse() {
   if (head == nullptr) {
      std::cout << "The list does not exist" << std::endl;
   } else {
      Node<T> *temp_node = head;
      for (int i = 0; i < size; i++) {
         std::cout << temp_node->value;
         if (i < size - 1) {
            std::cout << " -> ";
         }
         temp_node = temp_node->next;
      }
      std::cout << "\n";
   }
}

template <typename T>
void CircularDoublyLL<T>::delete_LL() {
   Node<T> *new_node = head;
   for (int i = 0; i < size - 1; i++) {
      new_node->prev = nullptr;
   }
   head = tail = nullptr;
   size = 0;
}
