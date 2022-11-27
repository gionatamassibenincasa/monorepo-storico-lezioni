#include "biglietteria_automatica.h"
#include <iostream>
using namespace std;

template<class T>
BiglietteriaAutomatica<T>::BiglietteriaAutomatica(T prezzo) {
  m_prezzo = prezzo;
  m_saldo_corrente = 0;
  m_totale = 0;
  cout << "E' stata creata una macchina che stampa ticket se riceve almeno " 
       << prezzo << " EUR." << endl;
}

template<class T>
T BiglietteriaAutomatica<T>::prezzo() {
  return m_prezzo;
}

template<class T>
T BiglietteriaAutomatica<T>::saldoCorrente() {
  cout << "== Il saldo corrente e' " << m_saldo_corrente << "." << endl;
  return m_saldo_corrente;
}

template<class T>
void BiglietteriaAutomatica<T>::inserisciDenaro(T d){
  cout << "=> Immessa moneta da " << d << " EUR." << endl;
  m_saldo_corrente += d;
  m_totale += d;
  saldoCorrente();
}

template<class T>
void BiglietteriaAutomatica<T>::stampaBiglietto() {
  cout << "=> Richiesta di emissione del biglietto." << endl;
  if (m_saldo_corrente >= m_prezzo) {
    cout << "<= Biglietto emesso." << endl;
    m_saldo_corrente = 0;
    saldoCorrente();
  } else {
    cout << "== Inserire altre monete." << endl;
  }
}

// ISTANZIAZIONE ESPLICITA DEL TEMPLATE
template class BiglietteriaAutomatica<int>;
template class BiglietteriaAutomatica<double>;
