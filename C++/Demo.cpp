#include "Tree/include/BinaryTree/BinaryTreeUsingLL/BTreeUsingLL.h"

int main() {
    BTreeUsingLL tree;
    tree.insert_element("N1");
    tree.insert_element("N2");
    tree.insert_element("N3");
    tree.insert_element("N4");
    tree.insert_element("N5");
    tree.insert_element("N6");
    tree.insert_element("N7");
    tree.insert_element("N8");
    tree.insert_element("N9");

    tree.pre_order_traversal(tree.get_root());
    std::cout << "\n";

    tree.in_order_traversal(tree.get_root());
    std::cout << "\n";

    tree.post_order_traversal(tree.get_root());
    std::cout << "\n";

    tree.level_order_traversal();

    tree.delete_element("N7");
    tree.level_order_traversal();

    tree.delete_tree();
    tree.level_order_traversal();
    return 0;
}
