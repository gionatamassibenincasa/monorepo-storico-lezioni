#include "biglietteria_automatica.h"
#include <iostream>
using namespace std;

int main() {
  BiglietteriaAutomatica<float> b(1.20);
  b.inserisciDenaro(0.2);
  b.inserisciDenaro(0.5);
  b.stampaBiglietto();
  b.inserisciDenaro(0.5);
  b.stampaBiglietto();
  b.stampaBiglietto();

  BiglietteriaAutomatica<int> bi(12);
  bi.inserisciDenaro(2);
  bi.inserisciDenaro(5);
  bi.stampaBiglietto();
  bi.inserisciDenaro(5);
  bi.stampaBiglietto();
  bi.stampaBiglietto();


  return 0;
}
