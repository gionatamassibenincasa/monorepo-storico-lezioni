/**
 * Definizione dei metodi della classe Autoveicolo. 
 *
 * @file Autoveicolo.cpp
 * @author Massi Gionata 3B SIA
 */
#include "autoveicolo.h"
#include <string>
#include <iostream>
using namespace std;

Autoveicolo::Autoveicolo(std::string mar, std::string mod, int vm) {
  m_marca = mar;
  m_modello = mod ;
  m_velocitaMassima = vm;
  m_statoMotore = StatoMotore::SPENTO;
  m_velocita = 0;
}

std::string Autoveicolo::marca() {
  return m_marca;
}

std::string Autoveicolo::modello() {
  return m_modello;
}

int Autoveicolo::velocitaMassima() {
  return m_velocitaMassima;
}

int Autoveicolo::velocita() {
  return m_velocita;
}

StatoMotore Autoveicolo::statoMotore() {
  return m_statoMotore;
}

void Autoveicolo::accendi() {
  m_statoMotore = StatoMotore::ACCESO;
}

void Autoveicolo::spegni() {
    m_statoMotore = StatoMotore::SPENTO;
}

void Autoveicolo::accelera(int d) {
  if (m_statoMotore == StatoMotore::ACCESO) {
    int nv = m_velocita + d;
    if (nv <= m_velocitaMassima)
      m_velocita = nv;
    else
      m_velocita = m_velocitaMassima;
  }
}

void Autoveicolo::frena(int d) {
  if (m_statoMotore == StatoMotore::ACCESO) {
    int nv = m_velocita - d;
    if (nv >= 0)
      m_velocita = nv;
    else
      m_velocita = 0;
  }
}

void Autoveicolo::stampa() {
  cout << ((m_statoMotore == ACCESO)
          ? "ACCESO "
          : "SPENTO ")
      << m_velocita << endl;
}
