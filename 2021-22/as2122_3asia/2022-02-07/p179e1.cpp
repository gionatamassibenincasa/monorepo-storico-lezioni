/** Legge una riga da tastiera e la scrive 3 volte */
#include <iostream>
#include <string>
using namespace std;

void ripetiStringa(string s, int ripetizioni = 3) {
  for(auto i = 0; i < ripetizioni; i++)
    cout << s << endl;
}

int main() {
  string testo;
  cout << "Immetti un testo. Termina con Invio." << endl;
  getline(cin, testo); //cin >> testo;
  ripetiStringa(testo);

  return 0;
}