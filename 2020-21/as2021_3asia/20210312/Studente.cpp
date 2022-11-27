#include "Studente.h"
#include <string>
#include <iostream>
using namespace std;

Studente::Studente(int m, string n, string c) {
  matricola = m;
  nome = n;
  cognome = c;
}

void Studente::presentati() {
  cout << nome << " "
       << cognome << " "
       << matricola << endl;
}