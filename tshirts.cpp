#include <iostream>
#include "tshirts.hpp"
#include <assert.h>
#include "tshirts_test.hpp"

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

int main() {
    tshirts_test();
    std::cout << "All is not well\n";
    return 0;
}
