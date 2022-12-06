#include <iostream>
#include <assert.h>
#include "printminorcolors.cpp"
#include "test_misaligned.hpp"

void printColorMap() {
   int i, first, second, third, fourth, fifth =0, n= 5;
    
   for(i = 0; i < n; i++) {
    if(i==0){
        for(first = 0; first < n; first++) {
            printfirstmajorcolor(i, first, n);}
    }
    if(i==1){
      
        for(second = 0; second < n; second++) {
            printsecondmajorcolor(i, second, n);}
    }
    if(i==2){
        
        for(third = 0; third < n; third++) {
            printthirdmajorcolor(i, third, n);}
    }
    if(i==3){
        
        for(fourth = 0; fourth < n; fourth++) {
            printfourthmajorcolor(i, fourth, n);}
    }
    if(i==4){
        for(fifth =0; fifth < n; fifth++) {
            printfifthmajorcolor(i, fifth, n);}
    }
    }
}

int main() {
   
    printColorMap();
    test_minor_color();
   
    return 0;
}
