#include <iostream>
#include <cassert>
using namespace std;

double potenza(double base, int esponente) {
  /*
    b^e = b * b * b * b * ... * b =
        = 1 * b * b * b * b * ... * b = 
        = (1) * b * b * b * b * ... * b =    [1]
        = (1 * b) * b * b * b * ... * b =
        = (1 * b * b) * b * b * ... * b =
        .
        .
        .
        = (1 * b * b * b * b * ... * b)
    Chiamo ogni volta risultato quello che è
    tra parentesi tonde a partire da [1]
  */
  assert (esponente >= 0);
  double risultato = 1.0;
  for(int i = 0; i < esponente; i++) {
    risultato *= base;
    cout << "risultato: " << risultato << endl;
    cout << "i + 1: " << i + 1 << endl;
  }
  return risultato;
}

double pot(double base, int esponente) {
  /*
           |-  se e == 0, 1
    b^e = <
           |-  altrimenti b * b^(e-1)
  */
  cout << "potenza (b = " << base  << ", e = " << esponente << ")" << endl;
  return (esponente == 0) ?
          1.0 :
          base * pot(base, esponente - 1);
}

int main() {
  // assert(potenza(0, 10) == 0);
  // assert(potenza(1, 10) == 1);
  // assert(potenza(10, 0) == 1);
  assert(potenza(2, 5) == 32);
  assert(pot(2, 5) == 32);

}