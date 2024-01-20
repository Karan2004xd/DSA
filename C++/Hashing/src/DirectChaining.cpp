#include "../include/DirectChaining.h"

typedef GenericSinglyLL<std::string> list;

DirectChaining::DirectChaining(int size) {
    this->hash_table = new list[size];
    this->size_of_hash_table = size;
}

int DirectChaining::get_hash_value(const std::string &value) {
    int result = 0;
    for (int i = 0; i < value.size(); i++) {
        result += (int) value[i];
    }
    return result % size_of_hash_table;
}

void DirectChaining::insert_value(const std::string &value) {
    int index = get_hash_value(value);
    if (&hash_table[index] == nullptr) {
        list *new_node = new list();
        hash_table[index] = *(new_node);
        hash_table[index].add_element(value);
    } else {
        hash_table[index].add_element(value);
    }
}

std::string get_array_in_string(std::string *arr, int size) {
    std::ostringstream oss;
    oss << "[";
    for (int i = 0; i < size; i++) {
        oss << arr[i];
        if (i < size - 1) {
            oss << ", ";
        }
    }
    oss << "]\n";
    return oss.str();
}

void DirectChaining::display_hash_table() {
    if (hash_table == nullptr) {
        std::cout << "The hash table is empty" << std::endl;
    } else {
        std::cout << "\n";
        for (int i = 0; i < size_of_hash_table; i++) {
            std::cout << "Index: " << i << ", Key: " << get_array_in_string(hash_table[i].get_elements(), hash_table[i].get_size());
        }
    }
}

bool DirectChaining::search_value(const std::string &value) {
    int index = get_hash_value(value);
    if (&hash_table[index] != nullptr && hash_table[index].search_element(value) != -1) {
        return true;
    }
    std::cout << "The element is not found in the table" << std::endl;
    return false;
}

void DirectChaining::delete_value(const std::string &value) {
    if (search_value(value)) {
        int index = get_hash_value(value);
        hash_table[index].delete_element(value);
        return ;
    }
}

DirectChaining::~DirectChaining() {
    delete [] hash_table;
}
