// Esercizio a p. 127 n. 2
/* Dato il lato, calcola perimetro e area
   di un quadrato */
#include <iostream>
using namespace std;

int main () {
  double l, //< l lato del quadrato
         P, //< p perimetro del quadrato
         A; //< A area del quadrato
  cout << "Immetti il lato del quadrato: ";
  cin >> l;
  P = 4 * l;
  A = l * l;
  cout << "Il perimetro e': " << P
       << "\tl'area e': " << A << endl;

  return 0;
}
