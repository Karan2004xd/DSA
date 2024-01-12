#include "../../include/BinarySearchTree/BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() {
    this->root = nullptr;
}

BinaryNode *insert_element_helper(BinaryNode *current_node, int value) {
    if (current_node == nullptr) {
        BinaryNode *new_node = new BinaryNode();
        new_node->value = value;
        return new_node;
    } else if (value <= current_node->value) {
        current_node->left = insert_element_helper(current_node->left, value);
        return current_node;
    } else {
        current_node->right = insert_element_helper(current_node->right, value);
        return current_node;
    }
}

void BinarySearchTree::insert_element(int value) {
    root = insert_element_helper(root, value);
}

void BinarySearchTree::pre_order_traversal(BinaryNode *node) {
    if (node == nullptr) {
        return ;
    }
    std::cout << node->value << " ";
    pre_order_traversal(node->left);
    pre_order_traversal(node->right);
}

void BinarySearchTree::in_order_traversal(BinaryNode *node) {
    if (node == nullptr) {
        return ;
    }
    in_order_traversal(node->left);
    std::cout << node->value << " ";
    in_order_traversal(node->right);
}

void BinarySearchTree::post_order_traversal(BinaryNode *node) {
    if (node == nullptr) {
        return ;
    }
    post_order_traversal(node->left);
    post_order_traversal(node->right);
    std::cout << node->value << " ";
}

void BinarySearchTree::level_order_traversal() {
    if (root != nullptr) {
        std::queue<BinaryNode *> node_queue;
        node_queue.push(root);
        while (!node_queue.empty()) {
            BinaryNode *current_node = node_queue.front();
            node_queue.pop();
            std::cout << current_node->value << " ";

            if (current_node->left != nullptr) {
                node_queue.push(current_node->left);
            }
            if (current_node->right != nullptr) {
                node_queue.push(current_node->right);
            }
        }
        std::cout << "\n";
    } else {
        std::cout << "The tree is empty" << std::endl;
    }
}

BinaryNode *search_element_helper(BinaryNode *current_node, int value) {
    if (current_node == nullptr) {
        return nullptr;
    } else if (current_node->value == value) {
        return current_node;
    } else if (value <= current_node->value) {
        current_node = search_element_helper(current_node->left, value);
        return current_node;
    } else {
        current_node = search_element_helper(current_node->right, value);
        return current_node;
    }
}

bool BinarySearchTree::search_element(int value) const {
    return search_element_helper(root, value) != nullptr;
}

BinaryNode *get_minimum_node(BinaryNode *node) {
    if (node->left == nullptr) {
        return node;
    }
    return get_minimum_node(node->left);
}

BinaryNode *delete_element_helper(BinaryNode *current_node, int value) {
    if (current_node == nullptr) {
        return nullptr;
    } else if (value < current_node->value) {
        current_node->left = delete_element_helper(current_node->left, value);
    } else if (value > current_node->value) {
        current_node->right = delete_element_helper(current_node->right, value);
    } else {
        if (current_node->left != nullptr && current_node->right != nullptr) {
            BinaryNode *min_node = get_minimum_node(current_node->right);
            current_node->value = min_node->value;
            current_node->right = delete_element_helper(current_node->right, min_node->value);
        } else if (current_node->left == nullptr) {
            current_node = current_node->right;
        } else if (current_node->right == nullptr) {
            current_node = current_node->left;
        } else {
            current_node = nullptr;
        }
    }
    return current_node;
}

void BinarySearchTree::delete_element(int value) {
    if (search_element(value)) {
        root = delete_element_helper(root, value);
    } else {
        std::cout << "The element does not exist in the tree" << std::endl;
    }
}

void BinarySearchTree::delete_tree() {
    root = nullptr;
}

BinarySearchTree::~BinarySearchTree() {
    delete root;
}
