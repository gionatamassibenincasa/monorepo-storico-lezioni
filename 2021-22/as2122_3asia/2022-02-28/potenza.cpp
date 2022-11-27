#include <iostream>
using namespace std;

int potenza_ric_lin(int base, int esp);
int potenza_ite_lin(int base, int esp);
int potenza_ric_log(int base, int esp);
int potenza_ite_log(int base, int esp);

int (*funzionePotenza[])(int, int) = {potenza_ric_lin, potenza_ite_lin,
                                      potenza_ric_log, potenza_ite_log};

int main() {
  const int b = 2;
  const int e[] = {0, 1, 2, 10};
  const int atteso[] = {1, 2, 4, 1024};
  for (int i = 0; i < 4; i++) {
    int (*potenza)(int, int) = funzionePotenza[i];
    for (int caso = 0; caso < sizeof(e) / sizeof(int); caso++) {
      cout << "funzionePotenza[" << i << "](" << b << " , " << e[caso]
           << ") = " << potenza(b, e[caso]) << " [atteso: " << atteso[caso]
           << "]" << endl;
    }
    cout << endl;
  }
  return 0;
};

int potenza_ric_lin(int base, int esp) {
  if (esp == 0)
    return 1;
  return base * potenza_ric_lin(base, esp - 1);
}

int potenza_ite_lin(int base, int esp) {
  int acc = 1;
  while (esp-- > 0) {
    acc *= base;
  }
  return acc;
}

int potenza_ric_log(int base, int esp) {
  if (esp == 0)
    return 1;
  if (esp % 2 == 0)
    return potenza_ric_log(base * base, esp / 2);
  return base * potenza_ric_log(base, esp - 1);
}

int potenza_ite_log(int base, int esp) {
  int a = 1;
  while (esp > 0) {
    if (esp % 2 == 0) {
      base *= base;
      esp /= 2;
    } else {
      a *= base;
      esp--;
    }
  }

  return a;
}
