// Letti due numeri interi, stamparli in ordine
#include <iostream>
using namespace std;

int main() {
  int n, m;
  cout << "Immetti un numero: ";
  cin >> n;
  cout << "Immetti un altro numero: ";
  cin >> m;
  // Costrutto di alternativa
  // Se n è minore o uguale a m (condizione)
  if (n <= m) {
    // allora ... (blocco di istruzioni se cond. vera)
    cout << n << endl << m << endl;
  } else {
    // altrimenti ... (blocco di istruzioni se cond. falsa)
    cout << m << endl << n << endl;
  }

  return 0;
}
