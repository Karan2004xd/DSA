#include "../include/QuadraticProbing.h"

QuadraticProbing::QuadraticProbing(int size) {
    this->size = size;
    this->number_of_used_cells = 0;
    this->hash_table = new std::string[size];
}

double QuadraticProbing::get_load_factor() const {
    return number_of_used_cells * 1.0 / size;
}

int QuadraticProbing::get_hash_function(const std::string &word) {
    int result {0};
    for (int i = 0; i < word.size(); i++) {
        result += (int) word[i];
    }
    return result % size;
}

void QuadraticProbing::insert_value(const std::string &word) {
    double balance = get_load_factor();
    if (balance >= 0.75) {
        re_hash(word);
    } else {
        int index = get_hash_function(word);
        int counter {0};
        for (int i = index; i < index + size; i++) {
            int new_index = (i + (counter * counter)) % size;
            if (hash_table[new_index] == "") {
                hash_table[new_index] = word; 
                number_of_used_cells++;
                return ;
            }
            counter++;
        }
    }
}

void QuadraticProbing::re_hash(const std::string &word) {
    std::vector<std::string> temp_container;
    number_of_used_cells = 0;
    for (int i = 0; i < size; i++) {
        if (hash_table[i] != "") {
            temp_container.push_back(hash_table[i]);
        }
    }
    temp_container.push_back(word);
    size *= 2;
    hash_table = new std::string[size];

    for (const auto &i : temp_container) {
        insert_value(i);
    }
}

void QuadraticProbing::display_hash_table() {
    if (hash_table == nullptr) {
        std::cout << "The hash table is empty" << std::endl;
        return ;
    }
    std::cout << "\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Key: " << i << ", Value: " << hash_table[i] << std::endl;
    }
    std::cout << "\n";
}

bool QuadraticProbing::search_value(const std::string &word) {
    int index = get_hash_function(word);
    for (int i = index; i < index + size; i++) {
        int new_index = i % size;
        if (hash_table[new_index] == word) return true;
    }
    return false;
}

void QuadraticProbing::delete_value(const std::string &word) {
    int index = get_hash_function(word);
    for (int i = index; i < index + size; i++) {
        int new_index = i % size;
        if (hash_table[new_index] == word) {
            hash_table[new_index] = "";
            return ;
        }
    }
    std::cout << "The element was not found in the table" << std::endl;
}

QuadraticProbing::~QuadraticProbing() {
    delete [] hash_table;
}
