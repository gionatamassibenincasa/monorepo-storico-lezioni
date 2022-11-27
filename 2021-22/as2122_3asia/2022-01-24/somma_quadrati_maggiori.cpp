#include <iostream>
using namespace std;

int quadrato(int x) {
  return x * x;
}

int somma_quadrati_maggiori(int a, int b, int c) {
	int max1, max2, min1;
  if (a >= b) {
    max1 = a; min1 = b;
  } else {
    max1 = b; min1 = a;
  }
  if (c >= min1) max2 = c;
  else max2 = min1;
  return quadrato(max1) + quadrato(max2);
}

int main() {
  int valori[][3] = {
    {1, 2, 3},
    {1, 3, 2},
    {2, 1, 3},
    {2, 3, 1},
    {3, 1, 2},
    {3, 2, 1}
  };

  for(auto v: valori) {
    cout << somma_quadrati_maggiori(v[0], v[1], v[2]) << endl;
  }

  return 0;
}