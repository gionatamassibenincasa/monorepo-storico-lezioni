#include "vettore.h"

template <class T>
Vettore<T>::Vettore(int d) {
   p = new T[d];
   dim = d;
   prossimaPosizione = 0;
};

template <class T>
Vettore<T>::~Vettore() {
   delete[] p;
};

template <class T>
T  Vettore<T>::elemento(int pos) {
  return p[pos];
}

template <class T>
bool Vettore<T>::inserisciInCoda(T valore) {
  if (prossimaPosizione < dim) {
    p[prossimaPosizione] = valore;
    prossimaPosizione++;
    return true;
  } else {
    return false;
  }
}

// Istanziazione del template
template class Vettore<int>;
template class Vettore<double>;