#include "misaligned.hpp"

char *printfirstmajorcolor(int i, int first, int n){
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
	
    std::cout << i * n + first << " " " | " << majorColor[i] << " " " | " << minorColor[first] << "\n";
	const char* check = minorColor[first];
	return (char *)check;
}

char *printsecondmajorcolor(int i, int second, int n){
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    std::cout << i * n + second << " " " | " << majorColor[i] << " " " " " " " | " << minorColor[second] << "\n";
	const char* check = minorColor[second];
	return (char *)check;
}

char *printthirdmajorcolor(int i, int third, int n){
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    std::cout << i * n + third << " | " << majorColor[i] << " " " | " << minorColor[third] << "\n";
    const char* check = minorColor[third];
	return (char *)check;
}

char *printfourthmajorcolor(int i, int fourth, int n){
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    std::cout << i * n + fourth << " | " << majorColor[i] << " | " << minorColor[fourth] << "\n";
    const char* check = minorColor[fourth];
	return (char *)check;
}

char *printfifthmajorcolor(int i, int fifth, int n){
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    std::cout << i * n + fifth << " | " << majorColor[i] <<  " | " << minorColor[fifth] << "\n";
    const char* check = minorColor[fifth];
	return (char *)check;
}
