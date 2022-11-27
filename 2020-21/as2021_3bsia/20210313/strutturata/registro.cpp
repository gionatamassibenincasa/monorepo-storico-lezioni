#include "registro.h"
#include <string>
#include <iostream>

using namespace std;

struct Persona {
  string nome;
  string cognome;
};

const int maxPersone = 10;
Persona registro[maxPersone];
int prossimaPosizione = 0;

void inserisciDaTerminale() {
  if (prossimaPosizione >= maxPersone) {
    cerr << "Superato il numero massimo di righe del registro" << endl;
    return;
  }
  // Inserisco la prossima persona
  cout << "Nome: ";
  cin >> registro[prossimaPosizione].nome;
  cout << "Cognome: ";
  cin >> registro[prossimaPosizione].cognome;
  prossimaPosizione++;
}

void stampaAnagrafica() {
  for (int i = 0; i < prossimaPosizione; i++) {
    cout << "Nome: " << registro[i].nome << "\t" 
         << "Cognome: " << registro[i].cognome << endl;
  }
}
