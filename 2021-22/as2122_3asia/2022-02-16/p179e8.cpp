/** Scrivi una funzione che abbia come parametri
 * il prezzo di listino e la percentuale di sconto
 * e restituisca il prezzo scontato
 */
#include <cassert>
#include <cmath>
#include <iostream>
using namespace std;

double applicaSconto(double prezzoListino, double percentualeSconto) {
  return prezzoListino * (1 - percentualeSconto / 100);
}

void test() {
  assert(fabs(applicaSconto(100, 30) - 70) < 1e-6);
  assert(fabs(applicaSconto(100, 0) - 100) < 1e-6);
  assert(fabs(applicaSconto(100, 100) - 0) < 1e-6);
}

int main() {
  double prezzoListino;
  double percentualeSconto;
  double prezzoScontato;

  cout << "inserisci il prezzo di listino" << endl;
  cin >> prezzoListino;
  cout << "inserisci la percentuale dello sconto" << endl;
  cin >> percentualeSconto;
  cout << "Prezzo scontato: " << applicaSconto(prezzoListino, percentualeSconto)
       << endl;

  return 0;
}