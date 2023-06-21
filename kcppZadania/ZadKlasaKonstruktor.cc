#include <iostream>

class ConstructorExample 
{
    public:
        int x;

        ConstructorExample(int arg) : x(arg) // List init
        {
            std::cout << "I'm constructed with  " << x << std::endl;
        }

        ~ConstructorExample()
        {
            std::cout << "I'm destructed" << std::endl;
        }
};

int main() 
{
    ConstructorExample myObject(321);
    return 0;
}