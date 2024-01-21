#ifndef DOUBLE_HASHING_H_
#define DOUBLE_HASHING_H_

#include <iostream>
#include <string>
#include <vector>

// Test Cases

    /* DoubleHashing dh {13}; */
    /* dh.insert_value("The"); */
    /* dh.insert_value("quick"); */
    /* dh.insert_value("brown"); */
    /* dh.insert_value("fox"); */
    /* dh.insert_value("over"); */
    /* dh.insert_value("lazy"); */
    /* dh.display_hash_table(); */

    /* dh.delete_value("over"); */
    /* dh.display_hash_table(); */

class DoubleHashing {
public:
    DoubleHashing(int size);
    void insert_value(const std::string &word);
    void delete_value(const std::string &word);

    bool search_value(const std::string &word);
    void display_hash_table();

    void re_hash(const std::string &word);

    ~DoubleHashing();
private:
    std::string *hash_table {nullptr};
    int size;
    int number_of_used_cells;
};
#endif // DOUBLE_HASHING_H_
