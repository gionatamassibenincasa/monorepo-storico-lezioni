#include "Persona.h"
#include <iostream>
using namespace std;

int main() {
  const int n_persone = 2;
  Persona persone[n_persone];
  for (int ip = 0; ip < n_persone; ip++) {
    // legge i dati
    string n, c;
    int a;
    cout << "Nome: ";
    cin >> n;
    cout << "Cognome: ";
    cin >> c;
    cout << "Anno di nascita: ";
    cin >> a;
    // copio i dati in una nuova variabile di tipo Persona
    persone[ip] = Persona(c, n, a);
  }

  if (persone[0].annoDiNascita() == persone[1].annoDiNascita()) {
      // se le due persone sono coetanee
      cout << persone[0].nome() << " coetaneo di " << persone[1].nome() << endl;
    } else // In caso contrario, il programma deve stampare i dati anagrafici della persona più giovane.
    if (persone[0].annoDiNascita() < persone[1].annoDiNascita()) {
      persone[1].stampa_anagrafica();
    } else {
      persone[0].stampa_anagrafica();
    }

    return 0;
}