#include <cassert>
#include <iostream>
using namespace std;

double media(int numero, double somma) {
  assert(numero > 0);
  return somma / numero;
}
int main() {
  int n;
  double somma;
  cout << "inserisci la somma" << endl;
  cin >> somma;
  n = 0;
  while (n <= 0) {
    cout << "inserisci il numero dei valori" << endl;
    cin >> n;
  }

  cout << "la media è " << media(n, somma) << endl;

  return 0;
}