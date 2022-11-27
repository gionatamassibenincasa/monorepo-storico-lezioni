/**Acquisisce lato del quadrato e stampa area e perimetro */
#include <iostream>
#include <string>
using namespace std;

void gestisciQuadrato() {
  double lato;
  cout << "Immetti il lato del quadrato: ";
  cin >> lato;
  double quadrato = lato * lato;
  double perimetro = 4 * lato;
  cout << "Perimetro: " << perimetro << endl;
  cout << "Area: " << quadrato << endl;
}

int main() {
  gestisciQuadrato();

  return 0;
}