#include <iostream>

template <typename T>
struct Node {
    Node<T> *next {nullptr};
    T value;
};

template <typename T>
class GenericSinglyLL {
private:
    Node<T> *head {nullptr}, *tail {nullptr};
    int size = 0;

public:
    GenericSinglyLL<T> () {}

    void create_ll(T value) {
        Node<T> *new_node = new Node<T>();
        new_node->value = value;
        new_node->next = nullptr;
        head = tail = new_node;
        size = 1;
    }

    void add_element(T value, int index = -1) {
        if (head == nullptr) {
            create_ll(value);
        } else {
            Node<T> *new_node = new Node<T>();
            new_node->value = value;

            if (index == -1) {
                new_node->next = nullptr;
                tail->next = new_node;
                tail = new_node;

            } else {
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
            }
            size++;
        }
    }

    int search_element(T value) {
        if (head == nullptr) {
            std::cout << "The list is empty" << std::endl;
        } else {
            Node<T> *temp_node = head;
            for (int i = 0; i < size; i++) {
                if (temp_node->value == value) return i;
                temp_node = temp_node->next;
            }
            std::cout << "The element was not found in the list" << std::endl;
        }
        return -1;
    }

    void delete_element(T value) {
        int index = search_element(value);
        if (index != -1) {
            if (index == 0) {
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

    void traverse() const {
        if (head == nullptr) {
            std::cout << "The list is emtpy" << std::endl;
            return ;
        } 
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

    T *get_elements() {
        T *arr = new T[size];
        Node<T> *temp_node = head;
        for (int i = 0; i < size; i++) {
            arr[i] = temp_node->value;
            temp_node = temp_node->next;
        }
        return arr;
    }

    int get_size() { return this->size; }
};
