// Richiedi il mese fino ad ottenere un valore tra 1 e 12 estr. incl.
// Ripetizione post-condizionale
// Iterazione con controllo in coda
#include <iostream>
using namespace std;

int main() {
  int mese;

  do {
    cout << "Immetti il mese (1..12): ";
    cin >> mese;
  } while (! (mese >= 1 && mese <= 12) );
  // ! (mese >= 1 && mese <= 12) è equivalente a
  // mese < 1 || mese > 12
  cout << "Hai immesso il mese n. " << mese << endl;

  return 0;
}