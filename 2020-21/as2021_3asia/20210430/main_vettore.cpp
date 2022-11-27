#include <iostream>
#include "vettore.h"
using namespace std;

int main() {
  Vettore<int> vi(10);
  for (int i = 0; i < 10; i++)
    if (!vi.inserisciInCoda(i))
      cout << "Errore" << endl;
  
  for (int i = 0; i < 10; i++)
    cout << vi.elemento(i) << endl;

  Vettore<double> vd(10);
  for (int i = 0; i < 10; i++)
    if (!vd.inserisciInCoda(static_cast<double>(i) / 3))
      cout << "Errore" << endl;
  
  for (int i = 0; i < 10; i++)
    cout << vd.elemento(i) << endl;

  return 0;
}