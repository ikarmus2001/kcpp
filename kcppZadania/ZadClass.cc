#include <iostream>

class SimpleClass
{
    public:
        bool imTheStar;

        void methodDandD()
        {
            std::cout << "methodDandD" << std::endl;
        }
    
    protected:
        int childrenCount;
        
        int justForMySuccessors();

    private:
        string notMyPassword = "password";
        
        char meMyselfAndI() { return 'I'; }
}

inline SimpleClass::justForMySuccessors()
{
    std::cout << "defined outside!" << std::endl;
}
