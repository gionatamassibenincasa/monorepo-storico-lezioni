#include <cstdlib>
#include <iostream>
using namespace std;

/** Stampa l'array A di n elementi
 * @param A array di valori interi
 * @param n numero di elementi di A
 */
void stampa(int A[], int n) {
  cout << "[";
  if (n > 0)
    cout << A[0];
  for (int i = 1; i < n; i++) {
    cout << ", " << A[i];
  }
  cout << "]" << endl;
}

/** Ricerca il valore v nell'array ordinato A
 * @param A array di valori interi
 * @param n numero di elementi di A
 * @param v valore da cercare
 * @return indice i di A tale che A[i] = v
 */
int ricerca_binaria(int A[], int n, int v) {
  int sinistra = 0, destra = n - 1;
  while (sinistra <= destra) {
    int somma = sinistra + destra;
    int centro = somma % 2 == 0 ? somma / 2 : (somma - 1) / 2;
    if (A[centro] > v) {
      destra = centro - 1;
    } else if (A[centro] < v) {
      sinistra = centro + 1;
    } else { // A[centro] == v
      return centro;
    }
  }

  return -1;
}

void generaSequenzaCasualeOrdinata(int A[], int n) {
  srand(time(0));
  A[0] = rand() % 5;
  for (int i = 1; i < n; i++) {
    int incremento = 1 + rand() % 5;
    A[i] = A[i - 1] + incremento;
  }
}

int main() {
  const int len = 9;
  int sequenza[len];
  generaSequenzaCasualeOrdinata(sequenza, len);
  stampa(sequenza, len);
  for (int i = 0; i < sequenza[len - 1]; i++) {
    int posizione = ricerca_binaria(sequenza, len, i);
    if (posizione == -1) {
      cout << "Il valore " << i << " non è presente" << endl;
    } else {
      cout << "Il valore " << i << " è in posizione " << posizione << " ("
           << sequenza[posizione] << ")" << endl;
    }
  }
  return EXIT_SUCCESS;
}