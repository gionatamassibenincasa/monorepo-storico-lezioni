#include "biglietteria_automatica.h"
#include <iostream>
using namespace std;

int main() {
  BiglietteriaAutomatica<double> b(1.20);
  b.inserisciDenaro(0.2);
  b.inserisciDenaro(0.5);
  b.stampaBiglietto();
  b.inserisciDenaro(0.5);
  b.stampaBiglietto();
  b.stampaBiglietto();

  BiglietteriaAutomatica<int> bi(120);
  bi.inserisciDenaro(20);
  bi.inserisciDenaro(50);
  bi.stampaBiglietto();
  bi.inserisciDenaro(50);
  bi.stampaBiglietto();
  bi.stampaBiglietto();

  
  return 0;
}
