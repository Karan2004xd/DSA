#include "../../include/AVLTree/AVLTree.h"

AVLTree::AVLTree() {
    this->root = nullptr;
}

void AVLTree::pre_order_traversal(AVLNode *node) {
    if (node == nullptr) {
        return ;
    }
    std::cout << node->value << " ";
    pre_order_traversal(node->left);
    pre_order_traversal(node->right);
}

void AVLTree::in_order_traversal(AVLNode *node) {
    if (node == nullptr) {
        return ;
    }
    in_order_traversal(node->left);
    std::cout << node->value << " ";
    in_order_traversal(node->right);
}

void AVLTree::post_order_traversal(AVLNode *node) {
    if (node == nullptr) {
        return ;
    }
    post_order_traversal(node->left);
    post_order_traversal(node->right);
    std::cout << node->value << " ";
}

void AVLTree::level_order_traversal() {
    if (root == nullptr) {
        std::cout << "The tree is empty" << std::endl;
    } else {
        std::queue<AVLNode *> tree_nodes;
        tree_nodes.push(root);
        while (!tree_nodes.empty()) {
            AVLNode *temp_node = tree_nodes.front();
            std::cout << temp_node->value << " ";

            tree_nodes.pop();
            if (temp_node->left != nullptr) {
                tree_nodes.push(temp_node->left);
            }

            if (temp_node->right != nullptr) {
                tree_nodes.push(temp_node->right);
            }
        }
        std::cout << "\n";
    }
}

int get_height(AVLNode *node) {
    if (node == nullptr) {
        return 0;
    }
    return node->height;
}

AVLNode *rotate_right(AVLNode *disbalanced_node) {
    AVLNode *new_root = disbalanced_node->left;
    disbalanced_node->left = new_root->right;
    new_root->right = disbalanced_node;
    disbalanced_node->height = 1 + std::max(get_height(disbalanced_node->left), get_height(disbalanced_node->right));
    new_root->height = 1 + std::max(get_height(new_root->left), get_height(new_root->right));
    return new_root;
}

AVLNode *rotate_left(AVLNode *disbalanced_node) {
    AVLNode *new_root = disbalanced_node->right;
    disbalanced_node->right = new_root->left;
    new_root->left = disbalanced_node;
    disbalanced_node->height = 1 + std::max(get_height(disbalanced_node->left), get_height(disbalanced_node->right));
    new_root->height = 1 + std::max(get_height(new_root->left), get_height(new_root->right));
    return new_root;
}

int get_balance(AVLNode *node) {
    if (node == nullptr) {
        return 0;
    }
    return get_height(node->left) - get_height(node->right);
}

AVLNode *insert_element_helper(AVLNode *node, int value) {
    if (node == nullptr) {
        AVLNode *new_node = new AVLNode();
        new_node->value = value;
        new_node->height = 1;
        return new_node;
    } else if (value < node->value) {
        node->left = insert_element_helper(node->left, value);
    } else {
        node->right = insert_element_helper(node->right, value);
    }

    node->height = 1 + std::max(get_height(node->left), get_height(node->right));
    int balance = get_balance(node);

    int node_left_value, node_right_value;
    if (node->left == nullptr && node->right == nullptr) {
        node_left_value = node_right_value = 0;
    } else if (node->left == nullptr) {
        node_left_value = 0;
        node_right_value = node->right->height;
    } else if (node->right == nullptr) {
        node_right_value = 0;
        node_left_value = node->left->height;
    }

    if (balance > 1) {
        if (value < node_left_value) {
            return rotate_right(node);
        } else {
            node->left = rotate_left(node->left);
            return rotate_right(node);
        }
    } else if (balance < -1) {
        if (value > node_right_value) {
            return rotate_left(node);
        } else {
            node->right = rotate_right(node->right);
            return rotate_left(node);
        }
    }
    return node;
}

void AVLTree::insert_element(int value) {
    root = insert_element_helper(root, value);
}

bool AVLTree::search_element(int value) {
    if (root != nullptr) {
        std::queue<AVLNode *> tree_nodes;
        tree_nodes.push(root);
        while (!tree_nodes.empty()) {
            AVLNode *node = tree_nodes.front();
            tree_nodes.pop();
            if (node->value == value) return true;

            if (node->left != nullptr) {
                tree_nodes.push(node->left);
            }
            if (node->right != nullptr) {
                tree_nodes.push(node->right);
            }
        }
    }
    return false;
}

AVLNode *get_minimun_node(AVLNode *current_node) {
    if (current_node == nullptr) {
        return current_node;
    }
    return get_minimun_node(current_node->left);
}

AVLNode *delete_element_helper(AVLNode *current_node, int value) {
    if (current_node == nullptr) {
        return nullptr;
    }

    if (value < current_node->value) {
        current_node->left = delete_element_helper(current_node->left, value);
    } else if (value > current_node->value) {
        current_node->right = delete_element_helper(current_node->right, value);
    } else {
        if (current_node->left != nullptr && current_node->right != nullptr) {
            AVLNode *min_node = get_minimun_node(current_node->right);
            current_node->value = min_node->value;
            current_node->right = delete_element_helper(current_node->right, current_node->value);
        } else if (current_node->left != nullptr) {
            current_node = current_node->left;
        } else if (current_node->right != nullptr) {
            current_node = current_node->right;
        } else {
            current_node = nullptr;
        }
    }

    int balance = get_balance(current_node);

    if (balance > 1) {
        if (get_balance(current_node->left) >= 0) {
            return rotate_right(current_node);
        } else {
            current_node->left = rotate_left(current_node->left);
            return rotate_right(current_node);
        }
    } else if (balance < -1) {
        if (get_balance(current_node->right) <= 0) {
            return rotate_left(current_node);
        } else {
            current_node->right = rotate_right(current_node->right);
            return rotate_left(current_node);
        }
    }
    return current_node;
}

void AVLTree::delete_element(int value) {
    if (search_element(value)) {
        root = delete_element_helper(root, value);
    } else {
        std::cout << "The element was not found in the tree" << std::endl;
    }
}


void AVLTree::delete_tree() {
    root = nullptr;
}

AVLTree::~AVLTree() {
    delete_tree();
}
