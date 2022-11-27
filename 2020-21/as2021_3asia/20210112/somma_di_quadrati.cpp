#include <iostream>
using namespace std;
#include "quadrato.h"

double somma_di_quadrati(double x, double y);
double somma_di_quadrati(double x, double y) {
  return quadrato(x) + quadrato(y);
}

int main() {
  double ret;
  ret = somma_di_quadrati(3, 4);
  cout << "La somma dei quadrati di 3 e 4: " << ret << endl;

  return 0;
}
