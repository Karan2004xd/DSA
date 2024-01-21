#ifndef COMMON_OPER_H_
#define COMMON_OPER_H_

#include <vector>
#include <iostream>

class CommonOper {
public:
    void traverse(std::vector<int> &arr) const;
    void print_found(int value, int index) const;
    void print_not_fount(int value) const;
protected:
    virtual void display_array() = 0;
};
#endif // COMMON_OPER_H_
