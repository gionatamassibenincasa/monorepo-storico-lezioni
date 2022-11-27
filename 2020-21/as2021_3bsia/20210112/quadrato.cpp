#include <iostream>
using namespace std;

// Prototipo
double quadrato(double x);
double somma_di_quadrati(double x, double y);

// Definizione della funzione
// Per calcolare il quadrato 
//                     v di un numero
double quadrato(double x) {
  return x * x;
  //     ^ moltiplico quel numero per se stesso
}

double somma_di_quadrati(double x, double y) {
  return quadrato(x) + quadrato(y);
}


int main(void) {
  cout << "Il quadrato di 5 è: " << quadrato(5) << endl;
  cout << "Il quadrato di (5 + 1) è: " << quadrato(5 + 1) << endl;
  cout << "Il quadrato di quadrato(2) è: " << quadrato(quadrato(2)) << endl;
  cout << "La somma dei quadrati di 3 e di 4 è: " << somma_di_quadrati(3, 4) << endl;
  
  return 0;
}

//                 a) (5 + 1) * (5 + 1) -> 6 * 6 -> 36
// quadrato(5 + 1)
//                 b) 6 * 6 -> 36                     !!!

// quadrato(quadrato(2)) -> quadrato (2 * 2) -> quadrato (4) -> 4 * 4 -> 16
