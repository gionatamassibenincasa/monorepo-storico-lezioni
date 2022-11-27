#include <iostream>
#include <cassert>
using namespace std;

double quadrato(double x) {
  return x * x;
}

double cubo(double x) {
  return x * quadrato(x);
}

double valore_assoluto(double x) {
  return (x >= 0) ?
          x :
          -x;
  /*
  if (x >= 0)
    return x;
  else
    return -x;
  */
}

double valor_medio(double x, double y) {
  return (x + y) / 2;
}

double somma_di_cubi(double x, double y) {
  return cubo(x) + cubo(y);
}

int main() {
  cout << "Verifica della funzione quadrato" << endl;
  assert(quadrato(0) == 0);
  assert(quadrato(2) == 4);
  cout << "Verifica della funzione cubo" << endl;
  assert(cubo(-1) == -1);
  assert(cubo(0) == 0);
  assert(cubo(2) == 8);
  cout << "Verifica della funzione valor_medio" << endl;
  assert(valor_medio(-1, 1) == 0);
  assert(valor_medio(1, 1) == 1);
  assert(valor_medio(1, 2) == 1.5);
  cout << "Verifica della funzione valore_assoluto" << endl;
  assert(valore_assoluto(-1) == 1);
  assert(valore_assoluto(0) == 0);
  assert(valore_assoluto(2) == 2);
  cout << "Verifica della funzione somma_di_cubi" << endl;
  assert(somma_di_cubi(0, 0) == 0);
  assert(somma_di_cubi(-1, 1) == 0);
  cout << endl << "TUTTI I TEST SUPERATI" << endl;

  return 0;
}
