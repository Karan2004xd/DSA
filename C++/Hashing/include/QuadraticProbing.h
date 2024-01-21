#ifndef QUADRATIC_PROBING_H_
#define QUADRATIC_PROBING_H_

#include <string>
#include <vector>
#include <iostream>

// Test Cases

    /* QuadraticProbing qp {13}; */
    /* qp.insert_value("The"); */
    /* qp.insert_value("quick"); */
    /* qp.insert_value("brown"); */
    /* qp.insert_value("fox"); */
    /* qp.insert_value("over"); */
    /* qp.display_hash_table(); */

    /* qp.delete_value("The"); */
    /* qp.display_hash_table(); */

class QuadraticProbing {
public:
    QuadraticProbing(int size);

    double get_load_factor() const;
    int get_hash_function(const std::string &word);
    void display_hash_table();

    void re_hash(const std::string &word);
    void insert_value(const std::string &word);
    bool search_value(const std::string &word);
    void delete_value(const std::string &word);

    ~QuadraticProbing();
private:
    std::string *hash_table {nullptr};
    int size;
    int number_of_used_cells;
};
#endif // QUADRATIC_PROBING_H_
