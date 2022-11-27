#include <iostream>
using namespace std;

double radq(double);
double radq_iterazione(double, double, double);
bool sufficientemente_accurata(double, double, double);
double quadrato(double);
double valor_medio(double, double);


int main() {
  double x;
  cout << "Immetti il numero di cui estrarre la radice quadrata: ";
  cin >> x;
  cout << "radq(" << x << ") = " << radq(x) << endl;

  return 0;
}

/** La radice quadrata del radicando
 *
 * @param radicando il radicando
 * @return la radice quadrata
 */
double radq(double radicando) {
  double a, b;
  cout << "Estremo sinistro: ";
  cin >> a;
  cout << "Estremo destro: ";
  cin >> b;
  radq_iterazione(radicando, a, b);
}

/** L'iterazione del metodo
 *
 * @param radicando il radicando
 * @param a estremo sinistro dell'intervallo di incertezza
 * @param b estremo destro dell'intervallo di incertezza
 * @return la radice quadrata
 */
double radq_iterazione(double radicando, double a, double b) {
  double x = valor_medio(a, b);
  if (sufficientemente_accurata(a, b, 1E-6))
    return x;
  if ((quadrato(a) - radicando) * (quadrato(x) - radicando)  >= 0)
    return radq_iterazione(radicando, x, b);
  else
    return radq_iterazione(radicando, a, x);
}

/** L'intervallo [a, b] è sufficientemente piccolo?
 *
 * @param a estremo sinistro dell'intervallo di incertezza
 * @param b estremo destro dell'intervallo di incertezza
 * @return l'intevallo è minore della tolleranza
 */
bool sufficientemente_accurata(double a, double b, double tolleranza) {
  return (b - a < tolleranza);
}

/** Restituisce la seconda potenza di un numero
 *
 * @param x Il numero
 * @return $x^2$
 */
double quadrato(double x) {
  return x * x;
}

/** Determina il valore medio tra due numeri
 *
 * @param x Il primo numero
 * @parm y Il secondo numero
 * @return Il valor medio tra x e y
 */
double valor_medio(double x, double y) {
  return (x + y) / 2;
}
