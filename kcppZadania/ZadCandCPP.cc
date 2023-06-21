#include <iostream>
#include <stdio.h>

void funcC() 
{
    std::printf("I am C function!\n");
}

// Funkcja w języku C++
void funcCPP() {
    std::cout << "Made in C++! 100\% natural!" << std::endl;
}

int main() {
    funcC();
    funcCPP();

    return 0;
}