#include "../include/ZadKcpp.h"

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void print(int array[], int arrayLen) 
{
    for (int i = 0; i < arrayLen; i++) 
    {
        std::cout << array[i] << std::endl;
        // its equal to *(arr + i), so we are jumping in memory cell by cell as usual
    }
}

void ZadKcpp::zad1()
{
    int array[] = {8, 9, 10};
    int size = sizeof(array)/sizeof(array[0]);
    print(array, size);
}


int binaryToDecimal(int binary)
{
    int decimal = 0;
    int exponent = 0;

    while (binary != 0)
    {
        int remainder = binary % 10;
        decimal += remainder * pow(2, exponent);
        binary /= 10;
        exponent++;
    }

    return decimal;
}

void ZadKcpp::zad2()
{

    int binaryNumber;
    cout << "Podaj liczbe binarna: ";
    cin >> binaryNumber;

    int decimalNumber = binaryToDecimal(binaryNumber);
    cout << "Liczba dziesietna: " << decimalNumber << endl;
}


vector<int> decToBin(int decimal)
{
    vector<int> binary;

    while (decimal > 0)
    {
        binary.push_back(decimal % 2);
        decimal /= 2;
    }

    reverse(binary.begin(), binary.end());

    return binary;
}

void ZadKcpp::zad3()
{
    int decimal;

    cout << "Podaj liczbe dziesietna: ";
    cin >> decimal;

    vector<int> binary = decToBin(decimal);

    cout << "Liczba binarna: ";
    for (int i = 0; i < binary.size(); ++i)
    {
        cout << binary[i];
    }
    cout << endl;
}


void ZadKcpp::zad4()
{
    float wynik1 = 3.14159;
    float wynik2 = 2.71828;
    float average = (wynik1 + wynik2) / 2;

    cout << "==================================================" << endl;
    cout << "Wynik naszego dzialania: " << setprecision(5) << fixed << wynik1 << " jest niepoprawny ale:" << endl;
    cout << setw(10) << setfill(' ') << "output: " << setw(8) << setfill(' ') << wynik1;
    cout << "    T: " << setw(7) << setfill(' ') << wynik2 << endl;
    cout << setw(10) << setfill('-') << "";
    cout << "    " << setw(10) << setfill('-') << "" << endl;
    cout << setprecision(4) << fixed;
    cout << "output1: " << setw(8) << setfill(' ') << wynik1;
    cout << "    T: " << setw(9) << setfill(' ') << wynik2 << endl;
    cout << "output2: " << setw(8) << setfill(' ') << wynik1;
    cout << "    T: " << setw(10) << setfill(' ') << wynik2 << endl;
    cout << "---------------------------------" << endl;
    cout << "average: " << setw(8) << setfill(' ') << average;
    cout << "    T: " << setw(10) << setfill(' ') << wynik2 << endl;
    cout << "==================================================" << endl;
}


void ZadKcpp::zad5()
{
    int number;
    cout << "Podaj liczbe: ";
    cin >> number;

    if (number % 2 == 0)
        cout << "Liczba jest parzysta." << endl;
    else
        cout << "Liczba jest nieparzysta." << endl;
}
