#include "../include/CommonOper.h"

void CommonOper::traverse(std::vector<int> &arr) const {
  for (const auto &i : arr) {
    std::cout << i << " ";
  }
  std::cout << "\n";
}

void CommonOper::print_found(int value, int index) const {
  std::cout << "The element " << value << " was found at index " << index << std::endl;
}

void CommonOper::print_not_fount(int value) const {
  std::cout << "The element " << value << " was not found" << std::endl;
}
