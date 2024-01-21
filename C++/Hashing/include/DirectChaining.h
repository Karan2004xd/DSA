#ifndef DIRECT_CHAINING_H_
#define DIRECT_CHAINING_H_
#include "../../LinkedLists/src/GenericSinglyLL.cpp"
#include <string>
#include <sstream>

// Test Cases

    /* DirectChaining dc {15}; */
    /* dc.insert_value("The"); */
    /* dc.insert_value("quick"); */
    /* dc.insert_value("brown"); */
    /* dc.insert_value("fox"); */
    /* dc.insert_value("over"); */
    /* dc.display_hash_table(); */

    /* dc.delete_value("over"); */
    /* dc.display_hash_table(); */

typedef GenericSinglyLL<std::string> list;

class DirectChaining {
public:
    DirectChaining(int size);

    int get_hash_value(const std::string &value);
    void insert_value(const std::string &value);

    void delete_value(const std::string &value);
    bool search_value(const std::string &value);

    void display_hash_table();

    ~DirectChaining();
private:
    list *hash_table {nullptr};
    int size_of_hash_table;
};
#endif // DIRECT_CHAINING_H_
