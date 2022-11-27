// Esercizio a p. 127 n. 1
// Dato un valore, calcola il doppio
#include <iostream>
using namespace std;

int main () {
  int numero,
      doppio;
  cout << "Immetti un numero: ";
  cin >> numero;
  doppio = numero * 2;
  cout << "Il doppio di " << numero
       << " e' " << doppio << endl;
       
  return 0;
}
