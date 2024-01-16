#include "Tree/include/AVLTree/AVLTree.h"

int main() {
    AVLTree tree;
    tree.insert_element(10);
    tree.insert_element(20);
    tree.insert_element(30);
    tree.insert_element(60);
    tree.insert_element(70);

    tree.pre_order_traversal(tree.get_root());
    std::cout << "\n";

    tree.in_order_traversal(tree.get_root());
    std::cout << "\n";

    tree.post_order_traversal(tree.get_root());
    std::cout << "\n";

    tree.level_order_traversal();

    tree.delete_element(70);
    tree.level_order_traversal();

    tree.delete_tree();
    tree.level_order_traversal();
    return 0;
}
