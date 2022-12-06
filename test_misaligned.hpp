#include <iostream>
#include <assert.h>
#include "misaligned.hpp"
#include <cstring>
#define NOF_MINOR 25 

void test_minor_color()
{

int check_minor[NOF_MINOR];
  
check_minor[0]= strcmp(printfirstmajorcolor(0,0,5), "Blue"); 
assert(check_minor[0] == 0);
  
check_minor[1]= strcmp(printfirstmajorcolor(1,4,5), "Slate"); 
assert(check_minor[1] == 0);

std::cout << "All is not well (maybe!)\n";
}
