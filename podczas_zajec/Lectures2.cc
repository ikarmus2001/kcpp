#include <iostream>
#include <string.h>
namespace outInner {
    int k = 512;

    void nFunction()
    {
        std::string txt = "function in outInner namespace";
        std::cout << txt;

        std::cout << "text is longer, but it's compared by lexycographic order" << std::endl << (txt < "z") << std::endl;


    }
}

int main()
{
    outInner::nFunction();
    return outInner::k;
}