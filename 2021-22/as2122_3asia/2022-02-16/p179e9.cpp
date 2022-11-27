#include <cassert>
#include <cmath>
#include <iostream>
using namespace std;

bool perpendicolari(double m1, double m2) { return (fabs(m1 * m2 + 1) < 1e-4); }

void test() {
  assert(perpendicolari(-1, 1));
  assert(perpendicolari(2, -0.5));
  assert(!perpendicolari(3, -4));
}

int main() {
  test();
  double m1;
  double m2;
  cout << "Inserisci un coefficiente angolare : " << endl;
  cin >> m1;
  cout << "Inserisci un coefficiente angolare : " << endl;
  cin >> m2;
  if (perpendicolari(m1, m2))
    cout << "Perpendicolari" << endl;
  else
    cout << "Non perpendicolari" << endl;

  return 0;
}