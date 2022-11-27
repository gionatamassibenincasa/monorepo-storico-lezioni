// Esercizio p. 127 n. 5
/* Calcola l'ipotenusa noti i cateti */
#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double c1, //< c1 è uno dei due cateti 
         c2, //< c2 è uno dei due cateti
         ip; //< ip è uno l'ipotenusa
  cout << "Immetti la misura del primo cateto: ";
  cin >> c1;
  cout << "Immetti la misura del secondo cateto: ";
  cin >> c2;
  ip = sqrt(pow(c1, 2) + pow(c2, 2));
  cout << "L'ipotenusa misura: " << ip << endl;
  
  return 0;
}