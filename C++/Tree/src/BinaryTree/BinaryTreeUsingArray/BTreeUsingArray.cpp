#include "../../../include/BinaryTree/BinaryTreeUsingArray/BTreeUsingArray.h"

BTreeUsingArray::BTreeUsingArray(int size) {
    this->size = size + 1;
    this->tree_nodes = new std::string[this->size];
    this->last_used_index = 0;
}

bool BTreeUsingArray::is_full() const {
    return last_used_index > size - 1;
}

void BTreeUsingArray::insert_element(const std::string &value) {
    if (!is_full()) {
        last_used_index++;
        tree_nodes[last_used_index] = value;
    } else {
        std::cout << "The tree is full" << std::endl;
    }
}

int BTreeUsingArray::search_element(const std::string &value) {
    if (is_full()) {
        std::cout << "The tree is full" << std::endl;
    } else {
        for (int i = 1; i < size; i++) {
            if (tree_nodes[i] == value) return i;
        }
        std::cout << "The value was not found in the tree" << std::endl;
    }
    return -1;
}

void BTreeUsingArray::delete_element(const std::string &value) {
    int index = search_element(value);
    if (index != -1) {
        tree_nodes[index] = tree_nodes[last_used_index];
        last_used_index--;
    }
}

void BTreeUsingArray::pre_order_traversal(int index) {
    if (index > last_used_index) {
        return ;
    }
    std::cout << tree_nodes[index] << " ";
    pre_order_traversal(index * 2);
    pre_order_traversal(index * 2 + 1);
}

void BTreeUsingArray::in_order_traversal(int index) {
    if (index > last_used_index) {
        return ;
    }
    in_order_traversal(index * 2);
    std::cout << tree_nodes[index] << " ";
    in_order_traversal(index * 2 + 1);
}

void BTreeUsingArray::post_order_traversal(int index) {
    if (index > last_used_index) {
        return ;
    }
    post_order_traversal(index * 2);
    post_order_traversal(index * 2 + 1);
    std::cout << tree_nodes[index] << " ";
}

void BTreeUsingArray::level_order_traversal() {
    for (int i = 1; i <= last_used_index; i++) {
        std::cout << tree_nodes[i] << " ";
    }
    std::cout << "\n";
}

void BTreeUsingArray::delete_tree() {
    try {
        tree_nodes = nullptr;
        last_used_index = 0;
    } catch (std::exception &e) {
        std::cout << "Exception" << std::endl;
    }
}

BTreeUsingArray::~BTreeUsingArray() {
    delete tree_nodes;
}
