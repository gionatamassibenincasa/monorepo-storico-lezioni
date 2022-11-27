/** Dati i coefficienti di un'equazione di secondo grado, calcolarne tre luoghi geometrici */
#include <iostream>
#include <cmath>
using namespace std;

void vertice(double a, double b, double c) {
  const double x = -b / 2 / a;
  const double y = c - b * b / a / 4;
  cout << "Vertice: (" << x << ", " << y << ")" << endl;
}

void fuoco(double a, double b, double c) {
  const double x = -b / 2 / a;
  const double y = (1 - b * b) / a / 4 - c / a / a;
  cout << "Fuoco: (" << x << ", " << y << ")" << endl;
}

void intesezioneAsseAscisse(double a, double b, double c) {
  const double delta = 4*a*c;
  if (delta >= 0) {
    const double x1 = -b / a / 2 - sqrt(delta) / a / 2;
    const double x2 = -b / a / 2 + sqrt(delta) / a / 2;
    cout << "y = 0: (" << x1 << ", " << x2 << ")" << endl;
  } else {
    cout << "non ci sono intesezioni con l'asse delle ascisse" << endl;
  }
}

int main() {
  double a, b, c;
  cout << "Immetti i coefficienti a, b e c di y = a*x^2 + b*x+c. Termina con Invio." << endl;
  cin >> a;
  cin >> b;
  cin >> c;
  vertice(a, b, c);
  fuoco(a, b, c);
  intesezioneAsseAscisse(a, b, c);

  return 0;
}