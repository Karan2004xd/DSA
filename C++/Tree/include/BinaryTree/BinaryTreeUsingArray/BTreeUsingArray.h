#ifndef BTREE_USING_ARRAY_H_
#define BTREE_USING_ARRAY_H_

#include <string>
#include <iostream>

// Test Cases

    /* BTreeUsingArray tree {9}; */
    /* tree.insert_element("N1"); */
    /* tree.insert_element("N2"); */
    /* tree.insert_element("N3"); */
    /* tree.insert_element("N4"); */
    /* tree.insert_element("N5"); */
    /* tree.insert_element("N6"); */
    /* tree.insert_element("N7"); */
    /* tree.insert_element("N8"); */
    /* tree.insert_element("N9"); */

    /* tree.pre_order_traversal(1); */
    /* std::cout << "\n"; */

    /* tree.in_order_traversal(1); */
    /* std::cout << "\n"; */

    /* tree.post_order_traversal(1); */
    /* std::cout << "\n"; */

    /* tree.level_order_traversal(); */

    /* tree.delete_element("N1"); */
    /* tree.level_order_traversal(); */

    /* tree.delete_tree(); */
    /* tree.level_order_traversal(); */

class BTreeUsingArray {
public:
    BTreeUsingArray(int size);

    bool is_full() const;
    void insert_element(const std::string &value);
    void delete_element(const std::string &value);
    void delete_tree();
    int search_element(const std::string &value);

    void in_order_traversal(int index);
    void pre_order_traversal(int index);
    void post_order_traversal(int index);
    void level_order_traversal();

    ~BTreeUsingArray();
private:
    std::string *tree_nodes {nullptr};
    int last_used_index;
    int size;
};
#endif // BTREE_USING_ARRAY_H_
