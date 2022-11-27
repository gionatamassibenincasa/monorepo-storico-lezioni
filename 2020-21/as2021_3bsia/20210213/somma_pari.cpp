#include <iostream>
using namespace std;

bool pari(int n) {
  return (n % 2 == 0);
}

int somma_pari(int a[], int n) {
  int accumulatore = 0;
  for (int i = 0; i < n; i++) {
    if (pari(a[i]))
      accumulatore += a[i];
  }
  return accumulatore;
}

int main(void) {
  int a[] = {1, 2, 3, 4, 5};
  cout << somma_pari(a, 5) << endl;
  
  return 0;
}

