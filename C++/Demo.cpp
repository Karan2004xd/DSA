#include "Hashing/include/DirectChaining.h"

int main() {
    DirectChaining dc {15};
    dc.insert_value("The");
    dc.insert_value("quick");
    dc.insert_value("brown");
    dc.insert_value("fox");
    dc.insert_value("over");
    dc.display_hash_table();

    dc.delete_value("over");
    dc.display_hash_table();
    return 0;
}
