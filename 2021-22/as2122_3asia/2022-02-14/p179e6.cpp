#include <iostream>
using namespace std;

void ordina_selezione(int A[], int n) {
  for (int ins = 0; ins < n - 1; ins++) {
    int idx_min = ins;
    for (int j = ins + 1; j < n; j++) {
      if (A[idx_min] > A[j])
        idx_min = j;
    }
    // A[idx_min] contiene il valore più piccolo
    // dell'array da A[ins] a A[n-1]
    int tmp = A[ins];
    A[ins] = A[idx_min];
    A[idx_min] = tmp;
  }
}

void stampa_array(int A[], int n) {
  cout << "{";
  if (n != 0)
    cout << A[0];
  for (int i = 1; i < n; i++) {
    cout << ", " << A[i];
  }
  cout << "}" << endl;
}

int main() {
  const int n_persone = 3;
  int eta[n_persone];
  for (int i = 0; i < n_persone; ++i) {
    cout << "Inserisci l'età: ";
    cin >> eta[i];
  }
  ordina_selezione(eta, sizeof(eta) / sizeof(int));
  stampa_array(eta, sizeof(eta) / sizeof(int));

  return 0;
}
