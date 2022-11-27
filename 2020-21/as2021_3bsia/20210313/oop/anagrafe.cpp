#include "anagrafe.h"
#include <string>
#include <iostream>
using namespace std;

Anagrafe::Anagrafe() {
  prossimaPosizione = 0;
}

void Anagrafe::inserisciDaTerminale() {
  if (prossimaPosizione >= maxPersone) {
      cerr << "Superato il numero massimo di righe del registro" << endl;
      return;
  }
  string n, c;
  cout << "Nome: ";
  cin >> n;
  cout << "Cognome: ";
  cin >> c;
  registro[prossimaPosizione] = Persona(n, c);
  prossimaPosizione++;
}
  
void Anagrafe::stampaAnagrafica() {
  for (int i = 0; i < prossimaPosizione; i++) {
    registro[i].stampaPersona();
  }
}