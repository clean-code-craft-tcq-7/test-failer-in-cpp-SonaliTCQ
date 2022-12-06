#include <iostream>
#include <assert.h>
#include "tshirts.hpp"

void tshirts_test()
{
    std::cout << "Test execution\n";
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(38) == 'M');
    assert(size(42) == 'M');
}
