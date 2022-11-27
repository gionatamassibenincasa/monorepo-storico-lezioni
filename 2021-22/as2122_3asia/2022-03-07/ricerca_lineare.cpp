#include <iostream>
#include <cstdlib>
using namespace std;

const int NON_PRESENTE = -1;

/** Ricerca lineare
  * @param A array nel quale ricercare il valore v
  * @param n numero di elementi dell'array A
  * @param v il valore da cercare
  * @return se esiste un indice i tale che A[i] = v, allora i, altrimenti NON_PRESENTE
  */
int ricerca_lineare(int A[], int n, int v);

int main() {
  const int N = 100; //< numero di elementi dell'array
  const int M = 250; //< valore massimo nell'array
  int array[N];
  // inserisce dei valori casuali nell'array compresi tra 1 e M
  for (int i = 0; i < N; i++) array[i] = rand() % M + 1;

  for (int tentativi = 0; tentativi < 3; tentativi++) {
    cout << "Tentativo n. " << (tentativi + 1) << endl;
    const int valore = (rand() % M) + 1;
    ricerca_lineare(array, N, valore);
    cout << endl;
  }

  return 0;
}

int ricerca_lineare(int A[], int n, int v)
{
  cout << "Cerco il valore " << v << endl;
  bool trovato = false;
  int i;
  for (i = 0; i < n && !trovato; i++) {
    if (v == A[i]) {
      trovato = true;
    }
  }
  if (!trovato) {
    cout << "NON TROVATO" << endl;
    return NON_PRESENTE;
  }
  cout << "Trovato in " << i << " confronti" << endl;
  return i - 1;
}
