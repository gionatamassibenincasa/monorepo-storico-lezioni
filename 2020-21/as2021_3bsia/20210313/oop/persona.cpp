#include "persona.h"
#include <string>
#include <iostream>
using namespace std;

Persona::Persona(string n, string c) {
  nome = n;
  cognome = c;
}

void Persona::stampaPersona() {
  cout << "Nome: " << nome 
    << "\t" << "Cognome: "
    << cognome << endl;
}