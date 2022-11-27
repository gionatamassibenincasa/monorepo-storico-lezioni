// Esercizio p. 127 n. 6
// Data l'età di 3 persone, calcola l'età media

#include <iostream>
using namespace std;

int main() {
  const int persone = 3;
  int accumulatore = 0;
  double media;

  for (int n_persona = 0; n_persona < persone; n_persona++) {
    int eta;
    cout << "Immetti l'età della persona n. " << (n_persona + 1) << ": ";
    cin >> eta;
    accumulatore = accumulatore + eta;
  }
  media = static_cast<double>(accumulatore) / persone;
  cout << "L'età media è di " << media << " anni." << endl;

  return 0;
}
