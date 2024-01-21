#ifndef LINEAR_PROBING_H_
#define LINEAR_PROBING_H_

#include <string>
#include <vector>
#include <iostream>

// Test Cases

    /* LinearProbing lp {13}; */
    /* lp.insert_value("The"); */
    /* lp.insert_value("quick"); */
    /* lp.insert_value("brown"); */
    /* lp.insert_value("fox"); */
    /* lp.insert_value("over"); */
    /* lp.display_hash_table(); */

    /* lp.delete_value("The"); */
    /* lp.display_hash_table(); */

class LinearProbing {
public:
    LinearProbing(int size);

    int get_hash_function(const std::string &word);
    double get_load_factor();
    void re_hash(const std::string &word);

    void insert_value(const std::string &word);
    bool search_value(const std::string &word);
    void delete_value(const std::string &word);

    void display_hash_table();

    ~LinearProbing();
private:
    std::string *hash_table {nullptr};
    int size;
    int number_of_used_cells;
};
#endif // LINEAR_PROBING_H_
