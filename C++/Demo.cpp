#include "Tree/include/BinarySearchTree/BinarySearchTree.h"

int main() {
    BinarySearchTree tree;
    tree.insert_element(70);
    tree.insert_element(50);
    tree.insert_element(90);
    tree.insert_element(30);
    tree.insert_element(60);
    tree.insert_element(80);
    tree.insert_element(100);
    tree.insert_element(20);
    tree.insert_element(40);

    tree.pre_order_traversal(tree.get_root());
    std::cout << "\n";

    tree.in_order_traversal(tree.get_root());
    std::cout << "\n";

    tree.post_order_traversal(tree.get_root());
    std::cout << "\n";

    tree.level_order_traversal();

    /* tree.delete_element(70); */
    /* tree.level_order_traversal(); */

    tree.delete_tree();
    tree.level_order_traversal();
    return 0;
}
