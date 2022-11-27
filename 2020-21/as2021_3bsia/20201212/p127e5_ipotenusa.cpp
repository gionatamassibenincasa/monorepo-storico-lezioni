// Esercizio a p. 127 n. 5
/* Dati i cateti, calcola l'ipotenusa */
#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double c1, //< cateto
         c2, //< altro cateto
         ip; //< ipotenusa
  cout << "Immetti un cateto: ";
  cin >> c1;
  cout << "Immetti l'altro cateto: ";
  cin >> c2;
  ip = sqrt(pow(c1, 2) + pow(c2, 2));
  cout << "L'ipotenusa e': " << ip << endl;

  return 0;
}
