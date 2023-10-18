#include <iostream>
#include <string>
#include "Node.h"
#include "SinglyLinkedList.h"

template class SinglyLinkedList<int>;
template class SinglyLinkedList<std::string>;
template class SinglyLinkedList<double>;

template<typename T>
void SinglyLinkedList<T>::create_ll(T value) {
   Node<T> *new_node = new Node<T>();
   new_node->next = nullptr;
   new_node->value = value;
   head = new_node;
   tail = new_node;
   size = 1;
}

template<typename T>
void SinglyLinkedList<T>::insert_value(T value, int index) {
   if (head == nullptr) {
      create_ll(value);
   } else {
      Node<T> *new_node = new Node<T>();
      new_node->value = value;
      if (index <= 0) {
         new_node->next = head;
         head = new_node;
      } else if (index >= size - 1) {
         new_node->next = nullptr;
         tail->next = new_node;
         tail = new_node;
      } else {
         Node<T> *temp_node = head;
         for (int i = 0; i < index - 1; i++) {
            temp_node = temp_node->next;
         }
         new_node->next = temp_node->next;
         temp_node->next = new_node;
      }
      size++;
   }
}

template<typename T>
void SinglyLinkedList<T>::traverse() const{
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
int SinglyLinkedList<T>::search_value(T value) {
   Node<T> *temp_node = head;
   for (int i = 0; i < size; i++) {
      if (temp_node->value == value) return i;
      temp_node = temp_node->next;
   }
   std::cout << "The provided value was not found in the List" << std::endl;
   return -1;
}

template<typename T>
void SinglyLinkedList<T>::delete_value(T value) {
   if (head == nullptr) {
      std::cout << "The List does not exist" << std::endl;
      return ;
   }
   int index = search_value(value);
   if (index != -1) {
      if (index <= 0) {
         head = head->next;
      } else if (index >= size - 1) {
         Node<T> *temp_node = head;
         for (int i = 0; i < size - 1; i++) {
            temp_node = temp_node->next;
         }
         temp_node->next = nullptr;
         tail = temp_node;
      } else {
         Node<T> *temp_node = head;
         for (int i = 0; i < index - 1; i++) {
            temp_node = temp_node->next;
         }
         temp_node->next = temp_node->next->next;
      }
      size--;
   }
}

template<typename T>
void SinglyLinkedList<T>::delete_ll() {
   head = tail = nullptr;
   delete head;
   delete tail;
}
