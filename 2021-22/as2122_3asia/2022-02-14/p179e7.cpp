#include <iostream>
using namespace std;

int eta(int annoNascita, int annoCorrente = 2022) {
  return annoCorrente - annoNascita;
}
int main() {
  int annoNascita;
  cout << "Inserisci anno di nascita: " << endl;
  cin >> annoNascita;
  cout << "la sua età è " << eta(annoNascita) << endl;
  return 0;
}
