// Esercizio a p. 127 n. 3
/* Dato il raggio, calcola circonferenza
   e area del cerchio */
#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double r, //< r raggio
         P, //< p circonferenza
         A; //< A area
  cout << "Immetti il raggio: ";
  cin >> r;
  P = 2 * M_PI * r;
  A = M_PI * r * r;
  cout << "Il perimetro e': " << P
       << "\tl'area e': " << A << endl;

  return 0;
}
