#include <iostream>
using namespace std;

const double ALIQUOTA = 22.0 / 100;

double totale_a_pagare(double imponibile) {
  return imponibile +
         imponibile * ALIQUOTA //< IVA
        ;
}

void applica_iva(double imp[], double tot[], int n) {
  for (int i = 0; i < n; i++) {
    // Ripeti per n volte
    tot[i] = totale_a_pagare(imp[i]);
  }
}

void stampa(double a[], int n) {
    cout << "[";
    if (n > 0)
        cout << a[0];
    for (int i = 1; i < n; i++) {
        cout << ", " << a[i];
    }
    cout << "]" << endl;
}

int main(void) {
  double imponibili[] = {1, 2, 3, 4, 5};
  double importi_ivati[5];
  applica_iva(imponibili, importi_ivati, 5);
  stampa(imponibili, 5);
  stampa(importi_ivati, 5);
  
  return 0;
}

