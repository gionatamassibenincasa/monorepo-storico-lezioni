#include <iostream>
using namespace std;

double pi_quarti() {
	int denominatore = 1;
  int segno = 1;
  double accumulatore = 0;
  while (denominatore <= 100) {
    if (segno == 1)
      accumulatore += 1./denominatore;
    else
      accumulatore -= 1./denominatore;
    denominatore += 2;
    segno *= -1;
  }

  return accumulatore;
}

int main() {
  cout << pi_quarti() * 4 << endl;
  return 0;
}