#include <iostream>
using namespace std;

long int fattoriale(unsigned int n) {
  /*
	return (n == 0)
    ? 1
    : n * fattoriale(n - 1);
  */
  if (n == 0) return 1;
  return n * fattoriale(n - 1);
}

int main() {
  const int valori[] = {0, 1, 2, 3, 4, 5, 10};
  for (auto v: valori) {
    cout << v << "! = " << fattoriale(v) << endl; 
  }

  return 0;
}