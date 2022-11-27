// Esercizio p. 127 n. 4
/* Scambia i valori di due variabili */

#include <iostream>
using namespace std;

int main() {
  int x = 1,
      y = 2,
      t;

  cout << "x: " << x << "\ty: " << y << endl;
  // Copio nella variabile temporanea il valore della prima variabile
  t = x;
  x = y;
  y = t;
  cout << "Dopo lo scambio" << endl;
  cout << "x: " << x << "\ty: " << y << endl;

  return 0;
}