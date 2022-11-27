#include "Persona.h"
#include <iostream>
using namespace std;

// Costruttore
Persona::Persona(std::string c, std::string n, int aa): m_cognome{c}, m_nome{n}, m_anno_di_nascita{aa} {}

// Accessor in lettura, getter
std::string Persona::cognome() const {
  return m_cognome;
}

std::string Persona::nome() const {
  return m_nome;
}

int Persona::annoDiNascita() const {
  return m_anno_di_nascita;
}

// Accessor in scrittura, setter
void Persona::annoDiNascita(int aa) {
  m_anno_di_nascita = aa;
}

void Persona::stampa_anagrafica() const {
  cout << "Cognome\tNome\tAnno di nascita" << endl
       << m_cognome << "\t" << m_nome << "\t" << m_anno_di_nascita
       << endl;
}