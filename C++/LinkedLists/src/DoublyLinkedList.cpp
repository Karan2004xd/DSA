#include "../include/DoublyLinkedList.h"

void DoublyLinkedList::create_dll(int value) {
    Node *new_node = new Node();
    new_node->value = value;
    new_node->next = nullptr;
    new_node->prev = nullptr;
    head = new_node;
    tail = new_node;
    size = 1;
}

void DoublyLinkedList::insert_value(int value, int index) {
    if (head == nullptr) {
        create_dll(value);
    } else {
        Node *new_node = new Node();
        new_node->value = value;
        if (index <= 0) {
            new_node->next = head;
            new_node->prev = nullptr;
            head->prev = new_node;
            head = new_node;
        } else if (index >= size - 1) {
            new_node->prev = tail;
            new_node->next = nullptr;
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

void DoublyLinkedList::traverse_forward() const {
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

void DoublyLinkedList::traverse_backward() const {
    if (head == nullptr) {
        std::cout << "The list is empty" << std::endl;
    } else {
        Node *temp_node = tail;
        for (int i = 0; i < size; i++) {
            std::cout << temp_node->value;
            if (i < size - 1) {
                std::cout << " -> ";
            }
            temp_node = temp_node->prev;
        }
        std::cout << "\n";
        delete temp_node;
    }
}

int DoublyLinkedList::search_value(int value) {
    if (head == nullptr) {
        std::cout << "The list is empty" << std::endl;
    } else {
        Node *temp_node = head;
        for (int i = 0; i < size; i++) {
            if (temp_node->value == value) return i;
            temp_node = temp_node->next;
        }
        std::cout << "The value was not found in the list" << std::endl;
        delete temp_node;
    }
    return -1;
}

void DoublyLinkedList::delete_value(int value) {
    int index = search_value(value);
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

void DoublyLinkedList::delete_dll() {
    Node *temp_node = head;
    while (temp_node != nullptr) {
        temp_node->prev = nullptr;
        temp_node = temp_node->next;
    }
    head = tail = nullptr;
    size = 0;
    delete temp_node;
}
