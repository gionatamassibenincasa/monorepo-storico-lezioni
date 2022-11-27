// Es. p. 127 n. 2
/* Dato il lato, trova il perimetro e l'area di un quadrato */
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
  double lato,
         perimetro,
         area;
  cout << "Inserisci il lato: ";
  cin >> lato;
  perimetro = lato * 4;
  area = lato * lato;
  cout << "Perimetro: " << perimetro << endl;
  cout << "Area: " << area << endl;

  return EXIT_SUCCESS;
}