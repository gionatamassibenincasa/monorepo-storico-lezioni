// Esercizio p. 127 n. 3
/* Dato il raggio, calcola la circonferenza e l'area del cerchio */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double raggio, circonferenza, area;
  cout << "Inserisci il raggio: ";
  cin >> raggio;
  circonferenza = 2 * M_PI * raggio;
  area = M_PI * raggio * raggio;
  cout << "Circonferenza: " << circonferenza << endl;
  cout << "Area: " << area << endl;


  return 0;
}