#include <iostream>

double num;

int getValue()
{
    return 12;
}

char* pointerToLetterA()
{
    char* ptr;
    char letterA = 'a';
    ptr = &letterA;
    return ptr;
}

extern "C" {
    char* arrayRet()
    {
        char arr[2] = {'a', 'b'};
        return arr;
    }

    double& dblfun() {
        return num;
}
}

int main(int function)
{
    switch (function)
    {
        case 4:
            arrayRet();
            break;
        case 3:
            dblfun() = 2.0;
            break;
        case 2:
            pointerToLetterA();
            break;
        default:
        case 1:
            getValue();
            break;
    }
}