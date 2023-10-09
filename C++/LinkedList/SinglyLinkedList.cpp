#include <iostream>

struct Node {
   Node *next;
   int value;
};

struct SinglyLinkedList {
   Node *head {nullptr}, *tail {nullptr};
   int size;
   
   void createLL(int value);
   void insertValue(int value, int index);
   int searchValue(int value);
   void traverse();
   void deleteValue(int value);
   void deleteLL();
};

void SinglyLinkedList::createLL(int value) {
   Node *newNode = new Node();
   newNode->value = value;
   newNode->next = nullptr;
   head = newNode;
   tail = newNode;
   size = 1;
}

int SinglyLinkedList::searchValue(int value) {
   if (head != nullptr) {
      Node *tempNode = head;
      for (int i = 0; i < size; i++) {
         if (tempNode->value == value) return i;
         tempNode = tempNode->next;
      }
   }
   std::cout << "The provided value was not found in the List" << std::endl;
   return -1;
}

void SinglyLinkedList::traverse() {
   if (head != nullptr) {
      Node *tempNode = head;
      for (int i = 0; i < size; i++) {
         std::cout << tempNode->value;
         if (i < size - 1) {
            std::cout << " -> ";
         }
         tempNode = tempNode->next;
      }
      std::cout << std::endl;
   } else {
      std::cout << "The List does not exist" << std::endl;
   }
}

void SinglyLinkedList::insertValue(int value, int index) {
   if (head == nullptr) {
      createLL(value);
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

void SinglyLinkedList::deleteValue(int value) {
   if (head == nullptr) {
      std::cout << "The List does not exist" << std::endl;
   } else {
      int index = searchValue(value);
      if (index != -1) {
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
   }
}

void SinglyLinkedList::deleteLL() {
   head = tail = nullptr;
}

int main() {
   SinglyLinkedList sll;
   sll.insertValue(5, 0);
   sll.insertValue(10, 4);
   sll.insertValue(15, 1);
   sll.insertValue(20, 1);
   sll.insertValue(25, 1);
   sll.traverse();

   sll.deleteLL();
   sll.traverse();
   return 0;
}
