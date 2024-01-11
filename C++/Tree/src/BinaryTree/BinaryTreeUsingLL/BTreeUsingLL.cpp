#include "../../../include/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.h"

BTreeUsingLL::BTreeUsingLL() {
    this->root = nullptr;
}

void BTreeUsingLL::insert_element(const std::string &value) {
    BinaryNode *new_node = new BinaryNode();
    new_node->value = value;
    if (this->root == nullptr) {
        this->root = new_node;
        return ;
    }
    std::queue<BinaryNode *> node_queue;
    node_queue.push(this->root);
    while (!node_queue.empty()) {
        BinaryNode *top_node = node_queue.front();
        node_queue.pop();
        if (top_node->left == nullptr) {
            top_node->left = new_node;
            break;
        } else if (top_node->right == nullptr) {
            top_node->right = new_node;
            break;
        } else {
            node_queue.push(top_node->left);
            node_queue.push(top_node->right);
        }
    }
}

void BTreeUsingLL::pre_order_traversal(BinaryNode *node) {
    if (node == nullptr) {
        return ;
    }
    std::cout << node->value << " ";
    pre_order_traversal(node->left);
    pre_order_traversal(node->right);
}

void BTreeUsingLL::in_order_traversal(BinaryNode *node) {
    if (node == nullptr) {
        return ;
    }
    in_order_traversal(node->left);
    std::cout << node->value << " ";
    in_order_traversal(node->right);
}

void BTreeUsingLL::post_order_traversal(BinaryNode *node) {
    if (node == nullptr) {
        return ;
    }
    post_order_traversal(node->left);
    post_order_traversal(node->right);
    std::cout << node->value << " ";
}

void BTreeUsingLL::level_order_traversal() {
    if (get_root() != nullptr) {
        std::queue<BinaryNode *> node_queue;
        node_queue.push(get_root());
        while (!node_queue.empty()) {
            BinaryNode *top_node = node_queue.front();
            node_queue.pop();
            std::cout << top_node->value << " ";
            if (top_node->left != nullptr) {
                node_queue.push(top_node->left);
            }
            if (top_node->right != nullptr) {
                node_queue.push(top_node->right);
            }
        }
        std::cout << "\n";
    }
}

bool BTreeUsingLL::search_element(const std::string &value) {
    if (get_root() != nullptr) {
        std::queue<BinaryNode *> node_queue;
        node_queue.push(get_root());
        while (!node_queue.empty()) {
            BinaryNode *top_node = node_queue.front();
            node_queue.pop();
            if (top_node->value == value) return true;

            if (top_node->left != nullptr) {
                node_queue.push(top_node->left);
            }

            if (top_node->right != nullptr) {
                node_queue.push(top_node->right);
            }
        }
    }
    return false;
}

BinaryNode *get_deepest_node(BinaryNode *root) {
    std::queue<BinaryNode *> node_queue;
    node_queue.push(root);
    BinaryNode *top_node = nullptr;

    while (!node_queue.empty()) {
        top_node = node_queue.front();
        node_queue.pop();
        if (top_node->left != nullptr) {
            node_queue.push(top_node->left);
        }
        if (top_node->right != nullptr) {
            node_queue.push(top_node->right);
        }
    }
    return top_node;
}

void delete_deepest_node(BinaryNode *root) {
    std::queue<BinaryNode *> node_queue;
    node_queue.push(root);
    BinaryNode *top_node {nullptr}, *prev_node {nullptr};

    while(!node_queue.empty()) {
        prev_node = top_node;
        top_node = node_queue.front();
        node_queue.pop();

        if (top_node->left == nullptr) {
            prev_node->right = nullptr;
            return ;
        } else if (top_node->right == nullptr) {
            prev_node->left = nullptr;
            return ;
        }

        if (top_node->left != nullptr) {
            node_queue.push(top_node->left);
        }
        if (top_node->right != nullptr) {
            node_queue.push(top_node->right);
        }
    }
}

void BTreeUsingLL::delete_element(const std::string &value) {
    std::queue<BinaryNode *> node_queue;
    node_queue.push(get_root());
    while (!node_queue.empty()) {
        BinaryNode *top_node = node_queue.front();
        node_queue.pop();
        if (top_node->value == value) {
            top_node->value = get_deepest_node(get_root())->value;
            delete_deepest_node(get_root());
            return ;
        }

        if (top_node->left != nullptr) {
            node_queue.push(top_node->left);
        }
        if (top_node->right != nullptr) {
            node_queue.push(top_node->right);
        }
    }
}

void BTreeUsingLL::delete_tree() {
    this->root = nullptr;
}

BTreeUsingLL::~BTreeUsingLL() {
    delete this->root;
}
