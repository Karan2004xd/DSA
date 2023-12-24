#include "../include/SinglyLinkedList.h"

void SinglyLinkedList::traverse() const {
    if (head != nullptr) {
        Node *tempNode = head;
        for (int i = 0; i < size; i++) {
            std::cout << tempNode->value;
            if (i < size - 1) {
                std::cout << " -> ";
            }
            tempNode = tempNode->next;
        }
    } else {
        std::cout << "The linked List is empty" << std::endl;
    }
}

int SinglyLinkedList::search_element(int value) {
    if (head == nullptr) {
        std::cout << "The linked List is empty" << std::endl;
    } else {
        Node *temp_node = head;
        for (int i = 0; i < size; i++) {
            if (temp_node->value == value) return i;
        }
        std::cout << "The element was not found in the linked List" << std::endl;
    }
    return -1;
}

void SinglyLinkedList::add_element(int value, int index) {
    if (head == nullptr) {
        create_ll(value);
    } else {
        Node *new_node = new Node();
        new_node->value = value;
        if (index <= 0) {
            new_node->next = head;
            head = new_node;
        } else if (index >= size - 1) {
            tail->next = new_node;
            tail = new_node;
            tail->next = nullptr;
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

void SinglyLinkedList::create_ll(int value) {
    Node *new_node = new Node();
    new_node->value = value;
    new_node->next = nullptr;
    head = new_node;
    tail = new_node;
    size = 1;
}

void SinglyLinkedList::delete_element(int value) {
    int index = search_element(value);
    if (index != -1) {
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

void SinglyLinkedList::delete_ll() {
    head = tail = nullptr;
    size = 0;
    std::cout << "The Linked List was deleted successfully" << std::endl;
}
