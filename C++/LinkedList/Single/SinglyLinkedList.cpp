#include <iostream>
#include "SinglyLinkedList.h"
#include "Node.h"

void SinglyLinkedList::createList(int value) {
   Node *newNode = new Node();
   newNode->value = value;
   newNode->next = nullptr;
   head = newNode;
   tail = newNode;
   size = 1;
}

void SinglyLinkedList::traverse() {
   if (head == nullptr) {
      std::cout << "The List is empty" << std::endl;
      return;
   }
   Node *tempNode = head;
   for (int i = 0; i < size; i++) {
      std::cout << tempNode->value;
      if (i < size - 1) {
         std::cout << " -> ";
      }
      tempNode = tempNode->next;
   }
   std::cout << std::endl;
}

void SinglyLinkedList::insertElement(int value, int index) {
   if (head == nullptr) {
      createList(value);
      return ;
   } else {
      Node *newNode = new Node();
      newNode->value = value;

      if (index <= 0) {
         newNode->next = head;
         head = newNode;
      } else if (index >= size - 1) {
         tail->next = newNode;
         newNode->next = nullptr;
         tail = newNode;
      } else {
         Node *tempNode = head;
         for (int i = 0; i < index - 1; i++) {
            tempNode = tempNode->next;
         }
         newNode->next = tempNode->next;
         tempNode->next = newNode;
      }
      size++;
   }
}

bool SinglyLinkedList::searchElement(int value) {
   Node *tempNode = head;
   while (tempNode != nullptr) {
      if (tempNode->value == value) {
         return true;
      }
   }
   return false;
}

void SinglyLinkedList::deleteElement(int index) {
   if (index >= size || index < 0) {
      std::cout << "Index out of bounds" << std::endl;
      return ;
   }
   if (index <= 0) {
      head = head->next;
   } else if (index >= size - 1) {
      Node *tempNode = head;
      for (int i = 0; i < size - 1; i++) {
         tempNode = tempNode->next;
      }
      tempNode->next = nullptr;
      tail = tempNode;
   } else {
      Node *tempNode = head;
      for (int i = 0; i < index - 1; i++) {
         tempNode = tempNode->next;
      }
      tempNode->next = tempNode->next->next;
   }
   size--;
}
