#include "biglietteria_automatica.h"
#include <iostream>
using namespace std;

int main() {
  BiglietteriaAutomatica b(1.20);
  b.inserisciDenaro(0.2);
  b.inserisciDenaro(0.5);
  b.stampaBiglietto();
  b.inserisciDenaro(0.5);
  b.stampaBiglietto();
  b.stampaBiglietto();

  return 0;
}
