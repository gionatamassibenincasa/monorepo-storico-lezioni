#include <iostream>

using namespace std;

double potenza(double base, unsigned int esp) {
  if (esp == 0)
    return 1;
  if (esp % 2 == 0) {
    double b1 = potenza(base, esp / 2);
    return b1 * b1;
  }
  return base * potenza(base, esp - 1);
}

int main() {
  cout << "2^0  = " << potenza(2.0, 0) << endl;
  cout << "2^1  = " << potenza(2.0, 1) << endl;
  cout << "2^10 = " << potenza(2.0, 10) << endl;

  return 0;
}