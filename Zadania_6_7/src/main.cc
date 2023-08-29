#include <iostream>
#include "../include/ZadKcpp.h"

int main()
{
    ZadKcpp p;
    int choice;

    while (true)
    {
        std::cout << "===============================" << std::endl;
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Przekazywanie kopii tablicy" << std::endl;
        std::cout << "2. Liczba binarna na dziesietna" << std::endl;
        std::cout << "3. Liczba dziesietna na binarna" << std::endl;
        std::cout << "4. Manipulacje strumieniem cout" << std::endl;
        std::cout << "5. Sprawdzenie parzystosci liczby" << std::endl;
        std::cout << "0. Wyjscie" << std::endl
                  << std::endl;
        std::cout << "Wybierz zadanie: ";
        std::cin >> choice;
        std::cout << std::endl;

        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            p.zad1();
            break;
        case 2:
            p.zad2();
            break;
        case 3:
            p.zad3();
            break;
        case 4:
            p.zad4();
            break;
        case 5:
            p.zad5();
            break;
        default:
            std::cout << "Nieprzewidziana opcja" << std::endl;
            break;
        }

        std::cout << std::endl;
    }
}
