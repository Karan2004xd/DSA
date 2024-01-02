#include "../include/DoublyCircularLL.h"

void DoublyCircularLL::create_dll(int value) {
    Node *new_node = new Node();
    new_node->value = value;
    new_node->next = new_node;
    new_node->prev = new_node;
    head = new_node;
    tail = new_node;
    size = 1;
}

void DoublyCircularLL::insert_value(int value, int index) {
    if (head == nullptr) {
        create_dll(value);
    } else {
        Node *new_node = new Node();
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

void DoublyCircularLL::traverse() const {
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
    }
}

int DoublyCircularLL::search_value(int value) {
    if (head == nullptr) {
        std::cout << "The list is empty" << std::endl;
    } else {
        Node *temp_node = head;
        for (int i = 0; i < size; i++) {
            if (temp_node->value == value) return i;
            temp_node = temp_node->next;
        }
        std::cout << "The value was not found in the list" << std::endl;
    }
    return -1;
}

void DoublyCircularLL::delete_value(int value) {
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
            Node *temp_node = head;
            for (int i = 0; i < index - 1; i++) {
                temp_node = temp_node->next;
            }
            temp_node->next->prev = temp_node;
            temp_node->next = temp_node->next->next;
        }
        size--;
    }
}

void DoublyCircularLL::delete_dll() {
    Node *temp_node = head;
    for (int i = 0; i < size; i++) {
        temp_node->prev = nullptr;
        temp_node = temp_node->next;
    }
    head = tail = nullptr;
    size = 0;
    delete temp_node;
}
