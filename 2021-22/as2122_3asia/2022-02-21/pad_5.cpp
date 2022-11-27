#include <iostream>
#include <string>
#include <sstream>
#include <cassert>
using namespace std;

string pad5(int numero) {
  ostringstream oNumeroCon5zeriAvanti;
  oNumeroCon5zeriAvanti << "00000" << numero;
  const string numeroCon5zeriAvanti = oNumeroCon5zeriAvanti.str();
  return numeroCon5zeriAvanti.substr(numeroCon5zeriAvanti.size()-5, 5);
}

void testPad5() {
  assert(pad5(3) == "00003");
}

int main () {
  testPad5();
  int n = 0;
  for (int i = 1; i < 6; i++) {
    n = n * 10 + i;
    cout << pad5(n) << endl;
  }

  return 0;
}
