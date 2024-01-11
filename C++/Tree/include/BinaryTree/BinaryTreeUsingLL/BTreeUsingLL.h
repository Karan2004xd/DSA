#ifndef BTREE_USING_LL_H_
#define BTREE_USING_LL_H_

#include "BinaryNode.h"
#include <queue>
#include <iostream>

/* Test Cases */

/*     BTreeUsingLL tree; */
/*     tree.insert_element("N1"); */
/*     tree.insert_element("N2"); */
/*     tree.insert_element("N3"); */
/*     tree.insert_element("N4"); */
/*     tree.insert_element("N5"); */
/*     tree.insert_element("N6"); */
/*     tree.insert_element("N7"); */
/*     tree.insert_element("N8"); */
/*     tree.insert_element("N9"); */

/*     tree.pre_order_traversal(tree.get_root()); */
/*     std::cout << "\n"; */

/*     tree.in_order_traversal(tree.get_root()); */
/*     std::cout << "\n"; */

/*     tree.post_order_traversal(tree.get_root()); */
/*     std::cout << "\n"; */

/*     tree.level_order_traversal(); */

/*     tree.delete_element("N7"); */
/*     tree.level_order_traversal(); */

/*     tree.delete_tree(); */
/*     tree.level_order_traversal(); */

class BTreeUsingLL {
public:
    BTreeUsingLL(); 
    void pre_order_traversal(BinaryNode *node);
    void in_order_traversal(BinaryNode *node);
    void post_order_traversal(BinaryNode *node);
    void level_order_traversal();

    void insert_element(const std::string &value);
    void delete_element(const std::string &value);
    bool search_element(const std::string &value);

    void delete_tree();
    BinaryNode *get_root() { return this->root; }

    ~BTreeUsingLL();
private:
    BinaryNode *root;
};
#endif // BTREE_USING_LL_H_
