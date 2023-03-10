/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.09
 * \brief Instrukcja Switch w C++
 * v0.01
 */

#include <iostream>
using namespace std;

int main()
{

  //Uzycie tylko duzych liter   
  char var = 0;

  cout << "Wybierz: [O]la || [M]arzena || [A]nia: ";
  cin >> var;

  switch(var) {	
    case 'O':
      cout << "Wybrano Ole" << endl;
      break;
    case 'M':
      cout << "Wybrano Marzene" << endl;
      break;
    case 'A':
      cout << "Wybrano Anie" << endl;
      break;
    default:
      cout << "Nie wybrano zadnej dziewczyny" << endl;
  }

  return 0;
}
