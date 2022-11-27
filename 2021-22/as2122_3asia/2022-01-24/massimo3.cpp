#include <iostream>
using namespace std;

int massimo(int a, int b) {
  if (a >= b) return a;
  return b;
}

int massimo3(int a, int b, int c) {
  return massimo(massimo(a, b), c);
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
    cout << massimo3(v[0], v[1], v[2]) << endl;
  }

  return 0;
}