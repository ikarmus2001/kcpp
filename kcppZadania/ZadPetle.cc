std::#include <iostream>

void whileLoop() {
    int i = 0;
    while (i < 15) {
        if (i % 2 == 0) 
        {
            std::cout << "i am even and my value is: " << i << std::endl;
        } 
        else 
        {
            std::cout << "Value of i: " << i << std::endl;
            i++;
            continue;
        }
        std::cout << "Gotta increment myself: " << i << " becomes " << i++ << std::endl;

        if (i > 7) break;
    }
}

void dowhileLoop() {
    int i = 0;
    do 
    {
        std::cout << "I was " << i << "but i incremented to " << i++ << "so I am " << i << std::endl;
        if (i >= 4)
            break;
    } while (true);
}

void forLoop() {
    for (int i = 7; i >= 3; i--) 
    {
        if (i == 5) 
        {
            return; // Zakończ funkcję
        }
        std::cout << "My value is " << i << std::endl;
    }
    std::cout << "I quit as " << i << std::endl;
}

int main() {
    std::cout << "while" << std::endl;
    whileLoop();

    std::cout << std::endl << "do-while" << std::endl;
    dowhileLoop();

    std::cout << std::endl << "for" << std::endl;
    forLoop();

    return 0;
}