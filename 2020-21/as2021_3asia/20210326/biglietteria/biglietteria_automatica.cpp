#include "biglietteria_automatica.h"
#include <iostream>
using namespace std;

BiglietteriaAutomatica::BiglietteriaAutomatica(double prezzo) {
  m_prezzo = prezzo;
  m_saldo_corrente = 0;
  m_totale = 0;
  cout << "E' stata creata una macchina che stampa ticket se riceve almeno " 
       << prezzo << " EUR." << endl;
}

double BiglietteriaAutomatica::prezzo() {
  return m_prezzo;
}

double BiglietteriaAutomatica::saldoCorrente() {
  cout << "== Il saldo corrente e' " << m_saldo_corrente << "." << endl;
  return m_saldo_corrente;
}

void BiglietteriaAutomatica::inserisciDenaro(double d){
  cout << "=> Immessa moneta da " << d << " EUR." << endl;
  m_saldo_corrente += d;
  m_totale += d;
  saldoCorrente();
}

void BiglietteriaAutomatica::stampaBiglietto() {
  cout << "=> Richiesta di emissione del biglietto." << endl;
  if (m_saldo_corrente >= m_prezzo) {
    cout << "<= Biglietto emesso." << endl;
    m_saldo_corrente = 0;
    saldoCorrente();
  } else {
    cout << "== Inserire altre monete." << endl;
  }
}
