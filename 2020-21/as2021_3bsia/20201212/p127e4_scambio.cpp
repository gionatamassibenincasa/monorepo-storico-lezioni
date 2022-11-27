// Esercizio p. 127 n. 4
// Scambia i valori di due variabili
#include <iostream>
using namespace std;

int main () {
  int a = 1,
      b = 2,
      t;
  cout << "a: " << a
       << "\tb: " << b << endl;
  t = a;
  a = b;
  b = t;
  cout << "a: " << a
       << "\tb: " << b << endl;
  
  return 0;
}
