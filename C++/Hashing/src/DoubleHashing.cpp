#include "../include/DoubleHashing.h"

DoubleHashing::DoubleHashing(int size) {
    this->size = size;
    this->hash_table = new std::string[size];
    this->number_of_used_cells = 0;
}

double get_load_factor(int size, int number_of_used_cells) {
    return number_of_used_cells * 1.0 / size; 
}

int get_hash_function(const std::string &word, int size) {
    int result {0};
    for (int i = 0; i < word.size(); i++) {
        result += (int) word[i];
    }
    return result % size;
}

int sum_all_digits(int value) {
    int sum = 0;
    while (value > 0) {
        sum = value % 10;
        value /= 10;
    }
    return sum;
}

int get_second_hash_function(const std::string &word, int size) {
    int result {0};
    for (int i = 0; i < word.size(); i++) {
        result += (int) word[i];
    }

    if (result > size) {
        result = sum_all_digits(result);
    }
    return result % size;
}

void DoubleHashing::insert_value(const std::string &word) {
    double balance = get_load_factor(size, number_of_used_cells);
    if (balance >= 0.75) {
        re_hash(word);
    } else {
        int index = get_hash_function(word, size);
        int index_two = get_second_hash_function(word, size);
        for (int i = 0; i < size; i++) {
            int new_index = (index + i * index_two) % size;
            if (hash_table[new_index] == "") {
                hash_table[new_index] = word;
                number_of_used_cells++;
                return;
            }
        }
    }
}

void DoubleHashing::display_hash_table() {
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

void DoubleHashing::re_hash(const std::string &word) {
    std::vector<std::string> temp_container;
    for (int i = 0; i < size; i++) {
        if (hash_table[i] != "") {
            temp_container.push_back(hash_table[i]);
        }
    }

    number_of_used_cells = 0;
    size *= 2;
    hash_table = new std::string[size];
    temp_container.push_back(word);

    for (const auto &i : temp_container) {
        insert_value(i);
    }
}

bool DoubleHashing::search_value(const std::string &word) {
    int index = get_hash_function(word, size);
    for (int i = 0; i < index + size; i++) {
        int new_index = i % size;
        if (hash_table[new_index] == word) return true;
    }
    return false;
}

void DoubleHashing::delete_value(const std::string &word) {
    int index = get_hash_function(word, size);
    for (int i = 0; i < index + size; i++) {
        int new_index = i % size;
        if (hash_table[new_index] == word) {
            hash_table[new_index] = "";
            return ;
        }
    }
    std::cout << "The element was not found in the table" << std::endl;
}

DoubleHashing::~DoubleHashing() {
    delete [] hash_table;
}
