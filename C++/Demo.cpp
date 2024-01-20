#include "LinkedLists/include/GenericSinglyLL.h"

int main() {
    GenericSinglyLL<std::string> ll;
    ll.add_element("hello", 0);
    ll.add_element("world", 0);
    ll.traverse();
    return 0;
}
