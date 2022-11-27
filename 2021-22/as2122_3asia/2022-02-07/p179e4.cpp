/** Stampa i 5 numeri successivi a quello data */
#include <iostream>
#include <string>
using namespace std;

void stampaSuccessivi(int n, int successori = 5) {
  for(auto i = 1; i <= successori; i++)
    cout << n + i << endl;
}

int main() {
  int numero;
  cout << "Immetti un numero. Termina con Invio." << endl;
  cin >> numero;
  stampaSuccessivi(numero);

  return 0;
}