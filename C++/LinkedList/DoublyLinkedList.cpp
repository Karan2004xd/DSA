#include <iostream>

struct Node {
   Node *next, *prev;
   int value;
};

struct doubly_linked_list {
   Node *head {nullptr}, *tail {nullptr};
   int size;
   static constexpr int NOT_FOUND = -1;
   
   void create_dll(int value);
   void insert_value(int value, int index);
   void traverse();
   void reverse_traverse();
   void delete_value(int value);
   int search_value(int value);
   void delete_dll();
};

void doubly_linked_list::create_dll(int value) {
   Node *new_node = new Node();
   new_node->value = value;
   new_node->next = nullptr;
   new_node->prev = nullptr;
   head = new_node;
   tail = new_node;
   size = 1;
}

void doubly_linked_list::insert_value(int value, int index) {
   if (head == nullptr) {
      create_dll(value);
   } else {
      Node *new_node = new Node();
      new_node->value = value;
      if (index <= 0) {
         new_node->prev = nullptr;
         new_node->next = head;
         head->prev = new_node;
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
         new_node->next = temp_node->next;
         new_node->prev = temp_node;
         temp_node->next->prev = new_node;
         temp_node->next = new_node;
      }
      size++;
   }
}

void doubly_linked_list::traverse() {
   if (head == nullptr) {
      std::cout << "The List is empty" << std::endl;
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

void doubly_linked_list::reverse_traverse() {
   if (head == nullptr) {
      std::cout << "The List is empty" << std::endl;
   } else {
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
}

int doubly_linked_list::search_value(int value) {
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

void doubly_linked_list::delete_value(int value) {
   int index = search_value(value);
   if (index != NOT_FOUND) {
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

void doubly_linked_list::delete_dll() {
   Node *temp_node = head;
   for (int i = 0; i < size; i++) {
      temp_node->prev = nullptr;
   }
   head = tail = nullptr;
}

int main() {
   doubly_linked_list dll;
   dll.insert_value(5, 0);
   dll.insert_value(10, 5);
   dll.insert_value(15, 1);
   dll.insert_value(20, 1);
   dll.insert_value(25, 2);

   dll.traverse();
   dll.reverse_traverse();
   
   return 0;
}
