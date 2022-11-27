#include <iostream>

using namespace std;

double potenza(double base, unsigned int esp) {
  double acc = 1.0;
  while (esp > 0) {
    if (esp % 2 == 0) {
      base *= base;
      esp /= 2;
    } else {
      acc *= base;
      esp--;
    }
  }

  return acc;
}

int main() {
  cout << "2^0  = " << potenza(2.0, 0) << endl;
  cout << "2^1  = " << potenza(2.0, 1) << endl;
  cout << "2^10 = " << potenza(2.0, 10) << endl;

  return 0;
}