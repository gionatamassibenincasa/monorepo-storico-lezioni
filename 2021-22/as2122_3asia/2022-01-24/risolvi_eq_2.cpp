#include <iostream>
#include <cmath>
using namespace std;

double risolvi_eq2(int a, int b, int c) {
	double discriminante = b * b - 4 * a * c;
  return (-b + sqrt(discriminante))/(2*a);
}

int main() {
  int valori[][3] = {
    {1, 0, -1},
    {1, 2, 1},
    {1, 5, 6}
  };

  for (auto v: valori) {
    cout << risolvi_eq2(v[0], v[1], v[2]) << endl;
  }
  return 0;
}