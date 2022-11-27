/**
* Definizione dei metodi della classe Persona.
*
* @file Persona.cpp
* @author Massi Gionata 3B SIA
*/
#include "persona.h"
#include <string>
#include <iostream>
using namespace std;

Persona::Persona(std::string c, std::string n, int aa) {
  m_cognome = c;
  m_nome = n;
  m_annoDiNascita = aa;
}

std::string Persona::cognome() {
  return m_cognome;
}

std::string Persona::nome() {
  return m_nome;
}

int Persona::annoDiNascita() {
  return m_annoDiNascita;
}

void Persona::annoDiNascita(int aa) {
  m_annoDiNascita = aa;
}

void Persona::stampaAnagrafica() {
  cout << nome() << " " << cognome()
       << " " << annoDiNascita() << endl;
}
