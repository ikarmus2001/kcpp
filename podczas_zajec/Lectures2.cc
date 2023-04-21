#include <iostream>
#include <string.h>
namespace outInner {
    int k = 0;

    void nFunction()
    {
        std::string txt = "function in outInner namespace";
        std::cout << txt;

        std::cout << "text is longer, but it's compared by lexycographic order" << std::endl << (txt < "z") << std::endl;

        txt += " addition operator";
        std::cout << txt << std::endl;

        txt.clear();

        std::cout << "txt cleared:_" << txt << std::endl;

        txt.append("append function");
        std::cout << "txt append:_" << txt << std::endl;
    }
}

int main()
{
    outInner::nFunction();
    return outInner::k;
}
