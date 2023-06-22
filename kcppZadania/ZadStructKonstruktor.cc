#include <iostream>

struct StructConstructorExample 
{
    public:
        int x;

        StructConstructorExample()
        {
            std::cout << "I'm constructed without arg" << std::endl;
        }

        ~StructConstructorExample()
        {
            std::cout << "I'm destructed" << std::endl;
        }
};

int main() 
{
    StructConstructorExample myObject();
    myObject.x = 0;

    return 0;
}