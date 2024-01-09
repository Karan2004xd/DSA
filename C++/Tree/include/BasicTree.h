#ifndef BASIC_TREE_H_
#define BASIC_TREE_H_

#include <vector>
#include <string>
#include <sstream>

// Test Cases

    /* BasicTree drinks {"Drinks"}; */

    /* BasicTree hot_drinks {"Hot Drinks"}; */
    /* BasicTree coffee {"Coffee"}; */
    /* BasicTree tea {"Tea"}; */

    /* BasicTree cold_drinks {"Cold Drinks"}; */
    /* BasicTree fanta {"Fanta"}; */
    /* BasicTree shake {"Shake"}; */

    /* hot_drinks.add_child(coffee); */
    /* hot_drinks.add_child(tea); */

    /* cold_drinks.add_child(fanta); */
    /* cold_drinks.add_child(shake); */

    /* drinks.add_child(hot_drinks); */
    /* drinks.add_child(cold_drinks); */

    /* std::cout << drinks.print(0) << std::endl; */

class BasicTree {
public:
    BasicTree(const std::string &data) : data(data) {}
    void add_child(const BasicTree &node);
    std::string print(int level);
private:
    std::vector<BasicTree> tree_nodes;
    std::string data;
};
#endif // BASIC_TREE_H_
