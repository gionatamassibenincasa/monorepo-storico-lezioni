#include <iostream>
using namespace std;

long int potenza(int base, int esponente) {
  long int a = 1;
  while (esponente > 0) {
    if (esponente % 2 == 0) {
      base *= base;
      esponente /= 2;
    } else {
      a *= base;
      esponente--;
    }
  }

  return a;
}

double somma_inversi_potenze() {
  double accumulatore = 0;
  double addendo = 2;
  do {
    addendo /= 2;
    accumulatore += addendo;
  } while (addendo >= 1E-16);
  
  return accumulatore;
}

int main() {
  cout << somma_inversi_potenze() << endl;
}