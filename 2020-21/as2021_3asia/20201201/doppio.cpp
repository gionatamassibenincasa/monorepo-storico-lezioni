// Calcola il doppio di un numero fornito da tastiera
#include <iostream>
using namespace std;

int main() {
  int numero;
  int doppio;
  cout << "Immetti un numero" << endl;
  cin >> numero;
  doppio = numero * 2;

  std::cout << "Il doppio di " << numero
            << " è " << doppio << endl;
}