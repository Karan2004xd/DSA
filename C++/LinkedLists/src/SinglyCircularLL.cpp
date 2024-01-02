#include "../include/SinglyCircularLL.h"

void SinglyCircularLL::create_ll(int value) {
    Node *new_node = new Node();
    new_node->value = value;
    new_node->next = new_node;
    head = new_node;
    tail = new_node;
    size = 1;
}

void SinglyCircularLL::insert_value(int value, int index) {
    if (head == nullptr) {
        create_ll(value);
    } else {
        Node *new_node = new Node();
        new_node->value = value;

        if (index <= 0) {
            new_node->next = head;
            head = new_node;
            tail->next = head;
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
}

void SinglyCircularLL::traverse() const {
    if (head == nullptr) {
        std::cout << "The list is empty" << std::endl;
    } else {
        Node *temp_node = head;
        for (int i = 0; i < size; i++) {
            std::cout << temp_node->value;
            if (i < size - 1) {
                std::cout << " -> ";
            }
            temp_node = temp_node->next;
        }
        std::cout << "\n";
        delete temp_node;
    }
}

int SinglyCircularLL::search_value(int value) {
    if (head == nullptr) {
        std::cout << "The list is empty" << std::endl;
    } else {
        Node *temp_node = head;
        for (int i = 0; i < size; i++) {
            if (temp_node->value == value) return i;
            temp_node = temp_node->next;
        }
        std::cout << "The element was not found in the list" << std::endl;
        delete temp_node;
    }
    return -1;
}

void SinglyCircularLL::delete_value(int value) {
    int index = search_value(value);
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

void SinglyCircularLL::delete_ll() {
    head = tail = nullptr;
    size = 0;
    std::cout << "The list is deleted" << std::endl;
}
